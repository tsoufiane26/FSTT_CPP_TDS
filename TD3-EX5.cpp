#include <iostream>
using namespace std;
class Test{
public:
static int Table[] ;
public :
static int division(int indice, int diviseur){
    if(diviseur == 0){
    throw " La division par 0 est interdit !!!";
    }
return Table[indice]/diviseur;
}
};
int Test::Table[] = {93, 23, 2, 13, -54, 57, 81,5 , 1001, 63} ;
int main() {
int x, y;
bool Passing_Test=false;
do{
cout << "Entrez l'indice de l'entier pour diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;
try{
    int test=Test::division( x, y );
        if( x <=10 ){
    cout << "la resultat de la division : " << test << endl;
    Passing_Test=true;
    }
    else { throw "L'indice est invalide,s'il vous plait on demande indice entre 0 et 10.";}
}
catch(const char* errorMessage){
    cout<<errorMessage<<endl;
}
}while(!Passing_Test);
return 0; 
}