#include <iostream>
using namespace std;
class Fichier
{
private:
    char *P;
    int longueur;

public:
    Fichier(int size)
    {
        longueur = size;
        P = new char[size];
    }
    ~Fichier()
    {
        delete[] P;
    }
    void RempliR()
    {
        char alphabet[26];
        for (int i = 0; i < 26; i++)
        {
            alphabet[i] = 'A' + i;
        }

        for (int i = 0; i < longueur; i++)
        {
            P[i] = alphabet[i];
        }
    }

    void Affiche()
    {
        for (int i = 0; i < longueur; i++)
        {
            cout << P[i];
        }
        cout << endl;
    }
};

int main()
{
    Fichier monFichier(11);// on crée de l'objet fichier 
    monFichier.RempliR();
    monFichier.Affiche();
    return 0;
}
