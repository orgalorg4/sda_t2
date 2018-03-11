#include "funct.h"

int main()
{
	Element *cap;
	cap = 0;

	afisareDusInt(cap);
	for (int i = 0;i < 10;i++)
		insertFront(cap, i);
	afisareDusInt(cap);
	insertPoz(cap, 555, 5);
	afisareDusInt(cap);

	stergere(cap, 5);
	afisareDusInt(cap);

	return 0;
}