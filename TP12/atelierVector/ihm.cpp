#include <iostream>
#include "ihm.h"

void ihm::Menu()
{
    cout << "Pour saisir, taper s" << endl;
    cout << "Pour inserer, taper i" << endl;
    cout << "Pour rechercher, taper r" << endl;
    cout << "Pour afficher, taper a" << endl;
    cout << "Pour finir, taper f" << endl;
    cout << "Faites votre choix : ";
    cin >> choixP;
}

void ihm::Lancer()
{
    do
    {
        Menu();
        TraiteChoix();
    } while(choixP != 'f');
}

void ihm::TraiteChoix()
{
    int search,num_id,Nombre;
    bool error=false;
    switch (choixP)
        {
            case 's' :
                SaisirListe();
            break;
            case 'i' :
                cout << "Entrer la place d'insertion : ";
                cin >> Nombre;
                cout << "Entre la Nouvelle id : ";
                cin >> num_id;
                MaListe.InsererPiece(num_id, Nombre);
            break;
            case 'a' :
                AfficherListe();
            break;
            case 'r' :
                cout << "Entrer la place de la pièce cherchée" << endl;
                cin >> search;
                cout << "Place de la pièce recherchée" << endl;
                MaListe.RechercherComptedsPieces(search,Nombre, num_id);
                cout << "ID : " << num_id << " Nombre : " << Nombre << endl;
            break;
            case 'f' : cout << "fermeture du programme"<< endl; break;
            default: cout << "Valeur incorrecte" <<endl;
        }
}

void ihm::AfficherListe()
{
    vector<int> liste;
    liste = MaListe.RetListe();
    int nbreElts = liste.size();

    if (nbreElts !=0)
    {
        for (int i =0; i<nbreElts; i++)
        {
              cout << "Place " << i+1 << " : " << liste[i] << endl;
        }
    } else {
      cout << "Veulliez saisir le nombre d'element avant" << endl ;
    }
}

void ihm::SaisirListe()
{
    int lastValue;
    int nbreElts;
    vector<int> liste;
    liste = MaListe.RetListe();
    nbreElts = liste.size();

        cout << "0 Mettra fin à la saisie" << endl;
        cout << "Il y a actuellement " << nbreElts << " pièce(s)" << endl;


        do
        {

            cout << "Entrer l'id de la pièce à la place " << nbreElts+1 << endl;
            cin >> lastValue;

            if (lastValue!=0)
            {
                nbreElts = liste.size();
                MaListe.AjoutPiece(lastValue);
            }

        }
        while(lastValue != 0);
}
