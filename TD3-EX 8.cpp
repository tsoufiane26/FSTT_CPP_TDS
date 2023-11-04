#include<iostream>
#include<math.h>
using namespace std;
template < class temp > temp division(temp& x) {
    return pow(x,2);
}
int main(){
    float Entre = 13.72;            
    cout<<"valeur du resultat est : "<<division(Entre)<<endl;
    Entre = static_cast<int>(Entre);
    Entre = 6;
    cout<<"valeur du resultat est : "<<division(Entre)<<endl;
    Entre = static_cast<char>(Entre);
    Entre = 11;
    cout<<"valeur du resultat est : "<<division(Entre)<<endl;
    return 0;
}