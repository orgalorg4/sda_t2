#pragma once

struct Element
{
	int data;
	Element *succ;
	Element *pred;
};
void insertFront(Element *&cap, int val);
void afisareDusInt(Element *cap);
void insertPoz(Element *cap, int val, int poz);