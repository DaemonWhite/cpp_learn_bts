#include <iostream>
#include "clist.h"

using namespace std;


Clist::Clist()
{
    Nbre_Elts=0;
}
void Clist::AjouterPieces()
{
    int lastValue;
    cout << "Il y'a actuellement " << Nbre_Elts << "piece(s)" << endl;


    do
    {
        if (Nbre_Elts < 150)
        {
            cout << "Entrer l'id de la piece " << Nbre_Elts+1 << endl;
            cin >> lastValue;

            if (lastValue!=0)
            {
                ListePiece[Nbre_Elts] = lastValue;
                Nbre_Elts++;
            }

        } else {
            lastValue =0;
            cout << "Le maximum de piece à étais atteint" << endl;
        }
    }
    while(lastValue != 0);

    cout << "Fermeture du système d'ajout de pièce" << endl;
}

void Clist::AfficherListe()
{
    for (int i=0; i < Nbre_Elts; )
    {

    }
}
