#include "Aranzman.h"
void Aranzman::dodeliSmestaj(Smestaj& s)
{
	if (s.getDestinacija() == destinacija)
		smestaj = &s;
	else
		throw GRazliciteDestinacije();
}
void Aranzman::dodeliPrevoz(Prevoz& p)
{

	if (p.getDestinacija() == destinacija)
		prevoz = &p;
	else
		throw GRazliciteDestinacije();
}
double Aranzman::getCena() const
{
	return prevoz->getCenaKarte()+(smestaj->getCenaPoDanu())*getTrajanjeAranzmana();
}
ostream& operator<<(ostream& it, const Aranzman& a)
{
	it << a.destinacija << endl;
	it << *(a.smestaj)<<endl;
	it << a.getCena() << endl;
	return it;
}
