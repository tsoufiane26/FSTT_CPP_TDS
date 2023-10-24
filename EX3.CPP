#include<iostream>
#include<random>
using namespace std;
void form_tab(int mytable[],int dim){
     int big=mytable[0],sml=mytable[0];
     for (int i = 0; i < dim; i++)
     {
        if(mytable[i]>big)
        big=mytable[i];
        if (mytable[i]<sml)
            sml=mytable[i];
     }
     cout<<"Le plus grand element situe au tableau est : "<<big<<endl;
     cout<<"Le plus petit element situe au tableau est : "<<sml<<endl;
}
void for_ptr(int *tabl,int dim){
int Biggest=tabl[0],Smallest=tabl[0];
int i=0;
do
    {
        if (tabl[i]>Biggest)
            Biggest=tabl[i];
        if(tabl[i]<Smallest)
            Smallest=tabl[i];
        i++;
    } while (i<dim);
    cout<<"Le plus grand element situe au tableau est : "<<Biggest<<endl;
    cout<<"Le plus petit element situe au tableau est : "<<Smallest<<endl;
}
int main(){
    int Tab[10];
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(1, 10);
   for (int i = 0; i <= 9; i++)
    {
        Tab[i]=distribution(generator);
    }
       for (int i = 0; i <= 9; i++)
    {
        cout<<"la valeur d'indice : " << i << " est : "<< Tab[i]<<endl;
    }
    form_tab(Tab,10);
    cout<<"\n"<<endl;
    for_ptr(Tab,10);
}
