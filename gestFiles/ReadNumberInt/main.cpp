#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream readText("num.txt");
    int number[30];
    int i=0;
    if (readText)
    {
        do{
             readText >> number[i] ;
            if (readText)
            {
                cout << number[i] << endl ;
            }
            i++;
        } while(readText);

    } else {
        cout << "Erreur --> fichier manquant" << endl;
    }
    return 0;
}
