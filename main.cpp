#include <iostream>
#include "KolejkaPriorytetowa.h"

int main()
{
	KolejkaPriorytetowa kolejka;
	kolejka.dodajZadanie("priorytet 2", 2);
	kolejka.dodajZadanie("priorytet 1", 1);
	kolejka.dodajZadanie("priorytet 3", 3);

	std::cout << kolejka.pobierzNajwyzszeZadanie().tresc;
	
}