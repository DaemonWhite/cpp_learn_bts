#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream readText("bashrc.txt");
    char text[101];

    if (readText)
    {
        do{
            readText.getline(text, 100, '\n');
            if (readText)
            {
                cout << text << endl;
            }
        } while(readText);

    } else {
        cout << "Erreur --> fichier manquant" << endl;
    }
    return 0;
}
