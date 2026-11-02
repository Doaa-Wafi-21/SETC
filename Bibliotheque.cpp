#include "Bibliotheque.h"
#include"Livre.h"
#include<iostream>
using namespace biblio;
using namespace std;

Bibliotheque::Bibliotheque(string nom, int capacité)
{
	this->nom = nom;
	this->capacité = capacité;
	this->nbLivre = 0;
}

void Bibliotheque::ajouterlivre(Livre& L)
{
	Livre** livres = new Livre * [nbLivre];
	if (nbLivre <= capacité) {
		for (int i = 0;i < nbLivre;i++) {
			livres[i] = &L;
		}
		nbLivre++;



	}



}

Livre* biblio::Bibliotheque::rechercherlivre(string titre)
{
	for (int i = 0;i < nbLivre;i++) {
		if (livres[i]->getTitre() == titre) {
			return livres[i];
		}
		return nullptr;
	}
}

Livre* biblio::Bibliotheque::rechercherlivre(int id)
{
	for (int i = 0;i < nbLivre;i++) {
		if (livres[i]->getId() == id) {
			return livres[i];
		}
		return nullptr;
	}
}

biblio::Bibliotheque::Bibliotheque(const Bibliotheque& B)
{
	this->nom = B.nom;
	this->capacité = B.capacité;
	this->nbLivre = B.nbLivre;
	for (int i = 0;i < nbLivre;i++) {
		this->livres[i] = new Livre(*B.livres[i]);
	}

}

Bibliotheque biblio::Bibliotheque::operator=(const Bibliotheque& B)
{
	this->nom = B.nom;
	this->capacité = B.capacité;
	this->nbLivre = B.nbLivre;
	for (int i = 0;i < nbLivre;i++) {
		this->livres[i] = new Livre(*B.livres[i]);
	}

	this->nom = B.nom;
	return *this;
}

Bibliotheque biblio::Bibliotheque::operator+=(const Livre& livres)
{
	this->ajouterlivre(&livres);
	return *this;
	
}

void biblio::Bibliotheque::afficherCatalogue()
{
	cout << "\nBibliotheque : " << nom << endl;

	cout << "Nombre de livres : "

		<< nbLivre << "/" << capacité << endl;

	for (int i = 0; i < nbLivre; i++)

		livres[i]->afficher();

}

biblio::Bibliotheque::~Bibliotheque()
{
	delete[]livres;
	livres = nullptr;
}


