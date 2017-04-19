// #include "Riostream.h"
// #include "TString.h"
// #include "TFile.h"
// #include "TTree.h"
// #include "TSystem.h"
// #include <fstream>
// #include <iostream>
// using namespace std;

// root convert_CSVroot.cc
// Converts the cvs recorded by keysight multi......
// スキャン,時刻,101 <DigitalGauge1> (VDC),アラーム 101,102 <DigitalGauge2> (VDC),アラーム 102,103 <DigitalGauge3> (VDC),アラーム 103,104 <DigitalGauge4> (VDC),アラーム 104,105 <DigitalGauge5> (VDC),アラーム 105,106 <PiraniGauge> (VDC),アラーム 106,107 (VDC),アラーム 107,108 (VDC),アラーム 108,109 (VDC),アラーム 109,110 (VDC),アラーム 110,111 (VDC),アラーム 111,112 (VDC),アラーム 112,113 <1KPot> (VDC),アラーム 113,114 <MixingChamber> (VDC),アラーム 114,115 <HeatExchanger> (OHM),アラーム 115,116 <Still> (OHM),アラーム 116


void convertCSV_root() {

   // ifstream infile;
   // infile.open("precool_data.csv");

   // string Scan,Time,DigitalGauge1, DigitalGauge2, DigitalGauge3, DigitalGauge4,DigitalGauge5, PiraniGauge,vdc107, KPot, MixingChamber, HeatExchanger, Still, alarm101,alarm102,alarm103,alarm104,alarm105,alarm106,alarm107,alarm113,alarm114,alarm115,alarm116,squid,alarm117;

   TFile *f = new TFile("DMM5_data.root","RECREATE");
   TTree *tree = new TTree("tree","tree");

   // string line;
   // for (int i=0; getline(infile,line);++i){
   //    getline(infile, Scan, ',');
   //    getline(infile, Time, ',');
   //    getline(infile, DigitalGauge1, ',');
   //    getline(infile, alarm101, ',');
   //    getline(infile, DigitalGauge2, ',');
   //    getline(infile, alarm102, ',');
   //    getline(infile, DigitalGauge3, ',');
   //    getline(infile, alarm103, ',');
   //    getline(infile, DigitalGauge4, ',');
   //    getline(infile, alarm104, ',');
   //    getline(infile, DigitalGauge5, ',');
   //    getline(infile, alarm105, ',');
   //    getline(infile, PiraniGauge, ',');
   //    getline(infile, alarm106, ',');
   //    getline(infile, vdc107, ',');
   //    getline(infile, alarm107, ',');
   //    getline(infile, KPot, ',');
   //    getline(infile, alarm113, ',');
   //    getline(infile, MixingChamber, ',');
   //    getline(infile, alarm114, ',');
   //    getline(infile, HeatExchanger, ',');
   //    getline(infile, alarm115, ',');
   //    getline(infile, Still, ',');
   //    getline(infile, alarm116, ',');
   //    getline(infile, squid, ',');
   //    getline(infile, alarm117, '\n');

   //    cout << Scan << endl;
      // infile >> Scan >> Time >> DigitalGauge1 >> alarm101 >> DigitalGauge2 >> alarm102 >> DigitalGauge3 >> alarm103 >> DigitalGauge4 >> alarm104 >> DigitalGauge5 >> alarm105 >> PiraniGauge >> alarm106 >> vdc107 >> alarm107 >> vdc108 >> alarm108 >> vdc109 >> alarm109 >> vdc110 >> alarm110 >> vdc111 >> alarm111 >> vdc112 >> alarm112 >> KPot >> alarm113 >> MixingChamber >> alarm114 >> HeatExchanger >> alarm115 >> Still >> alarm116;
      // cout << Scan << Time << endl;
      
   // }   

   // TString dir = gSystem->UnixPathName(__FILE__);
   // dir.ReplaceAll("convertCSV_root.cc","");
   // dir.ReplaceAll("/./","/");
   // // ifstream in;
   // // in.open(Form("data.csv",dir.Data()));

   // // FILE *fp = fopen(Form("data.csv","r");

   // Int_t Scan;
   // Char_t Time;
   // Float_t DigitalGauge1, DigitalGauge2, DigitalGauge3, DigitalGauge4,DigitalGauge5,PiraniGauge, 107VDC, 1KPot, MixingChamber, HeatExchanger, Still, squid;
   // Int_t alarm101,alarm102,alarm103,alarm104,alarm105,alarm106,alarm107,alarm113,alarm114,alarm115,alarm116,alarm117;

      // tree->Branch("Scan",&Scan,"Scan/I");
      // tree->Branch("Time",&Time,"Time/C");
      // tree->Branch("DigitalGauge1",&DigitalGauge1,"DigitalGauge1/F");
      // tree->Branch("alarm101",&alarm101,"alarm101/I");
      // tree->Branch("DigitalGauge2",&DigitalGauge2,"DigitalGauge2/F");
      // tree->Branch("alarm102",&alarm102,"alarm102/I");
      // tree->Branch("DigitalGauge3",&DigitalGauge3,"DigitalGauge3/F");
      // tree->Branch("alarm103",&alarm103,"alarm103/I");
      // tree->Branch("DigitalGauge4",&DigitalGauge4,"DigitalGauge4/F");
      // tree->Branch("alarm104",&alarm104,"alarm104/I");
      // tree->Branch("DigitalGauge5",&DigitalGauge5,"DigitalGauge5/F");
      // tree->Branch("alarm105",&alarm105,"alarm105/I");
      // tree->Branch("PiraniGauge",&PiraniGauge,"PiraniGauge/F");
      // tree->Branch("alarm106",&alarm106,"alarm106/I");
      // tree->Branch("107VDC",&vdc107,"107VDC/F");
      // tree->Branch("alarm107",&alarm107,"alarm107/I");
      // tree->Branch("KPot",&KPot,"KPot/F");
      // tree->Branch("alarm113",&alarm113,"alarm113/I");
      // tree->Branch("MixingChamber",&MixingChamber,"MixingChamber/F");
      // tree->Branch("alarm114",&alarm114,"alarm114/I");
      // tree->Branch("HeatExchanger",&HeatExchanger,"HeatExchanger/F");
      // tree->Branch("alarm115",&alarm115,"alarm115/I");
      // tree->Branch("Still",&Still,"Still/F");
      // tree->Branch("alarm116",&alarm116,"alarm116/I");
      // tree->Branch("squid",&squid,"squid/F");
      // tree->Branch("alarm116",&alarm117,"alarm117/I");
   
   // // Int_t fScan;
   // // Char_t fTime;
   // // Float_t fDigitalGauge1, fDigitalGauge2, fDigitalGauge3, fDigitalGauge4,fDigitalGauge5, fPiraniGauge, f107VDC, f108VDC, f109VDC, f110VDC, f111VDC, f112VDC, f1KPot, fMixingChamber, fHeatExchanger, fStill;
   // // Int_t falarm101, falarm102, falarm103, falarm104, falarm105, falarm106,falarm107, falarm108, falarm109, falarm110, falarm111, falarm112, falarm113, falarm114, falarm115, falarm116;

   // // while (fscanf(fp,"%d,%c,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,%f,%d,",&fScan, fTime, fDigitalGauge1, falarm101, fDigitalGauge2, falarm102, fDigitalGauge3, falarm103, fDigitalGauge4, falarm104, fDigitalGauge5, falarm105, fPiraniGauge, falarm106, f107VDC, falarm107, f108VDC, falarm108, f109VDC, falarm109, f110VDC, falarm110, f111VDC, falarm111, f112VDC, falarm112, f1KPot, falarm113, fMixingChamber, falarm114, fHeatExchanger, falarm115, fStill, falarm116))



   // // TFile *fin = new TFile("data.csv","r");
   // // // char line[20];
   // // // while (fgets(&line,20,fin))

   tree->ReadFile("DMM5_data.csv","Scan/I:Time/C:DigitalGauge1/F:alarm101/I:DigitalGauge2/F:alarm102/I:DigitalGauge3/F:alarm103/I:DigitalGauge4/F:alarm104/I:DigitalGauge5/F:alarm105/I:PiraniGauge/F:alarm106/I:VDC107/F:alarm107/I:1KPot/F:alarm113/I:MixingChamber/F:alarm114/I:HeatExchanger/F:alarm115/I:Still/F:alarm116/I:squid/F:alarm117/I",',');
   // // tree->GetEntry(0); 
   // // printf("\n", ntuple->GetLeaf("Time")->GetValue(0));
   // }
   f->Write();
}