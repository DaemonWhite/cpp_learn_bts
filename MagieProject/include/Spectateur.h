#ifndef SPECTATEUR_H
#define SPECTATEUR_H
#include "Personne.h"
#include "PapierMagie.h"
#include <string>

class Spectateur : public Personne
{
    public:
        Spectateur(std::string nom, int age, unsigned short argent);
        virtual ~Spectateur();
        void arriverSurScene();
        void sePresenter();
        void remplirPapier(PapierMagie & lePapier);

    private:
        unsigned short argent;
};

#endif // SPECTATEUR_H
