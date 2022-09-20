#include "Datum.h"
#include "Greska.h"
int Datum::brojDanaUMesecu(int mesec)const
{
	switch (mesec) {
	case 1: case 3: case 5: case 7: case 10: case 12:
		return 31;
	case 4: case 6: case 9: case 11:
		return 30;
	case 2:
		if (this->godina % 400 == 0 || (this->godina % 4 == 0) && this->godina % 100 != 0)
			return 29;
		else
			return 28;
	default:
		return -1;
	}
	return 0;
}
Datum::Datum(int d, int m, int g)
{
	this->godina = g;
	if (m >= 1 && m <= 12)
		this->mesec = m;
	else
		GPogresanDatum();

	if (d >= 1 && d <= brojDanaUMesecu(this->mesec))
		this->dan = d;
	else
		GPogresanDatum();
}
int Datum::brojPrestupnihGodina()const
{
	int godine = this->godina;
	if (this->mesec <= 2)
		godine--;

	return godine / 4 - godine / 100 + godine / 400;
}
int operator-(const Datum& d1, const Datum& d2)
{
	const int daniUMesecuBezPres[12]
		= { 31, 28, 31, 30, 31, 30,
		   31, 31, 30, 31, 30, 31 };
	int br1=d1.godina*365+d1.dan;

	for (int i = 0; i < d1.mesec-1  ; i++)
	{ 
		br1 += daniUMesecuBezPres[i];
	}
	br1 += d1.brojPrestupnihGodina();

	int br2 = d2.godina * 365 + d2.dan;
	for (int i = 0; i < d2.mesec-1 ; i++)
	{
		br2 += daniUMesecuBezPres[i];
	}
	br2 += d2.brojPrestupnihGodina();

	return abs(br1 - br2);
}
ostream& operator<<(ostream& it, const Datum& d)
{
	return it << d.dan<<"."<<d.mesec<<"."<<d.godina<<".";
}
