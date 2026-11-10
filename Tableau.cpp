#include "Tableau.h"
#include<iostream>
#include<cstdlib>


Tableau::Tableau(int t)
{

	this->taille = t;
	this->T = new double[this->taille];
	for (int i = 0;i <= this->taille;i++) {
		this->T[i] = 0;
	}
	
}

Tableau::Tableau(const Tableau& T)
{
	this->taille = T.taille;
	this->T = new double[this->taille];
	for (int i = 0;i <= taille;i++) {
		this->T[i] = T.T[i];
	}
	
}

Tableau Tableau::operator=(const Tableau& T)
{
	if(this!=&T){
	this->taille = T.taille;
	delete[] this->T;
	this->T = new double[this->taille];
	for (int i = 0;i <= taille;i++) {
		this->T[i] = T.T[i];
	}
	}

	
	return *this;
}

double& Tableau::operator[](int i)
{
	if (i >= 0 && i < this->taille) {
		return this->T[i];
	}
	else {
		exit(-1);
	}
	// TODO: insérer une instruction return ici
}

Tableau::~Tableau()
{
	delete[] this->T;
}



