#include <iostream>
#include <string>
using namespace std;
int main()
{
    string c_date_heurs;
    c_date_heurs = "010920091123";

    if (c_date_heurs.length() != 12)
    {
        cout << "chaîne de caractere est invalide. Assurez-vous qu'il s'agit de 12 caractères." << endl;
        return 1;
    }
    cout << "Jour : " << c_date_heurs.substr(0, 2) << endl;//substr  pour extraire et enregistrer les caractères dans une chaîne selon la position
    cout << "Mois : " << c_date_heurs.substr(2, 2) << endl;
    cout << "Annee : " << c_date_heurs.substr(4, 4) << endl;
    cout << "Heure : " << c_date_heurs.substr(8, 2) << ":" << c_date_heurs.substr(10, 2) << endl;
    return 0;
}
