#include "ihm.h"
#include <iostream>

using namespace std;

void ihm::menu()
{
    cout << "taper 's' \tpour saisir des piéces"    <<endl;
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
    switch (choiceP)
    {
        case 's' :
            client.AjouterPieces();
            cout << "Fermeture du système d'ajout de pièce" << endl;
        break;
        case 'a' : client.AfficherListe(); break;
        case 'r' :
            cout << "Entrer l'a place de la piece chercher" << endl;
            cin >> search;
            cout << "Place de la piece rechercher" << endl;
            client.RechercherComptePieces(search,num_id, Nombre);
            cout << "ID : " << num_id << " Nombre : " << Nombre << endl;
        break;
        case 'f' : cout << "fermeture du programe"<< endl; break;
        default: cout << "Valeur incorrecte" <<endl;
    }
}
