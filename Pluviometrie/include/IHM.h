#ifndef IHM_H
#define IHM_H
#include "Precipitation.h"

class IHM
{
    public:
        IHM();
        void lancer();
        virtual ~IHM();

    private:
        static const int FIN = -7;
        Precipitation preci;
        int choix;
        void afficherMenu();
        void saisirChoix();
        void traiteChoix();
        void saisirNomVille();
        void saisirPrecipitation();
        void afficherPrecipitationTrie();
        void afficherPrecipitationNonTrie();
        void cumul();
        void moyenne();

};

#endif // IHM_H
