#include <iostream>
#include "ihm.h"

using namespace std;

ihm::ihm()
{

}

void ihm::menu(void)
{
    cout << "Saisire une nouvelle section\t s\nAjouter de nouvelles section\t a\nVisualiser une nouvelle section\t v\n";
    cout << "Arret\t\t\t\t f\n";
    cout << "rentrer votre choix : ";

    cin >> choiceP;
}

void ihm::lancer(int add)
{
  do
  {
   if (add > 0)
   {
       sec.SaisieSection(add);
       add =0;
   }
    menu();
    traitrechoix();
  }while (choiceP != 'f');
}
void ihm::traitrechoix()
{


    switch (choiceP)
    {
        case 'a' : sec.AddEelve(); break;
        case 's' : sec.SaisieSection(); break;
        case 'v' : sec.AfficheSection(); break;
        case 'f' : cout << "Fermeture du programe"; break;
        default: cout << "Valeur inconue";
    }
}
