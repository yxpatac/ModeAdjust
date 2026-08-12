# ModeAdjust系统工作流与模块分类总结

## 系统总体架构

ModeAdjust系统采用AUTOSAR 4.0.3 Client-Server架构，基于同步调用模式实现座椅模式调整功能。整个系统分为三个主要部分：

- **ModeAdjustNewArch**（约282个模块）：座位级控制 + 模式使能控制 + 全局聚合
- **ModeStatAndRspNewArch**（约35个模块）：状态管理 + 响应输出 + 网络通信  
- **ModeAdjustPre**（8个模块）：输入预处理 + 模式请求仲裁

系统核心信号为`modestate32`（32位模式状态字），贯穿整个系统，用于标识各模式的激活状态。

## 五阶段完整工作流

### Phase 1: 系统级调度（ModeAdjust → ModeAdjustCaller）

顶层系统`ModeAdjust.slx`每10ms调用一次`ModeAdjustCaller`，作为整个模式调整流程的入口点。

**ModeAdjustCaller模块详情：**
- **EventType**: TimingEvent (10ms周期)
- **R-Ports(14)**: 各座位Caller模块 + 模式使能控制Caller + 状态响应Caller
- **P-Ports(0)**: 纯调度器，无输出
- **功能**: 分发调用到各个座位级Caller和全局控制模块

### Phase 2: 座位级调度（各座位Caller）

#### 驾驶座调度（DrvStCaller）
- **R-Ports(5)**: DrvStFtCtrl + DrvStFtHolderChk + DrvStFtIsPosChk + DrvStFtTrgtPosSelc + DrvStRclCmdSrvCal
- **功能**: 专门调度驾驶座脚托(Footrest)相关的Pipeline模块

#### 副驾座调度（PassStCaller）  
- **R-Ports(17)**: Ft+BkRecln+CshnFld+FwdBkwd各部件Pipeline + RclCmdSrvCal
- **功能**: 调度副驾座四个主要部件（脚托、靠背、坐垫折叠、前后移动）的完整Pipeline

#### 二排左座调度（SecRwLtStCaller）
- **R-Ports(45)**: 11个部件Pipeline + 辅助模块
- **功能**: 调度二排左座所有可调部件的完整控制流程

#### 三排左座调度（ThdRwLtStCaller）
- **R-Ports(14)**: BkRecln+CshnFld+FwdBkwd+SpdCtrl + RclCmdSrvCal
- **功能**: 调度三排左座主要调节功能

### Phase 3: Pipeline执行流程（以DrvStFt为例）

每个座位部件都遵循严格的5阶段Pipeline执行顺序：

#### 3.1 DrvStFtEnServer（使能检查模块）
**功能描述**: 模式使能决策模块，判断当前驾驶座脚托是否应该被使能执行模式调整。

**接口详情**:
- **输入(R-Ports)**: 0个（不依赖外部输入）
- **输出(P-Ports)**: 
  - `DrvStFtEn`: 脚托使能信号

**工作原理**: 
检查全局模式状态字(`modestate32`)中对应脚托模式的位，如果相关模式被激活且满足基本条件，则输出使能信号。这是纯粹的状态机决策点，确保只有在正确模式下才允许执行脚托控制。

#### 3.2 DrvStFtHolderChk（保持状态检查模块）
**功能描述**: 安全保持检查模块，验证脚托当前是否处于安全的保持状态。

**接口详情**:
- **输入(R-Ports)**: 
  - `ChldLkRspFlgL`: 左侧儿童锁响应标志
  - `R3LMdSeatOccupied`: 三排左侧座椅占用状态
- **输出(P-Ports)**:
  - `DrvStFtHolderChk`: 保持检查结果信号  
  - `MdXXDrvStFtHolderInfo`: 详细的保持状态信息

**工作原理**:
检查儿童锁状态和后排座椅占用情况，避免脚托移动时与乘客发生碰撞。只有在所有安全条件满足时，才允许Pipeline继续执行。

#### 3.3 DrvStFtTrgtPosSelc（目标位置选择模块）
**功能描述**: 多模式目标位置计算模块，根据当前激活的模式选择对应的脚托目标位置。

