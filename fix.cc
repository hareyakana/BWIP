void fix(){
	TFile *f = new TFile("precool_data.root","RECREATE");
   	TTree *tree = new TTree("tree","from raw data");
   	tree->ReadFile("precool_data.csv","Scan/I:Time/C:DigitalGauge1/F:alarm101/I:DigitalGauge2/F:alarm102/I:DigitalGauge3/F:alarm103/I:DigitalGauge4/F:alarm104/I:DigitalGauge5/F:alarm105/I:PiraniGauge/F:alarm106/I:VDC107/F:alarm107/I:KPot/F:alarm113/I:MixingChamber/F:alarm114/I:HeatExchanger/F:alarm115/I:Still/F:alarm116/I:squid/F:alarm117/I",',');
   	f->Write();
}