#ifndef CLISTEPIECES_H
#define CLISTEPIECES_H

#include <vector>

using namespace std;

class CListepieces
{
private:
    vector<int> ListePieces;
public:

    void AjoutPiece(int Num_Ident);
    bool SupprPiece(int Num_Place);
    void SupprDesPieces(int Num_ID);
    bool RechercherComptedsPieces(int Num_Place,int& Nombre, int& Num_Ident);
    bool InsererPiece(int Num_Ident, int Num_Place);

    void EnregistrerListe();
    bool ChargeListe();

    vector<int> RetListe(); //accenseur du vecteur
};

#endif // CLISTEPIECES_H
