#include "Date.h"
#include <iostream>
using namespace std;
using namespace biblio;

Date::Date(int J, int A, int M)
{
	this->jour = J;
	this->anne = A;
	this->mois = M;
}

bool Date::estBissextie(int a)
{
	if (a % 400 == 0 || a % 4 == 0 && a % 100 != 0) {
		cout << "la date est bissextie" << endl;
		return true;
	}
	cout << "la date n'a pas bissextie" << endl;
	return false;
}

bool Date::estValide(int jour, int anne, int mois)
{
	int Mois[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	if (jour < 1 || jour>31 && anne < 1 || anne>2026 && mois < 1 || mois>31) { return false; }
	else if (mois == 2 && estBissextie(anne) && 1 <= jour <= 29) {
		return true;
	}
	else return false;
	if (jour <= Mois[mois - 1]) {
		return true;
	}
	else return false;
	if (!estValide(jour, anne, mois)) {
		cout << "Date invalide remplace par 01/01/2000" << endl;
	}

		
	
}

bool Date::operator==(const Date& D) const
{
	if (this->mois == D.mois && this->anne == D.anne && this->jour == D.jour) { return true; }
	return false;
}

bool Date::operator<(const Date& D) const
{
	if (this->anne < D.anne) { return true; }
	return false;
}

void Date::afficher()const
{
	cout << this->jour << "/" << this->mois << "/" << this->anne << endl;

}

Date::~Date()
{
}



