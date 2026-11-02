#pragma once
#include<iostream>
#include"Date.h"
using namespace std;
namespace biblio {
	class Livre
	{
	private:
		const int id;
		string titre, auteur;
		Date* parution;
		int* note;
		int cap;
		int nbNote;
		static int compteur;
		int nbInstance;
	public:
		Livre(string, string, Date*, int);
		Livre(const Livre& L);
		Livre operator=(const Livre& L);
		void EnregisterNote(int);
		double CalculNote() const;
		string getTitre();
		int getId();
		void afficher() const;

		~Livre();


	};
}

