#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream readText("bashrc.txt");
    char text;

    if (readText)
    {
        do{
            readText.get(text);
            if (readText)
            {
                cout << text;
            }
        } while(readText);

    } else {
        cout << "Erreur --> fichier manquant" << endl;
    }
    return 0;
}
