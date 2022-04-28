#include "section.h"
#include <iostream>

using namespace std;

section::section()
{

}
void section::AjoutEleves()
{
    string lastValue;
       cout << "0 Mettra fin à la saisie" << endl;
       cout << "Il y a actuellement " << nbreEleves << " pièce(s)" << endl;


       for (int i=0; i>)
       {
               cout << "Entrer le nom de l'eleve" << nbreEleves+1 << endl;
               cin >> lastValue;

               if (lastValue!="0")
               {
                   TabEleve[0].SaisieEleve();
                   nbreEleves++;
               }
       }
}
