#include <iostream>
#include "PapierMagie.h"
#include "Spectateur.h"

int main()
{
    #ifdef WIN32
        system("CHCP 65001 > nul");
    #elif __linux__
        std::cout << "moise";
    #endif // WIN32

    PapierMagie lePapier;
    Spectateur dingo("Dingo",22,56);
    dingo.arriverSurScene();
    dingo.sePresenter();
    dingo.remplirPapier(lePapier);
    std::cout << lePapier();




    #ifdef WIN32
        system("CHCP 850 > nul");
    #elif __linux__
        std::cout << "moise";
    #endif // WIN32


    return 0;
}
