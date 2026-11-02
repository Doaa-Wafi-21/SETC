#pragma once
#include<iostream>
using namespace std;
#include"Livre.h";
namespace biblio {
	class Bibliotheque
	{
	private:
		string nom;
		Livre** livres;
		int nbLivre, capacité;
	public:
		Bibliotheque(string, int);
		void ajouterlivre(Livre&);
		Livre* rechercherlivre(string);
		Livre* rechercherlivre(int);
		Bibliotheque(const Bibliotheque& B);
		Bibliotheque operator=(const Bibliotheque& B);
		Bibliotheque operator+=(const Livre& livres);
		void afficherCatalogue();
		~Bibliotheque();
	};
}

