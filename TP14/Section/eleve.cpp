#include "eleve.h"
#include <iostream>

using namespace std;

eleve::eleve()
{

}

void eleve::SaisieEleve()
{
    getline(cin, nom);
    cin >> note;
    getchar();
}

void eleve::AfficheEleve(){
    cout << nom <<"\t| "<<note<<endl;
}

float eleve::getNote()
{
    return note;
}

void eleve::EnregistrerEleve(fstream &flux)
{
    flux << nom << '\t' << note << endl;
}

void eleve::LireEleve(fstream &flux)
{
    getline(flux,nom,'\t');
    flux>>note;
    flux.get();
}


