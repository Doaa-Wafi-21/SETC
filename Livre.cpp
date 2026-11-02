#include "Livre.h"
#include"Date.h"
using namespace biblio;
int Livre::compteur = 0;

Livre::Livre(string titre, string auteur,Date* parution,int cap)
	:id(++compteur)

{
	
	this->titre = titre;
	this->auteur = auteur;
	this->note = new int [cap];
	this->nbNote = 0;
	this->parution = parution;

}

Livre::Livre(const Livre& L)
	:id(++compteur)
{
	this->titre = L.titre;
	this->auteur = L.auteur;
	this->parution = L.parution;

}

Livre Livre::operator=(const Livre& L)
{
	this->titre = L.titre;
	this->auteur = L.auteur;
	this->parution = L.parution;

	return L;
}

void Livre::EnregisterNote(int note)
{
	if (note > 0 && note < 20 && this->nbNote<=cap) {
		
		this->note[this->nbNote] = note;
		this->nbNote++;

	}
}

double Livre::CalculNote() const
{
	double M=0;
	for (int i = 0;i < nbNote;i++) {
		M = (M + note[i]);
	}

	return (M / nbNote);
}

string Livre::getTitre()
{
	return titre;
}

int biblio::Livre::getId()
{
	return id;
}

void Livre::afficher() const
{
	cout << "les informations du livre" << endl;
	cout << "le titre du livre" << this->titre << endl;
	cout << "l'auteur du livre" << this->auteur << endl;
	cout << "la date du livre" << this->parution << endl;
	cout << "le nombre de livre" << compteur << endl;

}



Livre::~Livre()
{
	delete[] note;
	note = nullptr;
	delete parution;
	parution = nullptr;

}
