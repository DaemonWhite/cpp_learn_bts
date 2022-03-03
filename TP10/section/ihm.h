#ifndef IHM_H
#define IHM_H

#include "section.h"

class ihm
{
private:
     char choiceP;
     void menu(void);
     void traitrechoix(void);
      Section sec;

public:
    void lancer(int add);
    ihm();
};

#endif // IHM_H
