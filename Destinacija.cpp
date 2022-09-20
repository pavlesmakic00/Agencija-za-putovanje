#include "Destinacija.h"
void Destinacija::oceni(unsigned int o)
{
	if (br) {
		double o1 = double(o);
		o1 = o1 / br;
		srOcena += o1;
		srOcena *= br;
		srOcena /= br + 1;
	}
	else srOcena = double(o);

	br++;
}
ostream& operator<<(ostream& it, const Destinacija& d)
{
	return it << "[" << d.getSrednjaOcena() << "]" << d.naziv << "(" << d.opis << ")";
}
bool operator>(const Destinacija& d1, const Destinacija& d2)
{
	return d1.getSrednjaOcena()>d2.getSrednjaOcena();
}
bool operator<(const Destinacija& d1, const Destinacija& d2)
{
	return d1.getSrednjaOcena() < d2.getSrednjaOcena();
}
bool operator==(const Destinacija& d1, const Destinacija& d2)
{
	return d1.naziv==d1.naziv && d1.opis==d1.opis && d1.srOcena==d1.srOcena && d1.br==d2.br;
}