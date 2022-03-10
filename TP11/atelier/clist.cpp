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
    cout << "0 Mettra fin à la saisie" << endl;
    cout << "Il y a actuellement " << Nbre_Elts << " pièce(s)" << endl;


    do
    {
        if (Nbre_Elts < 150)
        {
            cout << "Entrer l'id de la pièce à la place " << Nbre_Elts+1 << endl;
            cin >> lastValue;

            if (lastValue!=0)
            {
                ListePiece[Nbre_Elts] = lastValue;
                Nbre_Elts++;
            }

        } else {
            lastValue =0;
            cout << "Le maximum de pièces a été atteint" << endl;
        }
    }
    while(lastValue != 0);
}
bool Clist::InsertPiece(int decale, int newValu)
{
    bool error = false;

    //cout << Nbre_Elts<<" " << decale;

    if (Nbre_Elts >= decale && decale > 0 && newValu > 0)
    {

        for (int i=Nbre_Elts; i > decale-1; i--)
        {
            cout << ListePiece[i] << " <-- " << ListePiece[i-1] << endl;
            ListePiece[i] = ListePiece[i-1];
        }

        Nbre_Elts++;
        ListePiece[decale-1] = newValu;

     } else {
        error = true;
    }

    return error;
}

bool Clist::DeletePiece(int delPlace)
{
    bool error = false;

    //cout << Nbre_Elts<<" " << decale;

    if (Nbre_Elts >= delPlace && delPlace > 0)
    {

        for (int i=delPlace; i < Nbre_Elts; i++)
        {
            cout << ListePiece[i] << " <-- " << ListePiece[i-1] << endl;
            ListePiece[i-1] = ListePiece[i];
        }
        ListePiece[Nbre_Elts] = 0;
        Nbre_Elts--;


     } else {
        error = true;
    }

    return error;
}

void Clist::AfficherListe()
{
    if (Nbre_Elts != 0)
    {
        for (int i=0; i < Nbre_Elts; i++)
        {
            cout << "Place " << i+1 << " : " << ListePiece[i] << endl;
        }
    } else {
        cout << "Commencer par saisir une liste" <<endl;
    }
}

bool Clist::RechercherComptePieces(int num_place,int & num_id, int & Nombre)
{
    num_id = ListePiece[num_place-1];
    Nombre =0;
    bool error = false;

    if (Nbre_Elts >= num_place && num_place > 0)
    {
        for (int i=0; i < Nbre_Elts; i++)
        {
            if (ListePiece[i] == num_id)
            {
                Nombre++;
            }
        }
     } else {
        error = true;

    }

    return error;
}
