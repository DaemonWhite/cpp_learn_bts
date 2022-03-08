#include "cvecteur.h"
#include <iostream>

using namespace std;

Cvecteur::Cvecteur(int val,int init)
{
    nbreElem=val;
    adr = new float[val];
    for (int i=0; i<val; i++)
    {
        adr[i]=init;
    }
}

void Cvecteur::affiche()
{
    for (int i=0; i < nbreElem; i++)
    {
        cout << adr[i] << endl;
    }
}


Cvecteur::~Cvecteur()
{
    cout << "Fermeture du programe";
    delete [] adr;
}
