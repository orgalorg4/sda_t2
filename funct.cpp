#include <iostream>
#include "funct.h"

void insertFront(Element *& cap, int val)
{
	Element *p;
	p = new Element;
	p->data = val;
	p->succ = cap;
	p->pred = 0;
	if (cap)
		cap->pred = p;
	cap = p;
}

void afisareDusInt(Element * cap)
{
	Element *p;
	p = new Element;
	p = cap;
	if (p)
	{
		while (p->succ)
		{
			std::cout << p->data << " ";
			p = p->succ;
		}
		std::cout << p->data << " ";
		while (p)
		{
			std::cout << p->data << " ";
			p = p->pred;
		}
	}
	else std::cout << "lista vida" << std::endl;
	std::cout << std::endl;
}

void insertPoz(Element * cap, int val, int poz)
{
	if (poz == 1)
		insertFront(cap, val);
	else
	{
		if (poz > 1)
		{
			int cnt = 1;
			Element *q;
			q = new Element;
			q = cap;
			while (cnt < poz&&q)
			{
				q = q->succ;
				cnt++;
			}
			if (q == 0)
			{
				std::cout << "err";
				return;
			}
			else
			{
				Element *p;
				p = new Element;
				p->data = val;
				p->succ = q->succ;
				p->pred = q;
				q->succ = p;
				if (p->succ)
					p->succ->pred = p;
			}
		}
		else
		{
			std::cout << "err";
			return;
		}
	}
}
