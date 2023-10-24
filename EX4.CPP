#include<iostream>
using namespace std;
int main(){
    int dim;
    cout<< "quelle la taile du tableau que vous voulez"<<endl;
    cin>>dim;
int *tabl = new int[dim];
for (int i = 0; i < dim; i++)
{
    cout<<"Entrer la valeur d'indice : "<<i<<" au tableau : "<<endl;
    cin>>tabl[i];
}
int *do_tab=new int(dim);
for (int i = 0; i < dim; i++)
{
    do_tab[i]=tabl[i]*tabl[i];
}
for (int i = 0; i < dim; i++)//affichage du carré des nombres entrés
{
    cout<<" le carré des nombres que vous avez entré donnés par : "<<do_tab[i]<<endl;
}
// on peut pas afficher les carres sans avoir le premier tableau
delete tabl;//liberation de l'espace  du 2eme tableau alloué dynamiquement
delete do_tab;//liberation de l'espace  du 2eme tableau alloué dynamiquement


return 0;
}