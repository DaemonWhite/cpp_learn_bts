#ifndef DONEEMOIS_H
#define DONEEMOIS_H
#include <string>

class DoneeMois
{
    public:
        DoneeMois(std::string mois = "", float quantite = 0);
        virtual ~DoneeMois();

        friend class Precipitation;
        std::string getMois();
        float getQuatite();

    private:
        std::string mois;
        float quantite;

};

#endif // DONEEMOIS_H
