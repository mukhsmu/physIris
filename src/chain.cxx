{
  	TString root_dir = "/iris/data2/iris/s1537_oct16";
	
	Int_t runscalib[] =
	//{4329,4330,4331,4332,4333,4334,4335,4336,4337,4338,4339,4340,4341,4342,4343,4344,4345,
	//{4329,4330,4331,4332};	
	{4203,4204,4205,4206,4207,4208,4209,4210,4213,4214,4215,4216,4217,4218,4219,4220,4221,
	4223,4224,4225,4226,4227,4228,4230,4231,4232,4233,4234,4235,4236,4237,4240,4241,4242,
	4243,4244,4245,4246,4247,4248,4250,4254,4256,4257,4258,4259,4260/*,4261,4262,4263,4264,4265,
	4266,4268,4269,4270,4276,4277,4278,4279,4280,4281,4282,4283,4284,4285,4287,4290,4292,
	4293,4294,4295,4301,4302,4303,4304,4305,4306,4307,4308,4309,4310,4311,4313,4314,4315,4316,
	4318,4319,4320,4321,4322*/};
	Int_t nRuns = Int_t(sizeof(runscalib)/sizeof(Int_t));
  	gROOT->ProcessLine(".L /home/iris/current/root_macros/makeChain.C");
  	TChain *chcalib=makeChain(runscalib,nRuns,root_dir,"Iris","chcalib");
}
