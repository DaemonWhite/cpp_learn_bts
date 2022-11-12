#include "FichierCrypte.h"

FichierCrypte::FichierCrypte(std::string source, bool cryptage, std::string extension)
{
    this->cryptage = cryptage;
    fichierSource.open(source);
    nomDestination = source;
    nomSource = source;
    this->nomFichierDestination(extension);
}

FichierCrypte::~FichierCrypte()
{
    //dtor
}

bool FichierCrypte::crypteFichier() {

}

void FichierCrypte::nomFichierDestination(std::string extension) {
    int posDestination = -1;
    do {
        posDestination = nomDestination.find(".");
        if (nomDestination.find(".") != std::string::npos){
            break;
        }
    } while (true);

    nomDestination.substr(0, posDestination);

    if (!this->controleExtentionFichier(extension)) {
        if (this->cryptage) {
            nomDestination += ".cry";
        } else {
            nomDestination += ".txt";
        }
    } else {
        nomDestination += extension;
    }
}

bool FichierCrypte::controleExtentionFichier(std::string extension) {
    bool ret = true;
    if (
           (extension.size() > 3)
        || (extension.size() != 1)
        ) {
        ret = false;
    }

    switch (extension[0]) {
       case  '0' : ret = false; break;
       case  '1' : ret = false; break;
       case  '2' : ret = false; break;
       case  '3' : ret = false; break;
       case  '4' : ret = false; break;
       case  '5' : ret = false; break;
       case  '6' : ret = false; break;
       case  '7' : ret = false; break;
       case  '8' : ret = false; break;
       case  '9' : ret = false; break;
    }

    return ret;
}

std::string FichierCrypte::getNomDestination() {
    return this->nomDestination;
}

std::string FichierCrypte::getNomSource() {
    return this->nomSource;
}
