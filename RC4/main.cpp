#include <iostream>
#include <RC4.h>

using namespace std;

int main()
{

    RC4 testeA(50);
    unsigned char a = 'a';
    unsigned char ret = testeA.chiffrage(a);
    testeA.initCodageDecodage();
    ret = testeA.chiffrage(ret);
    cout << "J'ai un jolie a" << ret << endl;
    return 0;
}
