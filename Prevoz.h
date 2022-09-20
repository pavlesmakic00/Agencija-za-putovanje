#ifndef _prevoz_h_
#define _prevoz_h_
#include "Destinacija.h"

class Prevoz
{
	Destinacija destinacija;
	double cenaKarte;
public:
	Prevoz(const Destinacija& d, double c) :destinacija(d), cenaKarte(c) {}

	Destinacija getDestinacija()const { return destinacija; }
	double getCenaKarte()const { return cenaKarte; }
};
#endif
