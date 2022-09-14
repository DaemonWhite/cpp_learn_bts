#include "superrand.h"
#include <stdlib.h>
#include <time.h>
#include <algorithm>

superrand::superrand(int mini, int maxi, int taille, bool exclusif)
{
    this->maxi = maxi;
    this->mini = mini;
    this->taille = taille;
    this->exclusif = exclusif;


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

int superrand::calculValeur() {
    int ret = 0;
    return ret;
}

//Public access

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

int superrand::getMaxi() const {
    return this->maxi;
}

int superrand::getMini() const {
    return this->mini;
}

int superrand::getTaille() const {
    return this->taille;
}
