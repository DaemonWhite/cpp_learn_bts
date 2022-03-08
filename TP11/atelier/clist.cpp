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
    cout << "Il y'a actuellement " << Nbre_Elts << " piece(s)" << endl;


    do
    {
        if (Nbre_Elts < 150)
        {
            cout << "Entrer l'id de la piece à la place " << Nbre_Elts+1 << endl;
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
}

void Clist::AfficherListe()
{
    for (int i=0; i < Nbre_Elts; i++)
    {
        cout << "Place " << i+1 << " : " << ListePiece[i] << endl;
    }
}

void Clist::RechercherComptePieces(int num_place,int & num_id, int & Nombre)
{
    num_id = ListePiece[num_place-1];
    Nombre =0;

    for (int i=0; i < Nbre_Elts; i++)
    {
        if (ListePiece[i] == num_id)
        {
            Nombre++;
        }
    }
}
