void convertCSV() {
   TString dir = gSystem->UnixPathName(__FILE__);
   dir.ReplaceAll("convertCSV.C","");
   dir.ReplaceAll("/./","/");
   ifstream in;
   in.open(Form("%stestdata.csv",dir.Data()));

   Int_t nlines = 5000;
   Int_t n,Alarm101,Alarm102,Alarm103,Alarm104,Alarm105,Alarm106,Alarm107,Alarm108,Alarm109,Alarm110,Alarm111,Alarm112,Alarm113,Alarm114,Alarm115,Alarm116;
   Float_t DigitalGauge1,DigitalGauge2,DigitalGauge3,DigitalGauge4,DigitalGauge5,PiraniGauge,VDC107,VDC108,VDC109,VDC110,VDC111,VDC112,OneKPot,MixingChamber,HeatExchanger,Still;
   char Time[20];

   TFile *f = new TFile("data.root","RECREATE"); 
   TTree *tree = new TTree("ntuple","data from csv file");
   
   tree->Branch("スキャン",&n,"スキャン/I");
   tree->Branch("時刻",&Time,"時刻/C");
   tree->Branch("101 <DigitalGauge1> (VDC)",&DigitalGauge1,"101 <DigitalGauge1> (VDC)/F");
   tree->Branch("アラーム 101",&Alarm101,"アラーム 101/I");
   tree->Branch("102 <DigitalGauge2> (VDC)",&DigitalGauge2,"102 <DigitalGauge2> (VDC)/F");
   tree->Branch("アラーム 102",&Alarm102,"アラーム 102/I");
   tree->Branch("103 <DigitalGauge3> (VDC)",&DigitalGauge3,"103 <DigitalGauge3> (VDC)/F");
   tree->Branch("アラーム 103",&Alarm103,"アラーム 103/I");
   tree->Branch("104 <DigitalGauge4> (VDC)",&DigitalGauge4,"104 <DigitalGauge4> (VDC)/F");
   tree->Branch("アラーム 104",&Alarm104,"アラーム 104/I");
   tree->Branch("105 <DigitalGauge5> (VDC)",&DigitalGauge5,"105 <DigitalGauge5> (VDC)/F");
   tree->Branch("アラーム 105",&Alarm105,"アラーム 105/I");
   tree->Branch("106 <PiraniGauge> (VDC)",&PiraniGauge,"106 <PiraniGauge> (VDC)/F");
   tree->Branch("アラーム 106",&Alarm106,"アラーム 106/I");
   tree->Branch("107 (VDC)",&VDC107,"107 (VDC)/F");
   tree->Branch("アラーム 107",&Alarm107,"アラーム 107/I");
   tree->Branch("108 (VDC)",&VDC108,"108 (VDC)/F");
   tree->Branch("アラーム 108",&Alarm108,"アラーム 108/I");
   tree->Branch("109 (VDC)",&VDC109,"109 (VDC)/F");
   tree->Branch("アラーム 109",&Alarm109,"アラーム 109/I");
   tree->Branch("110 (VDC)",&VDC110,"110 (VDC)/F");
   tree->Branch("アラーム 110",&Alarm110,"アラーム 110/I");
   tree->Branch("111 (VDC)",&VDC111,"111 (VDC)/F");
   tree->Branch("アラーム 111",&Alarm111,"アラーム 111/I");
   tree->Branch("112 (VDC)",&VDC112,"112 (VDC)/F");
   tree->Branch("アラーム 112",&Alarm112,"アラーム 112/I");
   tree->Branch("113 <1KPot> (VDC)",&OneKPot,"113 <1KPot> (VDC)/F");
   tree->Branch("アラーム 113",&Alarm113,"アラーム 113/I");
   tree->Branch("114 <MixingChamber> (VDC)",&MixingChamber,"114 <MixingChamber> (VDC)/F");
   tree->Branch("アラーム 114",&Alarm114,"アラーム 114/I");
   tree->Branch("115 <HeatExchanger> (OHM)",&HeatExchanger,"115 <HeatExchanger> (OHM)/F");
   tree->Branch("アラーム 115",&Alarm115,"アラーム 115/I");
   tree->Branch("116 <Still> (OHM)",&Still,"116 <Still> (OHM)/F");
   tree->Branch("アラーム 116",&Alarm116,"アラーム 116/I");

   while (1) {
      in >> n >> Time >> DigitalGauge1 >> Alarm101 >> DigitalGauge2 >> Alarm102 >> DigitalGauge3 >> Alarm103 >> DigitalGauge4 >> Alarm104 >> DigitalGauge5 >> Alarm105 >> PiraniGauge >> Alarm106 >> VDC107 >> Alarm107 >> VDC108 >> Alarm108 >> VDC109 >> Alarm109 >> VDC110 >> Alarm110 >> VDC111 >> Alarm111 >> VDC112 >> Alarm112 >> OneKPot >> Alarm113 >> MixingChamber >> Alarm114 >> HeatExchanger >> Alarm115 >> Still >> Alarm116;
      if (!in.good()) break;
      tree->Fill();
      nlines++;
   }
   
   in.close();

   f->Write();
}