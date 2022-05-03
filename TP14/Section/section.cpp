#include "section.h"
#include <iostream>

using namespace std;

section::section()
{
    nbreEleves=0;
}
void section::AjoutEleves()
{
    int nbSaisie;
    string lastValue;
    cout << "Nombre de saisie à faire : ";
    cin >> nbSaisie;
    getchar();
    cout << "Il y a actuellement " << nbreEleves << " eleves(s)" << endl;

    for (int i=1 ; i <= nbSaisie ; i++)
    {
        cout << "Entrer le nom de l'eleve " << ++nbreEleves << " puis sa note " << endl;
        UnEleve.SaisieEleve();
        TabEleve.push_back(UnEleve);
    }
}
void section::Traitement()
{
    int some=0;
    for (int i=0; i<nbreEleves; i++)
    {
        some += TabEleve[i].getNote();
    }
    moy = some/nbreEleves;
}

void section::AfficherSection()
{
    Traitement();
    for (int i=0; i<nbreEleves; i++)
    {
        TabEleve[i].AfficheEleve();
    }
    cout << "Moyenne\t" << moy << endl;
}
void section::EnregistreSection()
{
    flux.open("../section/classe", ios::app);
    for (int i=0; i<nbreEleves; i++)
    {
        TabEleve[i].EnregistrerEleve(flux);
    }
    flux.close();
}
void section::LireSection()
{
    flux.open("../section/classe", ios::in);
    if (flux)
        {
            do{
                UnEleve.LireEleve(flux);
                if (flux)
                {
                    TabEleve.push_back(UnEleve);
                    nbreEleves++;
                }
            } while(flux);

        } else {
            cout << "Erreur --> fichier manquant" << endl;
        }
    flux.close();
}
