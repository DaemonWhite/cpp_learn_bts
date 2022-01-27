#include <iostream>
#include "section.h"
#include "eleve.h"

using namespace std;

Section::Section()
{
    TabEleve=NULL;
}
Section::~Section()
{
    delete [] TabEleve;
}

void Section::SaisieSection(void)
{
    cout << "Donner le nombre d'eleve : ";
    cin >> nbreEleves;
    getchar();
    TabEleve = new eleve[nbreEleves];

    for (int i=0; i<nbreEleves; i++)
    {
        TabEleve[i].SaisieEleve();
    }

}

void Section::Traitrement()
{
    float someEleve=0;
    for (int i=0; i<nbreEleves; i++)
    {
        someEleve += TabEleve[i].RecupNote();
    }

    moy = someEleve / nbreEleves;
}

void Section::AfficheSection(void)
{
    for (int i=0; i<nbreEleves; i++)
    {
        TabEleve[i].AfficheEleve();
    }

    Traitrement();
    cout << "Moyenne : " << moy;
}
