%% 查找相关节点
clear;
clc;
xDoc = xmlread('SeatMdSwtchArbt_swc.arxml'); %获取ARXML文件

xRoot = xDoc.getDocumentElement(); %获取根节点

PORTS = xRoot.getElementsByTagName('PORTS'); %获取port节点
pPORTS = PORTS.item(0).getElementsByTagName('P-PORT-PROTOTYPE'); %获取所有的p-port口节点
rPORTS = PORTS.item(0).getElementsByTagName('R-PORT-PROTOTYPE'); %获取所有的r-port口节点
CSIf = xRoot.getElementsByTagName('CLIENT-SERVER-INTERFACE'); %获取所有的client server interface节点
ParIf = xRoot.getElementsByTagName('PARAMETER-INTERFACE'); %获取所有的parameter interface节点
SRIf = xRoot.getElementsByTagName('SENDER-RECEIVER-INTERFACE'); %获取所有的sender receiver interface节点

index = 1;
InputVarIdx = 1;
InputCalIdx = 1;
InputClentIdx = 1;
OutputVarIdx = 1;
OutputCalIdx = 1;
OutputClentIdx = 1;
%% 整理所有的cs port interface
Lenth = CSIf.getLength();
for  i=0:Lenth-1
    try
        CSIfInfo(i+1).Name = char(CSIf.item(i).getElementsByTagName('SHORT-NAME').item(0).getTextContent());
        %%disp(CSIfInfo(i+1).Name);
        
        IfInfo(index).name = CSIfInfo(i+1).Name;
        IfInfo(index).IfType = 'CS';
        IfInfo(index).SqueNum = i+1;
        index = index+1;
    catch
        disp('cs port interface error');
        %disp(num2str(i+1));
    end
end
%% 整理所有的paremeter port interface
Lenth = ParIf.getLength();
for  i=0:Lenth-1
    try
        PARIfInfo(i+1).Name = char(ParIf.item(i).getElementsByTagName('SHORT-NAME').item(0).getTextContent());
        %%disp(PARIfInfo(i+1).Name);
        
        IfInfo(index).name = PARIfInfo(i+1).Name;
        IfInfo(index).IfType = 'PAR';
        IfInfo(index).SqueNum = i+1;
        index = index+1;
        
        TempType = char(ParIf.item(i).getElementsByTagName('PARAMETERS').item(0).getElementsByTagName('PARAMETER-DATA-PROTOTYPE').item(0).getElementsByTagName('TYPE-TREF').item(0).getTextContent());
        PARIfInfo(i+1).Type = char(regexp(TempType,'[^/]+$','match'));
        %%disp(PARIfInfo(i+1).Type);
    catch
        disp('paremeter port interface error');
        %disp(num2str(i+1));
    end
end
%% 整理所有的SR port interface
Lenth = SRIf.getLength();
for  i=0:Lenth-1
    try
        SRIfInfo(i+1).Name = char(SRIf.item(i).getElementsByTagName('SHORT-NAME').item(0).getTextContent());
        %%disp(SRIfInfo(i+1).Name);
        
        IfInfo(index).name = SRIfInfo(i+1).Name;
        IfInfo(index).IfType = 'SR';
        IfInfo(index).SqueNum = i+1;
        index = index+1;
        
        TempType = char(SRIf.item(i).getElementsByTagName('DATA-ELEMENTS').item(0).getElementsByTagName('VARIABLE-DATA-PROTOTYPE').item(0).getElementsByTagName('TYPE-TREF').item(0).getTextContent());
        SRIfInfo(i+1).Type = char(regexp(TempType,'[^/]+$','match'));
        %%disp(SRIfInfo(i+1).Type);
    catch
        disp('SR port interface error');
        %disp(num2str(i+1));
    end
end
%% 整理所有输入接口信息 PortName InitValue IfName
Lenth = rPORTS.getLength();
for  i=0:Lenth-1
    try
        PortNameTemp = char(rPORTS.item(i).getElementsByTagName('SHORT-NAME').item(0).getTextContent());
        %%disp(rPortInfo(i+1).PortName);
    catch
        %disp('rPORTS port error');
        %disp(num2str(i+1));
    end
    
    try
        rPortInitValueTemp = char(rPORTS.item(i).getElementsByTagName('VALUE').item(0).getTextContent());
        %%disp(rPortInfo(i+1).InitValue);
    catch
        try
            rPortInitValueTemp = char(rPORTS.item(i).getElementsByTagName('V').item(0).getTextContent());
        catch
            try
                rPortInitValueTemp = char(rPORTS.item(i).getElementsByTagName('VT').item(0).getTextContent());
            catch
                rPortInitValueTemp = 'NA';
            end
        end
        %disp('rPORTS port error');
        %disp(num2str(i+1));
    end
    
    try
        TempIfName = char(rPORTS.item(i).getElementsByTagName('REQUIRED-INTERFACE-TREF').item(0).getTextContent());
        rPortIfNameTemp = char(regexp(TempIfName,'[^/]+$','match'));
        %%disp(rPortInfo(i+1).IfName);
        idx = find(strcmp({IfInfo.name}, rPortIfNameTemp));
        if(strcmp(IfInfo(idx).IfType,'SR'))
            try
                Input.Variables(InputVarIdx).Name = PortNameTemp;
            end
            try
                Input.Variables(InputVarIdx).InitVal = rPortInitValueTemp;
            end
            try
                Input.Variables(InputVarIdx).DataType = SRIfInfo(IfInfo(idx).SqueNum).Type;
            end
            InputVarIdx = InputVarIdx+1;
            
        elseif(strcmp(IfInfo(idx).IfType,'PAR'))
            try
                Input.Calibration(InputCalIdx).Name = PortNameTemp;
            end
            try
                Input.Calibration(InputCalIdx).InitVal = rPortInitValueTemp;
            end
            try
                Input.Calibration(InputCalIdx).DataType = PARIfInfo(IfInfo(idx).SqueNum).Type;
            end
            InputCalIdx = InputCalIdx+1;
            
        elseif(strcmp(IfInfo(idx).IfType,'CS'))
            try
                Input.Client(InputClentIdx).Name = PortNameTemp;
            end
            InputClentIdx = InputClentIdx+1;
        else
            aaa =1;
            
        end
    catch
        disp('rPORTS port error');
        %disp(num2str(i+1));
    end
