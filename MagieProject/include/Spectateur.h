#ifndef SPECTATEUR_H
#define SPECTATEUR_H
#include <string>
#include "Perssone.h"

class Spectateur : public Personne
{

    private:
        unsigned short argent;

    public:
        Spectateur(std::string nom, int age, unsigned short argent);
        virtual ~Spectateur();

        void arriveSurScene();
        void sePresenter();
};

#endif // SPECTATEUR_H
