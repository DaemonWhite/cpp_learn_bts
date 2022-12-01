#include "Precipitation.h"

const std::array<std::string,12> Precipitation::listeMois =  {
            "janvier",
            "fevrier",
            "mars",
            "avril",
            "mai",
            "juin",
            "juillet",
            "aout",
            "septembre",
            "octobre",
            "novembre",
            "decembre"
        };

Precipitation::Precipitation()
{

    for (int i=0; i<12; i++) {
        lesPrecipitationsNonTrie.push_back(DoneeMois(this->listeMois[i]));
    }

}

Precipitation::~Precipitation()
{
    //dtor
}
bool Precipitation::setPrecipitationMois(DoneeMois mesDonnee)
{
    bool valide = false;
    int indice = this->rechercheIndiceMois(mesDonnee.mois);
    if ( indice != -1) {
        lesPrecipitationsNonTrie[indice] = mesDonnee;
        valide = true;
    }
    return valide;
}

float Precipitation::getPrecipitationMois(std::string mois)
{
    float ret =-1;
    int indice = this->rechercheIndiceMois(mois);
    if ( indice != -1) {
        ret = this->lesPrecipitationsNonTrie[indice].quantite;
    }
    return ret;
}

void Precipitation::setVille(std::string nom)
{
    this->ville = nom;
}

std::string Precipitation::getVille()
{
    return this->ville;
}

DoneeMois Precipitation::getMaxi()
{
    int maxi = this->lesPrecipitationsNonTrie[0].quantite;
    int indicie = 0;
    for (int i=1; i<12; i++) {
        if (this->lesPrecipitationsNonTrie[i].quantite > maxi){
            maxi = this->lesPrecipitationsNonTrie[i].quantite;
            indicie = i;
        }
    }

    return this->lesPrecipitationsNonTrie[indicie];
}

float Precipitation::getCumul()
{
    float moyenne=0;

    for (int i=0; i<12; i++) {
        moyenne = lesPrecipitationsNonTrie[i].quantite;
    }

    return moyenne;
}

float Precipitation::getMoyenne()
{
    return this->getCumul()/12;
}

std::vector <DoneeMois> Precipitation::getTrie()
{
    this->tri();
    return this->lesPrecipitationsTrie;
}

std::vector <DoneeMois> Precipitation::getNomTrie()
{
    return this->lesPrecipitationsNonTrie;
}

int Precipitation::rechercheIndiceMois(std::string mois)
{
    int indice=-1;

    for (int i=0; i<12; i++){
        if (listeMois[i] == mois) {
            indice =i;
            break;
        }
    }

    return indice;
}

void Precipitation::tri()
{
    this->lesPrecipitationsTrie = this->lesPrecipitationsNonTrie;
    float tmp;
    for (int i=0; i<12; i++){
        for (int j=0; 0<12; j++){
            if ( this->lesPrecipitationsTrie[j+1].quantite < this->lesPrecipitationsTrie[j].quantite ){
                tmp = this->lesPrecipitationsTrie[j].quantite;
                this->lesPrecipitationsTrie[j].quantite = this->lesPrecipitationsTrie[j+1].quantite;
                this->lesPrecipitationsTrie[j+1].quantite = tmp;
            }
        }
    }
}
