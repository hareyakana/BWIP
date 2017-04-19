#include "Riostream.h"
#include "TString.h"
#include "TFile.h"
#include "TTree.h"
#include "TSystem.h"

// root test.cc
// Converts the cvs recorded by keysight multi......
// スキャン,時刻,101 <DigitalGauge1> (VDC),アラーム 101,102 <DigitalGauge2> (VDC),アラーム 102,103 <DigitalGauge3> (VDC),アラーム 103,104 <DigitalGauge4> (VDC),アラーム 104,105 <DigitalGauge5> (VDC),アラーム 105,106 <PiraniGauge> (VDC),アラーム 106,107 (VDC),アラーム 107,108 (VDC),アラーム 108,109 (VDC),アラーム 109,110 (VDC),アラーム 110,111 (VDC),アラーム 111,112 (VDC),アラーム 112,113 <1KPot> (VDC),アラーム 113,114 <MixingChamber> (VDC),アラーム 114,115 <HeatExchanger> (OHM),アラーム 115,116 <Still> (OHM),アラーム 116

{
//   example of macro to read data from an ascii file and
//   create a root file with an histogram and an ntuple.
 
   gROOT->Reset();

   FILE *fp = fopen("/test.csv","r");

   Float_t x,y,z;
   Int_t ncols;
   Int_t nlines = 0;
   TFile *f = new TFile("basic.root","RECREATE");
   TNtuple *ntuple = new TNtuple("ntuple","data from ascii file","x:y:z");

   while (25) {
      ncols = fscanf(fp,"%f %f %f",&x, &y, &z);
      if (ncols < 0) break;    
      if (nlines < 5) printf("x=%8f, y=%8f, z=%8f\n",x,y,z);
      h1->Fill(x);
      ntuple->Fill(x,y,z);
      nlines++;
   }
   printf(" found %d points\n",nlines);
   
   fclose(fp);

   f->Write();
}



void test2() {

   TString dir = gSystem->UnixPathName(__FILE__);
   dir.ReplaceAll("test2.cc","");
   dir.ReplaceAll("/./","/");

   Int_t n,Alarm101,Alarm102,Alarm103,Alarm104,Alarm105,Alarm106,Alarm107,Alarm108,Alarm109,Alarm110,Alarm111,Alarm112,Alarm113,Alarm114,Alarm115,Alarm116;
   Float_t DigitalGauge1,DigitalGauge2,DigitalGauge3,DigitalGauge4,DigitalGauge5,PiraniGauge,VDC107,VDC108,VDC109,VDC110,VDC111,VDC112,OneKPot,MixingChamber,HeatExchanger,Still;
   char Time[20];

   TFile *f = new TFile("test.root","RECREATE");
   TTree *tree = new TTree("ntuple","data from csv file");

   TFile *fin = new TFile("test.csv","r");
   char line[20];
   while (fgets(&line,20,fin)){
   	sscanf("%d,%d/%d/%d %d:%d:%d:%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d", &n,&i1,&y,&m,&d,&h,&mn,&s,&ss,&DigitalGauge1,&Alarm101,&DigitalGauge2,&Alarm102,&DigitalGauge3,&Alarm103,&DigitalGauge4,&Alarm104,&DigitalGauge5,&Alarm105,&PiraniGauge,&Alarm106,&VDC107,&Alarm107,&VDC108,&Alarm108,&VDC109,&Alarm109,&VDC110,&Alarm110,&VDC111,&Alarm111,&VDC112,&Alarm112,&OneKPot,&Alarm113,&MixingChamber,&Alarm114,&HeatExchanger,&Alarm115,&Still,&Alarm116);

   	tree->Branch("Scan",&n,"Scan/I");
   	tree->Branch("Time",&il,"Time/C");
   	tree->Branch("DigitalGauge1",&DigitalGauge1,"DigitalGauge1/F");
   	tree->Branch("alarm101",&Alarm101,"alarm101/I");
   	tree->Branch("DigitalGauge2",&DigitalGauge2,"DigitalGauge2/F");
   	tree->Branch("alarm102",&Alarm102,"alarm102/I");
   	tree->Branch("DigitalGauge3",&DigitalGauge3,"DigitalGauge3/F");
   	tree->Branch("alarm103",&Alarm103,"alarm103/I");
   	tree->Branch("DigitalGauge4",&DigitalGauge4,"DigitalGauge4/F");
   	tree->Branch("alarm104",&Alarm104,"alarm104/I");
   	tree->Branch("DigitalGauge5",&DigitalGauge5,"DigitalGauge5/F");
   	tree->Branch("alarm105",&Alarm105,"alarm105/I");
   	tree->Branch("PiraniGauge",&PiraniGauge,"PiraniGauge/F");
   	tree->Branch("alarm106",&Alarm106,"alarm106/I");
   	tree->Branch("107VDC",&VDC107,"107VDC/F");
   	tree->Branch("alarm107",&Alarm107,"alarm107/I");
   	tree->Branch("108VDC",&VDC108,"108VDC/F");
   	tree->Branch("alarm108",&Alarm108,"alarm108/I");
   	tree->Branch("109VDC",&VDC109,"109VDC/F");
   	tree->Branch("alarm109",&Alarm109,"alarm109/I");
   	tree->Branch("110VDC",&VDC110,"110VDC/F");
   	tree->Branch("alarm110",&Alarm110,"alarm110/I");
   	tree->Branch("111VDC",&VDC111,"111VDC/F");
   	tree->Branch("alarm111",&Alarm111,"alarm111/I");
   	tree->Branch("112VDC",&VDC112,"112VDC/F");
   	tree->Branch("alarm112",&Alarm112,"alarm112/I");
   	tree->Branch("1KPot",&OneKPot,"1KPot/F");
   	tree->Branch("alarm113",&Alarm113,"alarm113/I");
   	tree->Branch("MixingChamber",&MixingChamber,"MixingChamber/F");
   	tree->Branch("alarm114",&Alarm114,"alarm114/I");
   	tree->Branch("HeatExchanger",&HeatExchanger,"HeatExchanger/F");
   	tree->Branch("alarm115",&Alarm115,"alarm115/I");
   	tree->Branch("Still",&Still,"Still/F");
   	tree->Branch("alarm116",&Alarm116,"alarm116/I");

   	// f->write()

   }
   // tree->ReadFile("test.csv","Scan/I:Time/C:DigitalGauge1/F:alarm101/I:DigitalGauge2/F:alarm102/I:DigitalGauge3/F:alarm103/I:DigitalGauge4/F:alarm104/I:DigitalGauge5/F:alarm105/I:PiraniGauge/F:alarm106/I:107VDC/F:alarm107/I:108VDC/F:alarm108/I:109VDC/F:alarm109/I:110VDC/F:alarm110/I:111VDC/F:alarm111/I:112VDC/F:alarm112/I:1KPot/F:alarm113/I:MixingChamber/F:alarm114/I:HeatExchanger/F:alarm115/I:Still/F:alarm116/I",',');
   f->Write();
}