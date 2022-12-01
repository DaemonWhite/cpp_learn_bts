#include "DoneeMois.h"

DoneeMois::DoneeMois(std::string mois, float quantite)
{
    this->mois = mois;
    this->quantite = quantite;
}

DoneeMois::~DoneeMois()
{
    //dtor
}

std::string DoneeMois::getMois()
{
    return this->mois;
}

float DoneeMois::getQuatite()
{
    return this->quantite;
}
