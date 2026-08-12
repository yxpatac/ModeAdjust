#ifndef RTE_TYPE_H
#define RTE_TYPE_H

typedef enum{
SRSIndicatorStat_NoIndicator,
SRSIndicatorStat_Mode1On,
SRSIndicatorStat_Mode2On,
SRSIndicatorStat_Mode3On,
SRSIndicatorStat_Mode4On,
SRSIndicatorStat_Mode5On,
SRSIndicatorStat_Mode6On,
SRSIndicatorStat_Mode7On,
SRSIndicatorStat_Mode8On,
SRSIndicatorStat_Mode9On,
SRSIndicatorStat_Mode10On,
Reserved1,
Reserved2,
Reserved3,
Reserved4,
Reserved5
}SRSIndicatorStat;

typedef enum{
IndicationOff,
FlashRate1,
FlashRate2,
Continuous
}SRSSlctSwIndTyp;



#endif