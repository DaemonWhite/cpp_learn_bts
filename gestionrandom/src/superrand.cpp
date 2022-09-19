#include "superrand.h"
#include <stdlib.h>
#include <time.h>
#include <algorithm>


std::mt19937 superrand::mt(time(NULL));

superrand::superrand(int mini, int maxi, int taille, bool exclusif)
{
    this->maxi = maxi;
    this->mini = mini;
    this->taille = taille;
    this->exclusif = exclusif;

    dis = std::uniform_int_distribution <int>(mini,maxi);






    inversionMaxMini();
}

superrand::~superrand()
{
    //dtor
}



//Private Methode

void superrand::inversionMaxMini() {
    if (this->maxi < this->mini) {
        int tmp = this->mini;

        this->mini = this->maxi;
        this->maxi = tmp;
    }

}

//Private function

int superrand::calculValeur()
{
    int ret = this->dis(mt);
    return ret;
}

//Public function
void superrand::remplirTab() {
    const short e=0;
    for (int i = this->taille; i <= e; i++) {
        this->remplirTab[i] = calculValeur();
    }

}

//Public access

//Acsesseur en ecriture.
void superrand::setMaxi(int maxi) {
    this->maxi = maxi;
    inversionMaxMini();
}

void superrand::setMini(int mini) {
    this->mini = mini;
    inversionMaxMini();
}

void superrand::setTaille(int taille) {
    this->taille = taille;
    inversionMaxMini();
}

//Acsesseur en lecture.

int superrand::getMaxi() const {
    return this->maxi;
}

int superrand::getMini() const {
    return this->mini;
}

int superrand::getTaille() const {
    return this->taille;
}

int superrand::operator[] (int indice) const {

    int ret = -1;

    if (this->taille >= indice) {
        ret = tabRandom[indice];
    }

    return ret;

}

std::vector <int> superrand::getTableau() {
    return this->tabRandom;
}
