#include<iostream>
using namespace std;
void incrementer_ptr(int *ptr){
++(*ptr);
cout<<"la nouvelle valeur apres incrementation  egat a : "<<*ptr<<endl;
}
void permuter_ptr( int *pp,int *mm){
    cout<<"avant permutation a = "<<*pp<<" et b = "<<*mm<<endl; 
    (*pp)+=(*mm);
     (*mm)=(*pp)-(*mm);
     (*pp)-=(*mm);
    cout<<"apres permutation a = "<<*pp<<" et b = "<<*mm<<endl; 
}
void incrementer_ref(int &v){
    v++;
   cout<<"la nouvelle valeur apres incrementation  egat a : "<<v<<endl;

}
void permuter_ref(int &t,int &p){
    cout<<"avant permutation a = "<<t<<" et b = "<<p<<endl;
    t=t^p;
    p=t^p;
    t=t^p;
     cout<<"apres permutation a = "<<t<<" et b = "<<p<<endl; 
}
int main(){
int x,a,b;
cout<<"INCREMENTATION AVEC LES POINTEURS"<<endl;
cout<<"Entrer un valeur a incrementer "<<endl;
cin>>x;
incrementer_ptr(&x);
cout<<"Entrer deux nombre a permuter"<<endl;
cin>>a>>b;
permuter_ptr(&a,&b);
cout<<"INCREMENTATION AVEC LES references"<<endl;
cout<<"Entrer un valeur a incrementer "<<endl;
cin>>x;
incrementer_ref(x);
cout<<"Entrer deux nombre a permuter"<<endl;
cin>>a>>b;
permuter_ref(a,b);
    return 0;
}