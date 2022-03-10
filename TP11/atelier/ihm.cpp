#include "ihm.h"
#include <iostream>

using namespace std;

void ihm::menu()
{
    cout << "taper 's' \tpour saisir des pièces"    <<endl;
    cout << "taper 'i' \tpour insérer une valeur" << endl;
    cout << "taper 'd' \tpour suprimer" << endl;
    cout << "taper 'a' \tpour afficher les pièces"  <<endl;
    cout << "taper 'r' \tpour rechercher des pièces" <<endl;
    cout << "taper 'f' \tpour fermer le programe"   <<endl;
    cout << "Entrer caractère : ";
    cin >> choiceP;
}

void ihm::lancer()
{
  do
  {
    menu();
    traitrechoix();
  }while (choiceP != 'f');
}

void ihm::traitrechoix()
{
    int num_id, Nombre, search;
    bool error=false;

    switch (choiceP)
    {
        case 's' :
            client.AjouterPieces();
            cout << "Fermeture du système d'ajout de pièce" << endl;
        break;
        case 'i' :
            cout << "Entrer la place d'insertion : ";
            cin >> Nombre;
            cout << "Entre la Nouvelle id : ";
            cin >> num_id;
            error = client.InsertPiece(Nombre, num_id);
            if (error)
            {
                cout << "Erreur : La Place " << Nombre << " et non attribuer" << endl;
            }
        break;
        case 'd' :
            cout << "Entrer la place à suprimer : ";
            cin >> Nombre;

            error = client.DeletePiece(Nombre);
            if (error)
            {
                cout << "Erreur : La Place " << Nombre << " et non attribuer" << endl;
            };
        break;
        case 'a' : client.AfficherListe(); break;
        case 'r' :
            cout << "Entrer la place de la pièce cherchée" << endl;
            cin >> search;
            cout << "Place de la pièce recherchée" << endl;
            error = client.RechercherComptePieces(search,num_id, Nombre);
            if (!error)
            {
                cout << "ID : " << num_id << " Nombre : " << Nombre << endl;
            } else {
                cout << "Erreur : La Place " << search << " et non attribuer" << endl;
            }

        break;
        case 'f' : cout << "fermeture du programme"<< endl; break;
        default: cout << "Valeur incorrecte" <<endl;
    }
}
