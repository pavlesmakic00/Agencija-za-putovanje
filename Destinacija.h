#ifndef _destinacija_h_
#define _destinacija_h_
#include <iostream>
using namespace std;
class Destinacija
{
	string naziv;
	string opis;
	double srOcena;
	int br;
public:
	Destinacija(string n, string o) :naziv(n), opis(o) { srOcena = 0; br = 0; }

	void oceni(unsigned int o);
	double getSrednjaOcena()const { return srOcena; };
	friend ostream& operator<<(ostream& it, const Destinacija& d);

	friend bool operator>(const Destinacija& d1, const Destinacija& d2);
	friend bool operator<(const Destinacija& d1, const Destinacija& d2);
	friend bool operator==(const Destinacija& d1, const Destinacija& d2);//potreban za Aranzman
};
#endif
