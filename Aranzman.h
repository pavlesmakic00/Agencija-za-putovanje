#ifndef _aranzman_h_
#define _aranzman_h_
#include "Destinacija.h"
#include "Datum.h"
#include "Smestaj.h"
#include "Prevoz.h"
class Aranzman
{
	Destinacija destinacija;
	Datum datumPocetka;
	Datum datumKraja;
	Smestaj* smestaj;
	Prevoz* prevoz;
public:
	Aranzman(const Destinacija& d0, Datum d1, Datum d2) :destinacija(d0), datumPocetka(d1), datumKraja(d2) { smestaj = nullptr; prevoz = nullptr; }
	~Aranzman() { prevoz = nullptr; smestaj = nullptr; }

	void dodeliSmestaj(Smestaj& s);
	void dodeliPrevoz(Prevoz& p);

	Destinacija getDestinacija()const { return destinacija; }
	Datum getDatumPocetka()const { return datumPocetka; }
	Datum getDatumKraja()const { return datumKraja; }
	int getTrajanjeAranzmana()const { return (datumPocetka - datumKraja); }
	double getCena()const;

	friend ostream& operator<<(ostream& it, const Aranzman& a);
};
#endif
