#include <iostream>
#include <RC4.h>
#include <vector>

int main()
{

    RC4 testeA(50); // teste d'une clé de 50
    const unsigned char a = 'a'; //mot a
    const unsigned char b = 'b';
    const unsigned char chiffreA = testeA.chiffrage(a);  //chffrage de a
    const unsigned char chiffreB = testeA.chiffrage(b);
    std::vector<unsigned char> cleA;// Recupère la clé de testeA

    testeA.initCodageDecodage(); // Reinitialise les donné pour le déchiffrage
    cleA = testeA.getCle();

   std::cout << "Objetif chiffre a et b puis dechifrer avec toute les methode" << std::endl << std::endl;

    std::cout << "a et b en vertion chiffre : " << chiffreA << " " << chiffreB << std::endl;
    std::cout << "J'ai un jolie a et b :" << testeA.chiffrage(chiffreA) << " " << testeA.chiffrage(chiffreB) << std::endl;
    std::cout << "Taille cle : " << testeA.getTailleCle() << std::endl << std::endl;
    std::cout << "Qui a pour clee ";

    for (unsigned int i=0; i < cleA.size()-1; i++){ //affiche la clé de a
        std::cout << cleA[i];
    }

    std::cout << std::endl << "-------------------------" << std::endl << std::endl;

    unsigned char superTab[cleA.size()]; // Tableau standar
    RC4 testeB(cleA);

    copy(cleA.begin(), cleA.end(), superTab); //copy de la clé en vector dans un simple tableau
    RC4 testeC(superTab, cleA.size());

    std::cout << "dechiffre A et B avec un tableau standar : " << testeC.chiffrage(chiffreA) << " " <<testeC.chiffrage(chiffreB) << std::endl;
    std::cout << "Taille cle : " << testeC.getTailleCle() << std::endl << std::endl;

    std::cout << "dechiffre A mais avec un vecteur : " << testeB.chiffrage(chiffreA) << " " <<testeB.chiffrage(chiffreB) << std::endl;
    std::cout << "Taille cle : " << testeB.getTailleCle() << std::endl << std::endl;

    testeB.initCodageDecodage();
    std::cout << "Si on fais dans le sense inverse sa ne marche point" << std::endl << std::endl;
    std::cout << "Mauvais dechifrement de a et b : " << testeB.chiffrage(chiffreB) << " " << testeB.chiffrage(chiffreA) << std::endl;

    return 0;
}
