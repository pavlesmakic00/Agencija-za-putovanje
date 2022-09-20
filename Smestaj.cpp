#include "Smestaj.h"
ostream& operator<<(ostream& it, const Smestaj& s)
{
	if (s.tip)
		it << "APARTMAN";
	else
		it  << "HOTEL";

	it <<" "<< s.naziv <<" ";
	for (int i = 0; i < s.brZvezdica; i++) it << "*";
	return it;
}