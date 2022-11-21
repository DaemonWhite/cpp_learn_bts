#ifndef SPECTATEUR_H
#define SPECTATEUR_H
#include <Personne.h>
#include <string>

class Spectateur : public Personne
{
    public:
        Spectateur(std::string nom, int age, unsigned short argent);
        virtual ~Spectateur();
        void arriverSurScene();
        void sePresenter();

    private:
        unsigned short argent;
};

#endif // SPECTATEUR_H
