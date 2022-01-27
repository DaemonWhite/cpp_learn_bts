#include <iostream>
#include "ihm.h"
#include "section.h"

using namespace std;

ihm::ihm()
{

}

void ihm::menu(void)
{
    cout << "Saisire une nouvelle section\t s\nVisualiser une nouvelle section\t v\n";
    cout << "Arret\t\t\t\t f\n";
    cout << "rentrer votre choix : ";

    cin >> choiceP;
}

void ihm::lancer(void)
{
  do
  {
   menu();
   traitrechoix();
  }while (choiceP != 'f');
}
void ihm::traitrechoix()
{
    Section sec;
    switch (choiceP)
    {
        case 's' : ;
    }
}
