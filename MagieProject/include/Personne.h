#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>

class Personne
{
    protected:
        std::string nom;
        int age;

        static const int AGE_MAXI;
        static const int AGE_MINI = 1;
        Personne(std::string nom, int age = AGE_DEFAUT);
    private:
        static const int AGE_DEFAUT = -1;

    public:
        int getAge();
        bool setAge(int age);
        std::string getNom();
        void sePresenter();

        virtual ~Personne();

};

#endif // PERSONNE_H
