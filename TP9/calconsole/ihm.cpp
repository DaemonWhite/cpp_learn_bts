#include <iostream>
#include "ihm.h"
#include "calcul.h"
using namespace std;

ihm::ihm()
{
}

void ihm::menu(void)
{
    cout << "Inverse\t\t\ti\nReste et Quotient\td\nMini et Maxi\t\tm\n";
    cout << "Arret\t\t\tf\n";
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
    Calcul calcul;

    float fDemTab[4];
    float max,min,inv;
    int iDemA;
    int iDemB;

    int quotient;
    int reste;

    switch (choiceP)
    {
            case 'i' :
                cout << "Donner la valeur à inverser : ";
                cin >> fDemTab[0];

                inv = calcul.inverse(fDemTab[0]);

                cout << "\nL'inverde est : " << inv << "\n";
        break;

            case 'd' :

                cout << "\nDonner le numerateur : ";
                cin >> iDemA;
                cout << "Donner le dedonimateur : ";
                cin >> iDemB;

                quotient = calcul.quotient(iDemA,iDemB);
                reste = calcul.reste(iDemA,iDemB);

                cout << "Le Quotien est de : " << quotient << "\nLe reste est de : " << reste << "\n";

            break;
            case 'm' :

                for(int i=0; i < 4; i++)
                {
                    cout << "Donner la valeur " << i+1 << " : ";
                    cin >> fDemTab[i];
                }

                max = calcul.max(fDemTab[0],fDemTab[1],fDemTab[2],fDemTab[3]);
                min = calcul.min(fDemTab[0],fDemTab[1],fDemTab[2],fDemTab[3]);

                cout << "Le max : " << max << "\nLe min : " << min << "\n";
            break;

            case 'f' : cout << "Fermeture du programe\n"; break;
            default : printf("Valeur inconue\n");
    }
}
