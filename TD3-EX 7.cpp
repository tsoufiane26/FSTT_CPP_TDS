#include <iostream>
using namespace std ;
class A{ 
int n ;
float x ;
public :
A (int p = 2){// declaration du conscructeur A, on peut l'appeler sans parametre
 n = p ;
 x = 1 ;
cout << "** construction objet A : " << n << "  " << x << "\n" ;
}
} ;
class B{
int n ;
float y ;
public :
B (float v = 0.0)//conscructeur de classe B
{ n = 1 ;
  y = v ;
cout << "** construction objet B : " << n << "  " << y <<endl ;
}
} ;
class C : public B, public A  // l'ordre d'ecriture ici joue un role principal a l'affichage 
{  
int n ;
int p ;
public :
C(int n1=1, int n2=2, int n3=3, float v=0.0) : A (n1), B(v)// initialisation des attributs
{ n = n3 ;
 p = n1+n2 ;
cout << "** construction objet C : " << n << " " << p <<"\n" ;
}
} ;
main()
{ C c1 ;         // constructeur par defaut de la classe C
                 // construction objet  de la classe B : 1 0   affichage d'objet B avant A revient a l'ordre d'heritage
                 // construction objet de la classe A : 1 1
                 // construction objet de la classe  C : 3 3 
C c2 (10, 11, 12, 5.0) ; //conscructeur parametré du classe C
                    // construction objet B : 1 5
                    // construction objet A : 10 1
                    // construction objet C : 12 21 
}