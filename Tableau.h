#pragma once
class Tableau
{
protected:
	int taille;
	double* T;
public:
	Tableau(int T);
	Tableau(const Tableau& T);
	Tableau operator=(const Tableau& T);
	double& operator[](int i);
	~Tableau();
};

