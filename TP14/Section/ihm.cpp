#include "ihm.h"
#include "section.h"
#include <iostream>

using namespace std;

void ihm::menu()
{
    cout << "c -->\tcreer une section" << endl
         << "a -->\tajouter des eleves a la section deja existante" << endl
         << "d -->\tsuprimer un eleve"<<endl
         << "v -->\tvisualiser le fichier de la section"<<endl
         << "f -->\tfin du programe"<<endl;
    cin >> choix;
}

void ihm::lancer(){
    do{
        menu();
        traitrechoix();
    } while('f'!=choix);
}

void ihm::traitrechoix(){

    section sect;

    switch (choix) {
        case 'c':
            sect.AjoutEleves();
            sect.EnregistreSection();
        break;
        case 'a':
            sect.LireSection();
            sect.AjoutEleves();
            sect.EnregistreSection();
        break;
        case 'v':
            sect.LireSection();
            sect.AfficherSection();
        break;
        case 'd':
            sect.LireSection();
            sect.AfficherSection();
            sect.SuprimeEleve();
            sect.EnregistreSection();
        break;
        case 'f':
            cout << "Fermeture du programe";
        break;
        default:
            cout << "Erreur --> choix " << choix << "non conue";

    }
    cout << endl;

}
