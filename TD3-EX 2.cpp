#include<iostream>
#include<list>
#include<iterator>

using namespace std;

void Afficher_liste(list<int> g){
    list<int>::iterator it;
    for(it = g.begin();it!=g.end();++it)
    cout<<"  "<<*it;
    cout<<"  "<<endl;
}
void TriBull(list<int>& Input){     
    int Check;
    do{
        Check=0;
        for(list<int>::iterator Actual=Input.begin();Actual!=prev(Input.end());++Actual){ //Actual!=Input.end() respensable a  commencer par les elements les plus grands aux plus petits
            list<int>::iterator Next_element = next(Actual);
            if (*Next_element>*Actual){
                swap(*Next_element,*Actual);
                Check++;
            }
        }
    }while( Check !=0);
}

void triInsertion(list<int>& Input){     
    for(list<int>::iterator Actual=next(Input.begin());Actual!=prev(Input.end());++Actual){
        int here = *Actual;
        list<int>::iterator before = Actual;
        while(before != Input.begin() && *prev(before) < here){
            *before = *prev(before);
            --before;
        };
    *before = here;
    };
}

void triSelection(list<int>& Input){  
    for(list<int>::iterator Actual=Input.begin();Actual!=Input.end();Actual++){
        list<int>::iterator  min_value = Actual;
        for(list<int>::iterator next_value = next(Actual);next_value!=Input.end();next_value++ ){
            if(*next_value < *min_value)
            min_value=next_value;
        }
        swap(*min_value,*Actual);
    }
}

int main(){
    int num,Choix;
    list<int> Input; 
    cout << "Enter nombres a remplir : ";
    //ajouter number dans la list 
    while (num != -1) { // donner -1 bloque la boucle
        cin>>num;
        Input.push_back(num);
    };
    cout << "Choisissez un algorithme de tri : " << endl;
    cout << "1. Tri à bulles" << endl;
    cout << "2. Tri par sélection" << endl;
    cout << "3. Tri par insertion" << endl;
    cin >> Choix;
    switch (Choix) {
        case 1:TriBull(Input);
        break;;
        case 2:triSelection(Input);
        break;;
        case 3:triInsertion(Input);
        break;;
        default:cout<<"choise invalide please repeat again"<<endl;
    }

    // Affichage de la liste triée
    cout << "Input triée : "<<endl;
    Afficher_liste(Input);

    return 0;
}


