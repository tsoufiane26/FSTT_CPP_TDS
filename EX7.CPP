#include <iostream>
using namespace std;

int main() {
    int Table[10];
    for (int i = 0; i < 10; i++) {
        cout << "Entrez le variable d'indice : " << i + 1 << endl;
        cin >> Table[i];
    }
    //applique de la méthode demandée
    int n = sizeof(Table) / sizeof(Table[0]);//calcule du nombre des elements dans le tableau 
    int tompr;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (Table[j] > Table[j + 1]) {
                tompr= Table[j];
                Table[j] = Table[j + 1];
                Table[j + 1] = tompr;
            }
        }
    }

    // Affichage du tableau trié
    cout << "Le tableau trié par ordre croissant est : " << endl;
    for (int i = 0; i < 10; i++) {
        cout << Table[i] <<"\n";
    }
    cout << endl;

    return 0;
}