**接口详情**:
- **输入(R-Ports)**: 23个
  - 各种模式目标位置参数（EZE/EZQ/Recovery/VIP等）
  - 当前脚托实际位置和移动配置
  - VIP参考角度和座位配置标志`StNumFlg`
- **输出(P-Ports)**: 5个
  - `DrvStFtTrgtPosSelc`: 目标位置选择完成信号
  - 各模式校准后的位置值（EZE/EZQ/RecvL/VIPL）

**工作原理**:
根据`modestate32`中的模式激活位确定当前模式，从对应配置参数读取目标位置，考虑座位配置选择正确参数集，输出校准后的目标位置。

#### 3.4 DrvStFtIsPosChk（到位检查模块）
**功能描述**: 位置到位验证模块，检查脚托是否已到达目标位置或在容差范围内。

**接口详情**:
- **输入(R-Ports)**: 11个
  - 目标位置校准值（来自TrgtPosSelc）
  - 当前实际位置和位置有效性
  - 容差参数和位置增量
  - 全局模式状态和通用到位信号
- **输出(P-Ports)**: 6个
  - `DrvStFtIsPosChk`: 到位检查完成信号
  - `DrvStFtNotMovFlg`: 不移动标志
  - `MdXXDrvStFtIsTargetPos*`: 多种到位状态信号

**工作原理**:
比较当前实际位置与目标位置的差值，使用容差参数判断是否在可接受范围内，考虑位置有效性确保数据可靠，输出多个到位状态信号供电机控制使用。

#### 3.5 DrvStFtCtrl（电机控制模块）
**功能描述**: 最终执行控制模块，负责实际驱动脚托电机执行移动操作。

**接口详情**:
- **输入(R-Ports)**: 12个
  - 使能信号、不移动标志、保持信息
  - 到位状态、目标位置、移动配置
  - 各种时间参数和触发位掩码
  - 全局状态`modestate32`
- **输出(P-Ports)**: 4个
  - `DrvFtStEnTrig`: 脚托使能触发信号
  - `IfVeSMSbDrvStFtUpwdDnwdTrgtPosOut`: 目标位置输出到硬件层

**工作原理**:
接收所有前置模块的决策结果，根据使能信号和到位状态决定是否启动电机，控制电机按目标位置移动，监控各种时间限制和安全条件，最终输出控制信号到底层硬件。

### Phase 4: 模式使能控制（ModeStEnCtrlCaller → ModeStEnCtrl4s/6s7s）

#### ModeStEnCtrlCaller（模式使能控制调度器）
- **R-Ports(5)**: MdXX_DoneChk + ModeStEnCtrl4s + ModeStEnCtrl6s7s + PreCondition + StNumFlg
- **功能**: 调度不同座位配置下的模式使能控制逻辑

#### ModeStEnCtrl4s（4座模式使能控制）
- **R-Ports(21)**: EZE4sL/R, EZQ4sL/R, FwdL/R, LgrstClsL/R, LgrstOpnL/R, LyL/R, RecvL4s/R4s, VIPL3582/4s, VIPR3582/4s, WelcomeBkwd/Fwd
- **功能**: 管理4座车型下所有模式的使能/去使能状态机

#### ModeStEnCtrl6s7s（6/7座模式使能控制）
- **R-Ports(47)**: BigFour, Comfort, EZE, EZQ, Famly, INTM, Lug, Md27~62, Recv, VIP全系列等
- **功能**: 管理6/7座车型下更复杂的模式使能逻辑

### Phase 5: 状态管理与响应输出

#### ModeRspCaller（响应输出调度器）
- **R-Ports(8)**: CHM2Ctrl + MdXX_RspOutCommCalc + MdXX_RspToNetWork + MdXX_Status + MdXX_StatusToNetWork + SRSModeState + SRSSwIndCtrl + StPassCmprtMdHMIDisCmdCalc
- **功能**: 调度所有响应和状态输出模块

#### ModeStateCtrlCaller（状态控制调度器）
- **R-Ports(5)**: MdEnAndBsyChk + MdSWReqChk + MdXX_QuitChk + MdXXArray + stateonoffchk
- **功能**: 调度模式状态相关的检查和控制模块

## 模块分类详解

