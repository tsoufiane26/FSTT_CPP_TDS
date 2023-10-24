#include<iostream>
using namespace std;
int func_domulti(int a){
if (a%2==0)
{
    cout<< "Le nombre donné est paire ( multiple de 2 )"<<endl;
}
else
cout <<"Le nombre donné est impaire ! "<<endl;
return a%2==0?1:0;
}
int func_trimulti(int a){
    if(a%3==0){
        cout<<"Le nombre donné est multiple de 3 "<<endl;
    }
    if(a%6==0){
        cout<<"Le nombre donné est divisible  par 6 "<<endl;
    }
    return a%3==0?1:0;
}
int main(){
    int x;
    cout<<"Entrer un nombre : "<<endl;
    cin>>x;
    func_domulti(x);
    func_trimulti(x);
    return 0;
}