end
%% 整理所有pPORTS信息 PortName InitValue IfName
Lenth = pPORTS.getLength();
%pPortInfo[pPortLenth] =0;
for  i=0:Lenth-1
    try
        PortNameTemp = char(pPORTS.item(i).getElementsByTagName('SHORT-NAME').item(0).getTextContent());
        %%disp(rPortInfo(i+1).PortName);
    catch
        %disp('pPORTS port error');
        %disp(num2str(i+1));
    end
    
    try
        pPortInitValueTemp = char(pPORTS.item(i).getElementsByTagName('VALUE').item(0).getTextContent());
        %%disp(rPortInfo(i+1).InitValue);
    catch
        try
            pPortInitValueTemp = char(pPORTS.item(i).getElementsByTagName('V').item(0).getTextContent());
        catch
            try
                pPortInitValueTemp = char(pPORTS.item(i).getElementsByTagName('VT').item(0).getTextContent());
            catch
                pPortInitValueTemp = 'NA';
            end
        end
        %disp('pPORTS port error');
        %disp(num2str(i+1));
    end
    
    try
        TempIfName = char(pPORTS.item(i).getElementsByTagName('PROVIDED-INTERFACE-TREF').item(0).getTextContent());
        pPortIfNameTemp = char(regexp(TempIfName,'[^/]+$','match'));
        %%disp(rPortInfo(i+1).IfName);
        idx = find(strcmp({IfInfo.name}, pPortIfNameTemp));
        if(strcmp(IfInfo(idx).IfType,'SR'))
            try
                Output.Variables(OutputVarIdx).Name = PortNameTemp;
            end
            try
                Output.Variables(OutputVarIdx).InitVal = pPortInitValueTemp;
            end
            try
                Output.Variables(OutputVarIdx).DataType = SRIfInfo(IfInfo(idx).SqueNum).Type;
            end
            OutputVarIdx = OutputVarIdx+1;
            
        elseif(strcmp(IfInfo(idx).IfType,'PAR'))
            try
                Output.Calibration(OutputCalIdx).Name = PortNameTemp;
            end
            try
                Output.Calibration(OutputCalIdx).InitVal = pPortInitValueTemp;
            end
            try
                Output.Calibration(OutputCalIdx).DataType = PARIfInfo(IfInfo(idx).SqueNum).Type;
            end
            OutputCalIdx = OutputCalIdx+1;
            
        elseif(strcmp(IfInfo(idx).IfType,'CS'))
            try
                Output.Server(OutputClentIdx).Name = PortNameTemp;
            end
            OutputClentIdx = OutputClentIdx+1;
        else
            aaa =1;
            
        end
    catch
        %disp('pPORTS port error');
        %disp(num2str(i+1));
    end
end
%% 打印

disp('######################################################INPUT######################################################');
try
    InputVarLen = length(Input.Variables);
catch
    InputVarLen = 0;
end
disp(['Variables:',num2str(InputVarLen),'================================']);
for i=1:InputVarLen
    disp(Input.Variables(i).Name);
end
disp('--------DataType--------');
for i=1:InputVarLen
    disp(Input.Variables(i).DataType);
end
disp('--------InitVal--------');
for i=1:InputVarLen
    disp(Input.Variables(i).InitVal);
end

try
    InputCalLen = length(Input.Calibration);
    disp(['Calibration:',num2str(InputCalLen),'================================']);
    for i=1:InputCalLen
        disp(Input.Calibration(i).Name);
    end
    disp('--------DataType--------');
    for i=1:InputCalLen
        disp(Input.Calibration(i).DataType);
    end
    disp('--------InitVal--------');
    for i=1:InputCalLen
        disp(Input.Calibration(i).InitVal);
    end
catch
end

try
    InputCliLen = length(Input.Client);
    disp(['Client:',num2str(InputCliLen),'================================']);
    for i=1:InputCliLen
        disp(Input.Client(i).Name);
    end
catch
end

disp('######################################################OUTPUT######################################################');
OutputVarLen = length(Output.Variables);
disp(['Variables:',num2str(OutputVarLen),'================================']);
for i=1:OutputVarLen
    disp(Output.Variables(i).Name);
end
disp('--------DataType--------');
for i=1:OutputVarLen
    disp(Output.Variables(i).DataType);
end
disp('--------InitVal--------');
for i=1:OutputVarLen
    disp(Output.Variables(i).InitVal);
end

try
    OutputCalLen = length(Output.Calibration);
    disp(['Calibration:',num2str(OutputCalLen),'================================']);
    for i=1:OutputCalLen
        disp(Output.Calibration(i).Name);
    end
    disp('--------DataType--------');
    for i=1:OutputCalLen
        disp(Output.Calibration(i).DataType);
    end
    disp('--------InitVal--------');
    for i=1:OutputCalLen
        disp(Output.Calibration(i).InitVal);
    end
catch
    
end

try
    OutputServer = length(Output.Server);
    disp(['Server:',num2str(OutputServer),'================================']);
    for i=1:OutputServer
        disp(Output.Server(i).Name);
    end
catch
end
