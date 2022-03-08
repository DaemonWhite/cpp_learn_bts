#include "ihm.h"
#include <iostream>

using namespace std;

void ihm::menu()
{
    cout << "taper 's' \tpour saisir des piéces"    <<endl;
    cout << "taper 'i' \tpour insere une valeur" << endl;
    cout << "taper 'a' \tpour afficher les pièces"  <<endl;
    cout << "taper 'r' \tpour rechercer des pièces" <<endl;
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
            cout << "Entrer la place d'incertion : ";
            cin >> Nombre;
            cout << "Entre le Nouvelle id : ";
            cin >> num_id;
            error = client.InsertPiece(num_id, Nombre);
            if (error)
            {
                cout << "Erreur : La Place " << Nombre << " et non atribuer" << endl;
            }
        break;
        case 'a' : client.AfficherListe(); break;
        case 'r' :
            cout << "Entrer l'a place de la piece chercher" << endl;
            cin >> search;
            cout << "Place de la piece rechercher" << endl;
            error = client.RechercherComptePieces(search,num_id, Nombre);
            if (!error)
            {
                cout << "ID : " << num_id << " Nombre : " << Nombre << endl;
            } else {
                cout << "Erreur : La Place " << search << " et non atribuer" << endl;
            }

        break;
        case 'f' : cout << "fermeture du programe"<< endl; break;
        default: cout << "Valeur incorrecte" <<endl;
    }
}
