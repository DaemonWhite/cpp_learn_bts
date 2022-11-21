#include "Spectateur.h"
#include "iostream"

Spectateur::Spectateur(std::string nom, int age, unsigned short argent) : Personne(nom, age)
{
    this->argent = argent;
}

Spectateur::~Spectateur()
{
    //dtor
}

void Spectateur::remplirPapier(PapierMagie & lePapier) {
    lePapier.setAge(this->age);
    lePapier.setArgent(this->argent);
}

void Spectateur::sePresenter() {
    std::cout << "[Spectateur] -- Bonjour, je m'appelle Dingo" << std::endl;
}

void Spectateur::arriverSurScene() {
    std::cout << "** Le spectateur Dingo arrive sur scène" << std::endl;
    std::cout << "** Dingo a 22 ans et 56 euros, mais personne ne le sait" << std::endl;
}
