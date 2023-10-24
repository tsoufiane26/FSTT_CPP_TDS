#include<iostream>
using namespace std;
int main(){
int x=46;
int &ref_x=x;
int *ptr=&x;
cout<<"la valeur donne par defaut est :  "<<x<<" et son adresse donné en hexadecimal par : "<<ptr<<endl;
cout<<"la reference donne par : "<< ref_x<< " son adresse est :  "<< &ref_x<<endl;
cout <<"le pointeur pointe sur "<<*ptr<<" son adresse est : "<<&ptr<<endl;
    return 0;
}