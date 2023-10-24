#include<iostream>
using namespace std;
int nbr_app;
void function_appel(){
++nbr_app;
}
int main(){
int T[15];
for (int i = 0; i <=14; i++)
{
    cout<<"Entrer une valeur:  "<<endl;
    cin>>T[i];
    if(T[i]%2==0)
    function_appel();
}
cout<<" Il y a : "<< nbr_app <<"  nombre paire au tableau"<<endl;
return 0;
}
