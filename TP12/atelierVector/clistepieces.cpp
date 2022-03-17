#include "clistepieces.h"

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
    if (Num_Place < Nbre_Elts && Num_Place>=0 && Num_Ident <= 0)
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
