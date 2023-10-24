#include <iostream>
#include "EX13.h"
using namespace std;
int main() {
    Point p(0, 3);
    cout << "Avant le deplacement : " << endl;
    p.affiche();
    p.deplace(1.0, -1.0);
    cout << "Après le deplacement : " << endl;
    p.affiche();
    return 0;
}
