#ifndef ASSISTANT_H
#define ASSISTANT_H
#include <string>
#include "PapierMagie.h"
#include "Personne.h"

class Assistant : public Personne
{
    public:
        Assistant(std::string nom);
        unsigned int getNombreCalcule();
        void appelerSpectateur();
        void prendrePapier(PapierMagie &lePapier);
        void calcule();
        virtual ~Assistant();
    private:
        unsigned int nombreCalcule;
        PapierMagie lePapier;
};

#endif // ASSISTANT_H