### 1. Caller类模块（调度器）
- **特点**: EventType为TimingEvent或OpInvoked，R-Ports数量多，P-Ports为0
- **作用**: 实现分层调度，解耦上层系统与具体功能实现
- **代表**: ModeAdjustCaller, 各座位Caller, ModeStEnCtrlCaller等

### 2. Pipeline类模块（功能执行单元）
- **特点**: EventType为OpInvoked，有明确的输入输出接口
- **作用**: 执行具体的业务逻辑，每个模块职责单一
- **子类**:
  - EnServer: 使能决策
  - HolderChk: 安全保持检查  
  - TrgtPosSelc: 目标位置计算
  - IsPosChk: 到位验证
  - Ctrl: 电机控制

### 3. StEnCtrl类模块（状态使能控制）
- **特点**: 管理复杂的状态机逻辑，R-Ports数量庞大
- **作用**: 控制各模式的使能/去使能状态转换
- **代表**: ModeStEnCtrl4s(21个R-Port), ModeStEnCtrl6s7s(47个R-Port)

### 4. Array类模块（批量处理）
- **特点**: 处理大量相似信号的批量操作
- **代表**: MdXXArray(125个R-Port): 处理每个模式的SrcReqTp、SoftInt、SwInt信号

### 5. Check类模块（状态检查）
- **特点**: 收集和聚合多个信号进行综合判断
- **代表**: MdXX_DoneChk: 收集60+个MdDone信号

### 6. Network类模块（网络通信）
- **特点**: P-Ports数量巨大，负责对外输出
- **代表**: 
  - MdXX_RspToNetWork(138个P-Port): HMI响应信号
  - MdXX_StatusToNetWork(51个P-Port): 状态诊断信号

### 7. Pre类模块（预处理）
- **特点**: 处理原始输入信号，进行初步处理和转换
- **代表**: ModeInputHandle(187个P-Port + 221个R-Port)

### 8. Auxiliary类模块（辅助功能）
- **特点**: 提供特定的辅助功能
- **代表**: 
  - StNumChk: 输出座位配置标志StNumFlg
  - ThdRwStOccupyChk: 输出三排座椅占用状态
  - SBC: 输出9个DTC诊断信号

## 关键设计特点

### 1. 分层调度架构
```
顶层系统 → Caller → Pipeline链 → 硬件层
```
实现了关注点分离，顶层不关心具体实现细节，功能模块不关心调度逻辑。

### 2. 严格顺序执行
虽然采用同步调用，但Pipeline内部有严格的执行顺序：
```
EnServer → HolderChk → TrgtPosSelc → IsPosChk → Ctrl
```
每个步骤都依赖前一步的输出，确保逻辑正确性。

### 3. 安全优先设计
多重安全检查机制：
- 儿童锁检查
- 座椅占用检查  
- 位置有效性验证
- 时间限制监控

### 4. 配置驱动架构
通过`StNumFlg`座位配置标志，动态选择不同的参数集和逻辑路径，支持4座/6座/7座等多种车型配置。

### 5. 模块化设计
每个模块职责单一，便于维护和扩展。新增模式只需添加对应的StEnCtrl模块和Pipeline模块，不影响现有逻辑。

## 信号流图

```
ModeAdjust(10ms)
    ↓
ModeAdjustCaller
    ├── DrvStCaller → DrvStFt Pipeline(5阶段)
    ├── PassStCaller → PassSt各部件Pipeline  
    ├── SecRwLtStCaller → SecRwLtSt各部件Pipeline
    ├── SecRwRtStCaller → SecRwRtSt各部件Pipeline
    ├── ThdRwLtStCaller → ThdRwLtSt各部件Pipeline
    ├── ThdRwRtStCaller → ThdRwRtSt各部件Pipeline
    ├── ModeStEnCtrlCaller → ModeStEnCtrl4s/6s7s
    └── ModeStatAndRspCaller → 状态响应输出
```

## 总结

ModeAdjust系统通过Caller-Pipeline架构实现了复杂的座椅模式调整功能。Caller模块负责分层调度和解耦，Pipeline模块负责具体的业务逻辑执行。整个系统具有良好的可维护性、可扩展性和安全性，能够支持多种车型配置和丰富的座椅调节模式。