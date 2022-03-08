#ifndef IHM_H
#define IHM_H
#include "clist.h"

class ihm
{
private:
    Clist client;
    char choiceP;
    void menu(void);
    void traitrechoix(void);
public:
    void lancer();
};

#endif // IHM_H
