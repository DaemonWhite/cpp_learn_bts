#include <iostream>
#include "random.h"

void afficheStat(Random alah, const bool exc) {
    std::vector<int> moise;

    int choiceValue = alah[20];

    std::cout << "Exclusif : " << exc << std::endl << std::endl;
    std::cout << "Maxi : " << alah.getMaxi() << std::endl;
    std::cout << "Mini : " << alah.getMini() << std::endl;
    std::cout << "Taille :" << alah.getTaille() << std::endl << std::endl;

    moise = alah.getTableau();

    for(long unsigned int i=0; i < moise.size(); i++){
        std::cout << i + 1 << " : " << moise[i] << std::endl;
    }

    if (choiceValue != -1) {
        std::cout << std::endl << "Valeur 21 : " << choiceValue << std::endl;
    } else {
        std::cout << std::endl << "la valeur 21 n'existe pas" << std::endl;
    }

    std::cout << "Valeur Unique : " << alah.valeurUnique(50, 73) << std::endl;
}

int main()
{

    const bool exc = true;
    Random alah(1, 5, 10, exc);

    afficheStat(alah, exc);

    std::cout << std::endl << "Change maxi & change mini" << std::endl;
    alah.setMaxi(20);
    alah.setMini(5);
    alah.setTaille(23);

    afficheStat(alah, exc);


    return 0;
}
