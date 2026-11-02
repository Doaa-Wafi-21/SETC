// TpBibliotheque.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Date.h"
#include "Livre.h"
#include "Bibliotheque.h"

using namespace std;
using namespace biblio;

int main() {

    cout << "===== CREATION BIBLIOTHEQUE =====\n";

    Bibliotheque B("Bibliotheque FSTM", 5);

    cout << "\n===== CREATION DES LIVRES =====\n";

    Date d1(10, 5, 2024);
    Date d2(15, 8, 2023);
    Date d3(20, 2, 2025);
    Livre L1("java", "Ali", &d1, 10);
    Livre L2("python", "Douaa", &d2, 10);
    Livre L3("C++", "Marwa", &d3, 10);
    B.ajouterlivre(L1);
    B.ajouterlivre(L2);
    B.ajouterlivre(L3);
    L1.EnregisterNote(10);
    L2.EnregisterNote(15);
    L3.EnregisterNote(13);
    B.rechercherlivre("java");
    B.rechercherlivre("html");
    L1.afficher();
    L2.afficher();
    L3.afficher();
    L1.CalculNote();
    L2.CalculNote();
    L3.CalculNote();
    









// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
