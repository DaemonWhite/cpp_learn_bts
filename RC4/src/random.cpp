#include "random.h"
#include <stdlib.h>
#include <time.h>
#include <algorithm>


std::mt19937 Random::mt(time(NULL));

Random::Random(int mini, int maxi, int taille, bool exclusif)
{
    this->maxi = maxi;
    this->mini = mini;
    this->taille = taille;
    this->exclusif = exclusif;

    this->inversionMaxMini();

    this->remplirTab();

}

Random::~Random()
{
    //dtor
}



//Private Methode

void Random::inversionMaxMini() {
    if (this->maxi < this->mini) {
        int tmp = this->mini;

        this->mini = this->maxi;
        this->maxi = tmp;
    }

}

void Random::inversionMaxMini(int & mini, int & maxi) {
    if (maxi < mini) {
        int tmp = mini;

        mini = maxi;
        maxi = tmp;
    }
}

//Private function

int Random::calculValeur()
{
    return this->dis(mt);
}

void Random::testTaille() {

    int tmpSize = this->maxi - this->mini + 1;
    if (this->exclusif && tmpSize < this->taille) {
        this->taille = tmpSize;
    }
    this->tabRandom.clear();
}

//Public function
void Random::remplirTab() {
    this->dis = std::uniform_int_distribution <int>(this->mini, this->maxi);
    this->testTaille();
    int rand;

    do{
        rand = this->calculValeur();

        if(this->exclusif)
            while(find(this->tabRandom.begin(), this->tabRandom.end(), rand) != this->tabRandom.end())
                rand=calculValeur();

        this->tabRandom.push_back(rand);

    }while(static_cast <int>(this->tabRandom.size()) < this->taille);

}

int Random::valeurUnique(int valMini, int valMaxi) {

    inversionMaxMini(valMini, valMaxi);
    std::uniform_int_distribution <int> dis(valMini,valMaxi);

    return dis(mt);
}

//Public access

//Acsesseur en ecriture.
void Random::setMaxi(int maxi) {
    this->maxi = maxi;
    this->inversionMaxMini();
    this->remplirTab();
}

void Random::setMini(int mini) {
    this->mini = mini;
    this->inversionMaxMini();
    this->remplirTab();
}

void Random::setTaille(int taille) {
    this->taille = taille;
    this->inversionMaxMini();
    this->remplirTab();
}

//Acsesseur en lecture.

int Random::getMaxi() const {
    return this->maxi;
}

int Random::getMini() const {
    return this->mini;
}

int Random::getTaille() const {
    return this->taille;
}

int Random::operator[] (int indice) const {

    int ret = -1;

    if (this->taille >= indice) {
        ret = tabRandom[indice];
    }

    return ret;

}

std::vector <int> Random::getTableau() {
    return this->tabRandom;
}
