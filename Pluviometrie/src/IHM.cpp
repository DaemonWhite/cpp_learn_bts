#include "IHM.h"
#include <iostream>
#include <string>
#include <array>
#include "DoneeMois.h"

IHM::IHM()
{
    //ctor
}

IHM::~IHM()
{
    //dtor
}
void IHM::lancer()
{
    do {
        system("cls");
        this->afficherMenu();
        this->saisirChoix();
        system("cls");
        this->traiteChoix();
        std::cout << "Apuuyer sur une touche pour quitter...";
        system("pause>nul");
    } while (this->choix != 7);
}

void IHM::afficherMenu()
{
    std::cout << std::endl << "\t \t \t Pluviometrie d'une ville" << std::endl << std::endl << std::endl;

    std::cout << "\t \t 1. Sasir nom de la ville" << std::endl
    << "\t \t 2. Saisir precipitations " << std::endl
    << "\t \t 3. Afficher precipitations" << std::endl
    << "\t \t 4. Afficher precipitations croissntes" << std::endl
    << "\t \t 5. Afficher cumul annuel" << std::endl
    << "\t \t 6. Afficher moyenne annuelle" << std::endl
    << "\t \t 7. Fin" << std::endl;

    std::cout << "Choix: ";
}

void IHM::saisirChoix()
{
    std::cin >> this->choix;
}

void IHM::traiteChoix()
{
    switch (this->choix) {
        case 1: this->saisirNomVille();break;
        case 2: this->saisirPrecipitation();break;
        case 3: this->afficherPrecipitationNonTrie();break;
        case 4: this->afficherPrecipitationTrie();break;
        case 5: this->cumul();break;
        case 6: this->moyenne();break;
        case 7: std::cout << "Aurevoir" << std::endl ;break;

    }
}

void IHM::saisirNomVille()
{
    std::string ville;
    std::cout << "Nom de la ville : ";
    std::cin >> ville;
    preci.setVille(ville);
}

void IHM::saisirPrecipitation()
{
    const std::array<std::string,12> listeMois =  {
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
    float tmpQuantite;
    for (int i=0; i<12; i++) {
        std::cout << "Precipitation de " << listeMois[i] << " en ml : ";
        std::cin >> tmpQuantite;
        preci.setPrecipitationMois(DoneeMois(listeMois[i], tmpQuantite));
    }
}

void IHM::afficherPrecipitationTrie()
{
    std::vector <DoneeMois> mois = preci.getTrie();
    for (int i=0; i<12; i++) {
        std::cout << "Precipitation de " << mois[i].getMois() << " en ml : " << mois[i].getQuatite() << std::endl;
    }
}

void IHM::afficherPrecipitationNonTrie()
{
    std::vector <DoneeMois> mois = preci.getNomTrie();
    for (int i=0; i<12; i++) {
        std::cout << "Precipitation de " << mois[i].getMois() << " en ml : " << mois[i].getQuatite() << std::endl;
    }
}

void IHM::cumul()
{
    std::cout << "Cumullation de pluie anuelle : " << preci.getCumul() << std::endl;
}

void IHM::moyenne()
{
    std::cout << "Moyenne de pluie anuelle : " << preci.getMoyenne() << std::endl;
}
