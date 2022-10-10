#include <iostream>
#include <RC4.h>
#include <vector>
using namespace std;

int main()
{

    RC4 testeA(50);
    unsigned char a = 'a';
    unsigned char chiffreA = testeA.chiffrage(a);
    std::vector<unsigned char> cleA;

    testeA.initCodageDecodage();
    cleA = testeA.getCle();
    cout << "J'ai un jolie a " << testeA.chiffrage(chiffreA) << endl;
    cout << "Qui à pour clée ";
    for (unsigned int i=0; i < cleA.size()-1; i++){
        cout << cleA[i];
    }
    cout << endl;

    unsigned char superTab[cleA.size()+1];
    RC4 testeB(cleA);


    copy(cleA.begin(), cleA.end(), superTab);
    RC4 testeC(superTab, cleA.size());

    cout << "dechiffre à l'ancienne pour Monsieur Gueznec : " << testeC.chiffrage(chiffreA) << endl;

    cout << "dechiffre A mais avec cle en paramêtres : " << testeB.chiffrage(chiffreA) << endl;



    return 0;
}
