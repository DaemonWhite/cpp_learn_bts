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
    if (nbreEleves!=0)
    {
        Traitement();
        cout << "id\t" << "| nom\t" << "| note" << endl;
        for (int i=0; i<nbreEleves; i++)
        {
            cout << i << "\t| ";
            TabEleve[i].AfficheEleve();
        }
        cout << "Moyenne\t" << moy << endl;
    } else {
        cout << "il n'y a pas d'eleves"<<endl;
    }
}
void section::EnregistreSection()
{
    flux.open("../section/classe", ios::out);
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
void section::SuprimeEleve()
{
    int position;
    cout<< "Position a suprimer : ";
    cin >> position;
    TabEleve.erase(TabEleve.begin()+position);
    nbreEleves--;
}
