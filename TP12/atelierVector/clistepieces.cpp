#include "clistepieces.h"
#include <fstream>

vector<int> CListepieces::RetListe()
{
    return ListePieces;
}

void CListepieces::AjoutPiece(int Num_Ident)
{
    ListePieces.push_back(Num_Ident);
}

bool CListepieces::InsererPiece(int Num_Ident, int Num_Place)
{
    int Nbre_Elts = ListePieces.size();
    bool error=false;
    if (Num_Place < Nbre_Elts && Num_Place > 0 && Num_Ident < 0)
    {
        ListePieces.insert(ListePieces.begin()+Num_Place-1, Num_Ident);
    } else {
        error=true;
    }
    return error;
}

bool CListepieces::RechercherComptedsPieces(int Num_Place,int& Nombre, int& Num_Ident)
{
    int Nbre_Elts = ListePieces.size();
    Num_Ident = ListePieces[Num_Place-1];
    Nombre =0;
    bool error=false;
   if (Nombre < Nbre_Elts && Nombre>=0 && Num_Ident <= 0)
   {
       for (int i=0; i < Nbre_Elts; i++)
       {
           if (ListePieces[i] == Num_Ident)
           {
                Nombre++;
           }
       }
   } else {
       error=true;
   }

   return error;
}

bool CListepieces::SupprPiece(int Num_Place)
{
    bool error=false;
    int Nbre_Elts = ListePieces.size();

    if (Num_Place <= Nbre_Elts && Num_Place > 0)
    {
        ListePieces.erase(ListePieces.begin()+Num_Place-1);
    } else {
        error=true;
    }

    return error;
}

void CListepieces::SupprDesPieces(int Num_ID)
{
    int Nbre_Elts = ListePieces.size();


    for (int i=0; i < Nbre_Elts; i++)
    {
        if ( ListePieces[i] == Num_ID)
        {
            ListePieces.erase(ListePieces.begin()+i);
            Nbre_Elts = ListePieces.size();
            i--;
        }
    }

}

//load file

void CListepieces::EnregistrerListe()
{
    ofstream file;
    file.open("liste.txt");
    int nbreElts = ListePieces.size();
    for (int i=0; i< nbreElts; i++)
    {
        file << ListePieces[i] << endl;
    }

    file.close();
}

bool CListepieces::ChargeListe()
{
    bool error=false;
    int tmp;
    ifstream file("liste.txt");

    if (file)
    {
        do {
            file >> tmp;
            if (file)
            {
                AjoutPiece(tmp);
            }

        } while(file);

    } else {
        error=true;
    }

    return error;
}
