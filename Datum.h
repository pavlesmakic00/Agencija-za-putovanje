#ifndef _datum_h_
#define _datum_h_
#include <iostream>
using namespace std;
class Datum
{
	int dan;
	int mesec;
	int godina;
	int brojDanaUMesecu(int mesec)const;
	int brojPrestupnihGodina()const;
public:
	Datum(int d, int m, int g);

	int getDan()const { return dan; };
	int getMesec()const { return mesec; };
	int getGodina()const { return godina; };

	friend int operator-(const Datum& d1, const Datum& d2);

	friend ostream& operator<<(ostream& it, const Datum& d);
};
#endif
