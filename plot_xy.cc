void plot_xy(){

	TFile *f = new TFile("DMM1_data.root");
	TCanvas *c1 = new TCanvas("c1"," plot");
	// c1->SetFillColor(42);
	//c1->SetGrid();
 	// c1->GetFrame()->SetFillColor(0);
   	// c1->GetFrame()->SetBorderSize(1);

	const Int_t n = 30000;
	Double_t x[n],y[n];
	TTree *tree = (TTree*)f->Get("tree");

	Int_t Scan;
	Float_t DigitalGauge1;

	//Scan,Time,DigitalGauge1, DigitalGauge2, DigitalGauge3, DigitalGauge4,DigitalGauge5, PiraniGauge,vdc107, KPot, MixingChamber, HeatExchanger, Still, alarm101,alarm102,alarm103,alarm104,alarm105,alarm106,alarm107,alarm113,alarm114,alarm115,alarm116,squid,alarm117
	tree->SetBranchAddress("Scan",&Scan);
	tree->SetBranchAddress("HeatExchanger",&DigitalGauge1);

	Long64_t nentries = tree->GetEntries();
	for (Long64_t i = 0; i < n; i++){
		tree->GetEntry(i);
		x[i]=Scan;
		y[i]=DigitalGauge1;
		// cout << Scan << endl;
		// cout << DigitalGauge1 << endl;
	};

	TGraph *gr = new TGraph(n,x,y);

	gr->GetXaxis()->SetTitle("Scan");
	gr->GetYaxis()->SetTitle("HeatExchanger");
	gr->Draw();

	c1 -> SaveAs("plot-HeatExchanger-1.png");

	////////////////////////
	// const Int_t ngraph=nentries/n;
	// for (Long64_t j = 0 ; j < ngraph ; j++){
	// 	TCanvas *c[j];
	// 	c1->Draw();


	// }
	// WIP!!!!!!!!!!!!!
	// const Int_t ngraph = 11; //number of parameter to plot
	// char *grnames[ngraph] = {"DigitalGauge1","DigitalGauge2","DigitalGauge3","DigitalGauge4","DigitalGauge5","PiraniGauge","1KPot","MixingChamber","HeatExchanger","Still","squid"};
	// TGraph *plot[ngraph];
	// TCanvas *c[ngraph];
	// for (Int_t i=0;i<ngraph;i++){
	// 	Double_t x[n],y[n];
	// 	c[i] = new TCanvas(Form("c%d",i));
	// 	for (Long64_t k = 0; k < n; k++){
	// 		tree->GetEntry(k);
	// 		x[k]=Scan;
	// 		y[i]=DigitalGauge1;
	// 	}
	// 	plot[i] = new TGraph(n,x,y);
	// 	plot[i]->GetXaxis()->SetTitle("Scan");
	// 	plot[i]->GetYaxis()->SetTitle("DigitalGauge1");
	// 	const [i] = Form("plot%02d",grnames[i]);
	// 	c[i]->SaveAs(link[i],"pdf");
	// }

}