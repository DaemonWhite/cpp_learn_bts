#ifndef IHM_H
#define IHM_H

#include "clistepieces.h"


class ihm
{
private:
    CListepieces MaListe;
    char choixP;

    void SaisirListe();
    void AfficherListe();

    void Menu();
    void TraiteChoix();
public:
    void Lancer();
};

#endif // IHM_H
