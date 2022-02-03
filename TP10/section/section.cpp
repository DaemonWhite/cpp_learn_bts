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

void Section::AddEelve()
{
    //Copie du tablau par le pointeur
    eleve  *TabCopie = TabEleve;

    int newNbreEleve;

    cout << "Nombre d'eleve : "<< nbreEleves<<endl;
    cout << "Nombre de nouveaux Eleves : ";
    cin >> newNbreEleve;
    getchar();
    //Rajoute les anciens eleves aux nouveaux
    newNbreEleve += nbreEleves;

    TabEleve = new eleve[newNbreEleve];


    for (int i=0; i < newNbreEleve; i++)
    {
        TabEleve[i] = TabCopie[i];
    }

    for (int i=nbreEleves; i < newNbreEleve; i++)
    {
         TabEleve[i].SaisieEleve();
    }

    nbreEleves = newNbreEleve;

    delete [] TabCopie;
}

void Section::SaisieSection(int add)
{

    if (add == 0)
    {
        cout << "Donner le nombre d'eleve : ";
        cin >> nbreEleves;
        getchar();
    } else {
        nbreEleves = add;
    }

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

    cout << "Moyenne : " << moy << endl;
}
