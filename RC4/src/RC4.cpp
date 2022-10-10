#include "RC4.h"
#include "superrand.h"

RC4::RC4(unsigned int tailleCle ){
    if (tailleCle == 0) {
        this->tailleCle = superrand::valeurUnique(40, 255);
    } else {
        this->tailleCle = tailleCle;
    }
}
RC4::RC4(unsigned char *cle, int tailleCle){
}
RC4::RC4(std::vector<unsigned char> cle){
}

std::vector<unsigned char> RC4::getCle() {
    return maCle;
}

unsigned int RC4::getTailleCle() {
    return maCle.size();
}
