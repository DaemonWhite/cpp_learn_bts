#include "Assistant.h"

Assistant::Assistant(std::string nom) : Personne(nom)
{
    //ctor
}

Assistant::~Assistant()
{
    //dtor
}
unsigned int Assistant::getNombreCalcule()
{
    return nombreCalcule;
}

void Assistant::appelerSpectateur()
{

}

void Assistant::prendrePapier(PapierMagie &lePapier)
{
    this->lePapier = lePapier;
}

void Assistant::calcule()
{

}
