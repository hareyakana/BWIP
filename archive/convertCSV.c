#include "stdio.h"

void convertCSV()
{
	FILE *f = fopen("testdata.csv","r");

	// int nlines = 21;
	int n,Alarm101,Alarm102,Alarm103,Alarm104,Alarm105,Alarm106,Alarm107,Alarm108,Alarm109,Alarm110,Alarm111,Alarm112,Alarm113,Alarm114,Alarm115,Alarm116;
   	float DigitalGauge1,DigitalGauge2,DigitalGauge3,DigitalGauge4,DigitalGauge5,PiraniGauge,VDC107,VDC108,VDC109,VDC110,VDC111,VDC112,OneKPot,MixingChamber,HeatExchanger,Still;
   	char Time[30];

	while(fscanf(f, "%d,%d/%d/%d %d:%d:%d:%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d", &n,&Time,&DigitalGauge1,&Alarm101,&DigitalGauge2,&Alarm102,&DigitalGauge3,&Alarm103,&DigitalGauge4,&Alarm104,&DigitalGauge5,&Alarm105,&PiraniGauge,&Alarm106,&VDC107,&Alarm107,&VDC108,&Alarm108,&VDC109,&Alarm109,&VDC110,&Alarm110,&VDC111,&Alarm111,&VDC112,&Alarm112,&OneKPot,&Alarm113,&MixingChamber,&Alarm114,&HeatExchanger,&Alarm115,&Still,&Alarm116)!=EOF)
	{
		printf("%d,%d/%d/%d %d:%d:%d:%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d\n",n,Time,DigitalGauge1,Alarm101,DigitalGauge2,Alarm102,DigitalGauge3,Alarm103,DigitalGauge4,Alarm104,DigitalGauge5,Alarm105,PiraniGauge,Alarm106,VDC107,Alarm107,VDC108,Alarm108,VDC109,Alarm109,VDC110,Alarm110,VDC111,Alarm111,VDC112,Alarm112,OneKPot,Alarm113,MixingChamber,Alarm114,HeatExchanger,Alarm115,Still,Alarm116);
	}
}