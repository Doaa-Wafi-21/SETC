#pragma once
#include "Tableau.h"
class TableauBorne :public Tableau
{
private:
	double min;
	double max;
public:
	TableauBorne(int n, double a, double b);
private:
	double operator [](int i)const;

};

