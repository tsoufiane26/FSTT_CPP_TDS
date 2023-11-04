#include<iostream>
#include<set>
#include<iterator>

using namespace std;

bool Recherche(set<int>& container,int& searched_value){
    return container.find(searched_value)!=container.end();
};
bool Recherche_2(set<int>::iterator& container_1, set<int>::iterator& container_2, int& searched_value) {
    for( ; container_1 != container_2; ++container_1) {
        if (*container_1 == searched_value) {
            return true;}
    }return false;
};
template <class iterator ,class Y > 
bool Recherche_default(iterator& debut, iterator& fin, Y& searched_value){
    for( ; debut != fin; ++debut) {
        if (*debut == searched_value) {
            return true;}
    }return false;
};
int main(){
    set<int> Container;
    for(int i=0;i < 100;i++){
        Container.insert(i);
    }
    Container.erase(30); 
    int Input;
    cout<<" Entrer une valeur vous voulez cherchez : ";
    cin>>Input;
    if(Recherche(Container,Input)){
        cout<<"la valeur cherche existe"<<endl;
    }else{
        cout<<"la valeur cherche n'existe pas "<<endl;
    }
    set<int>::iterator entry=Container.begin(), exit=Container.end();
    cout<<" Entrer une valeur vous voulez cherchez: ";
    cin>>Input;
    if(Recherche_2(entry,exit,Input)){
        cout<<endl<<"La valeur existe"<<endl;
    }else{
        cout<<"la valeur cherche n'existe pas"<<endl; /*still testing with 30*/
    }
    cout<<"donner la valeur a chercher : ";
    cin>>Input;
    if(Recherche_default(entry,exit,Input)){ /*Testing default template*/
        cout<<endl<<"la valeur existe"<<endl;
    }else{
        cout<<"la valeur n'existe pas "<<endl;
    }
}