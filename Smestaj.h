#ifndef _smestaj_h_
#define _smestaj_h_
#include "Destinacija.h"
#include "Greska.h"

class Smestaj
{	
public:
	enum Tip { HOTEL, APARTMAN };
private:
	Destinacija destinacija;
	Tip tip;
	string naziv;
	int brZvezdica;
	double cenaPoDanu;
public:
	Smestaj(const Destinacija& d, Tip t,string n, int b, double c) :destinacija(d), tip(t),naziv(n) ,cenaPoDanu(c) {
		if (b >= 1 && b <= 5) {
			brZvezdica = b;
		}
		else
			throw GIzvanOpsega();
	}

	Destinacija getDestinacija()const { return destinacija; }
	Tip getTip() const { return tip; }
	string  getNaziv()const { return naziv; }
	int  getBrZvezdica()const { return brZvezdica; }
	double  getCenaPoDanu()const { return cenaPoDanu; }
	
	friend ostream& operator<<(ostream& it, const Smestaj& s);
};
#endif
