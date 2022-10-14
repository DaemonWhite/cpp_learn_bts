#include <iostream>
#include <RC4.h>
#include <vector>

int main()
{

    RC4 testeA(50); // teste d'une clé de 50
    unsigned char a = 'a'; //mot a
    unsigned char b = 'b';
    unsigned char chiffreA = testeA.chiffrage(a);  //chffrage de a
    unsigned char chiffreB = testeA.chiffrage(b);
    std::vector<unsigned char> cleA;// Recupère la clé de testeA

    testeA.initCodageDecodage(); // Reinitialise les donné pour le déchiffrage
    cleA = testeA.getCle();

    std::cout << "J'ai un jolie a et b :" << testeA.chiffrage(chiffreA) << " " << testeA.chiffrage(chiffreB) << std::endl;
    std::cout << "Qui à pour clée ";

    for (unsigned int i=0; i < cleA.size()-1; i++){ //affiche la clé de a
        std::cout << cleA[i];
    }
    std::cout << std::endl << std::endl;

    unsigned char superTab[cleA.size()]; // Tableau standar
    RC4 testeB(cleA);


    copy(cleA.begin(), cleA.end(), superTab); //copy de la clé en vector dans un simple tableau
    RC4 testeC(superTab, cleA.size());

    std::cout << "dechiffre A avec un tableau standar : " << testeC.chiffrage(chiffreA) << std::endl;

    std::cout << "dechiffre A mais avec cle en paramêtres : " << testeB.chiffrage(chiffreA) << std::endl;



    return 0;
}
