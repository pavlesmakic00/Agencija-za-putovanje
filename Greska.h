#ifndef _greska_h_
#define _greska_h_
#include <iostream>
using namespace std;
#include <exception>
class GIzvanOpsega:public exception
{
	const char* what()const override {
		return "Greska:Izvan Opsega!!";
	}
};
class GPogresanDatum :public exception
{
	const char* what()const override {
		return "Greska:Pogresan datum!!";
	}
};
class GRazliciteDestinacije :public exception
{
	const char* what()const override {
		return "Greska:Pogresan datum!!";
	}
};
#endif