#include "RC4.h"
#include "superrand.h"

RC4::RC4(unsigned int tailleCle ): tailleTableauEtat(255){
    this->tailleCle = tailleCle;

    if (tailleCle == 0) {
        this->tailleCle = superrand::valeurUnique(40, 255);
    }
    this->genereCle();
    this->initCodageDecodage();
}
RC4::RC4(unsigned char *cle, int tailleCle) : tailleTableauEtat(255){
    copy(cle, cle+tailleCle, this->maCle.begin());
    this->tailleCle = tailleCle;
    this->initCodageDecodage();

}
RC4::RC4(std::vector<unsigned char> cle): tailleTableauEtat(255) {
    this->maCle = cle;
    this->tailleCle = cle.size();
    this->initCodageDecodage();
}

void RC4::genereCle() {
        this->tableauEtat.resize(tailleTableauEtat);
        superrand cle( 1,255, this->tailleCle );
        std::vector <int> temp = cle.getTableau();
        //this->maCle = std::vector <unsigned char> (temp.begin(),temp.end());
        maCle.resize(temp.size());
        copy(temp.begin(), temp.end(), maCle.begin());

}

void RC4::initCodageDecodage() {
    for (this->i = 0; i < this->tailleTableauEtat-1; this->i++){
        this->tableauEtat[this->i] = this->i;
    }
    this->melangeTableauEtat();
}

void RC4::melangeTableauEtat() {
    this->j = 0;
    int indiceCle =0;
    for ( this->i =0; i < this->tailleTableauEtat-1; this->i++) {
        indiceCle = this->i%this->tailleCle;
        this->j = (this->j + this->tableauEtat[this->i] + this->maCle[indiceCle] ) % this->tailleTableauEtat;
        this->swap(&this->tableauEtat[this->i], &this->tableauEtat[this->j]);
    }
    this->i=0;
    this->j=0;
}

unsigned char RC4::chiffrage(unsigned char octet) {
    this->i = (this->i++) % this->tailleTableauEtat;
    this->j = (this->j + this->tableauEtat[this->i]) % this->tailleTableauEtat;
    unsigned int n=0;
    this->swap(&this->tableauEtat[this->i], &this->tableauEtat[this->j]);
    n = (this->tableauEtat[this->i], this->tableauEtat[this->j]) % this->tailleTableauEtat;

    return octet ^ this->tableauEtat[n];
}

void RC4::swap(unsigned char * val1, unsigned char * val2) {
    unsigned char tmp = *val1;
    *val1=*val2;
    *val2= tmp;
}

std::vector<unsigned char> RC4::getCle() {
    return maCle;
}

unsigned int RC4::getTailleCle() {
    return maCle.size();
}
