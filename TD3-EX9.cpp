#include<iostream>
using namespace std;
template <class Temp> class point
{ Temp x, y ; // coordonnees
public :
point (Temp absice, Temp ordonne) { x = absice ; y = ordonne ; }
void affiche () ;
} ;
template <class Temp> void point<Temp>::affiche ()
{ cout << "Coordonnees : " << x << " " << y << "\n" ;
}
int main(){
point <char> PNT1 (60, 65) ;
point <int> PNT2 (60, 65) ;
PNT1.affiche () ;
PNT2.affiche() ;
}
/* a. resultat de ces instructions : Donne les valeurs ASCII de 60 et 65.
point <char> p (60, 65) ;
p.affiche() ;
Il affiche Coordonnees : <  65 

b. Comment faut-il modifier la définition de notre patron pour que les instructions
précédentes affichent bien :   
Il faut changer le type de la template en int l.13
Coordonnees : 60 65 */