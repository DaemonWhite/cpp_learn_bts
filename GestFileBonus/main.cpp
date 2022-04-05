#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char Source[30], Destination[30];

    ifstream fileSource;
    ofstream fileDestination;

    char tampon[512];

    long sizeFile, copy;
    long sizeTable= 512;

    cout << "Saisire le chemin du fichier à copier" << endl;
    cin >> Source;
    cout << "Saisir le chemin du fichier destinations" << endl;
    cin >> Destination;

    fileSource.open(Source);
    fileDestination.open(Destination);

    if(!fileSource)
    {
        cout << "Erreur 1 --> Le fichier source n'existe pas" << endl;
        exit(1);
    }


    if(!fileDestination)
    {
        cout << "Erreur 2 --> Le chemin de destination n'existe pas" << endl;
        exit(2);
    }

    fileSource.seekg(0, ios::end);
    sizeFile = fileSource.tellg();
    fileSource.seekg(0, ios::beg);

    do
    {
        copy = fileSource.tellg();
        cout << "Size : " << sizeFile << " Copy : " << copy << endl;


        if (sizeFile<=512)
        {
            sizeTable = sizeFile;
        }
        sizeFile = sizeFile - 512;

        if (copy !=1){
            fileSource.read(tampon, sizeTable);
            fileDestination.write(tampon, sizeTable);
        }


    } while (copy != -1);




    return 0;
}
