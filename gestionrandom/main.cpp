#include <iostream>
#include "superrand.h"

using namespace std;

void afficheStat(superrand alah, const bool exc) {
    std::vector<int> moise;

    int choiceValue = alah[20];

    cout << "Exclusif : " << exc << endl << endl;
    cout << "Maxi : " << alah.getMaxi() << endl;
    cout << "Mini : " << alah.getMini() << endl;
    cout << "Taille :" << alah.getTaille() << endl << endl;

    moise = alah.getTableau();

    for(long unsigned int i=0; i < moise.size(); i++){
        cout << i + 1 << " : " << moise[i] << endl;
    }

    if (choiceValue != -1) {
        cout << endl << "Valeur 21 : " << choiceValue << endl;
    } else {
        cout << endl << "la valeur 21 n'existe pas" << endl;
    }

    cout << "Valeur Unique : " << alah.valeurUnique(50, 73) << endl;
}

int main()
{

    const bool exc = true;
    superrand alah(1, 5, 10, exc);

    afficheStat(alah, exc);

    cout << endl << "Change maxi & change mini" << endl;
    alah.setMaxi(20);
    alah.setMini(5);
    alah.setTaille(23);

    afficheStat(alah, exc);


    return 0;
}
