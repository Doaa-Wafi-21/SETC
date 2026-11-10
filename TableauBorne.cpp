#include "TableauBorne.h"
#include<iostream>
#include<cstdlib>

TableauBorne::TableauBorne(int n, double a, double b)
	:Tableau(n)
{
	if (a > b) {
		this->min = a;
		this->max = b;
	}

}

double TableauBorne::operator[](int i) const
{
	if (i >= 0 && i < this->taille) {
		return this->T[i];
	}
	else { exit(-1); }


}
