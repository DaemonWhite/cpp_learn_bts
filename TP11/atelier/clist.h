#ifndef CLIST_H
#define CLIST_H


class Clist
{
private:
    int ListePiece[150];
    int Nbre_Elts;
public:
    Clist();
    void AjouterPieces();
    bool InsertPiece(int decale, int newValu);
    bool DeletePiece(int delPlace);
    void AfficherListe();
    bool RechercherComptePieces(int num_place,int & num_id, int & Nombre);
};

#endif // CLIST_H
