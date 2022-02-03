#include <iostream>
#include "eleve.h"

using namespace std;

eleve::eleve()
{

}

void eleve::SaisieEleve(void)
{

    cout << endl <<"Saisie du nom prenom : ";
    cin.getline(nom, 29);
    cout << "Saisie de la note : ";
    cin >> note;
    getchar();
}

void eleve::AfficheEleve(void)
{
    cout << "Nom d'eleve : " << nom << endl;
    cout << "Note : " << note << endl;

}

float eleve::RecupNote()
{
    return note;
}


