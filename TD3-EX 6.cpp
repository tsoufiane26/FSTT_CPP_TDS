#include<iostream>

using namespace std;

class vect{
 protected : // en prévision d'une éventuelle classe dérivée
int Num ; 
int * adr ; // adresse zone dynamique contenant les éléments
public :
vect (int) ; 
~vect () ; // destructeur du classe vect
int &operator[](int index){
    if (index >= 0 && index < Num){   /* Need to verify this part (Error without it l13 to l17)*/
        return adr[index];
    }
        throw "indice introuvable";
    }   
} ;
vect::~vect(){ delete[]adr;}    /*Giving instructions to the destructor*/
vect::vect(int n) : Num(n), adr(new int[n]) {}    /*Giving instructions to the constructor*/

class VecTeur : public vect { 
    public:
    VecTeur(int Input) : vect(Input) {} //Giving a value to the new constructor
    VecTeur(const VecTeur& sizing):vect(sizing.Num){    /* Copy of the constructor */
        for(int i = 0 ; i < sizing.Num ; i++){
            adr[i]=sizing.adr[i];
        }
    }
    VecTeur& operator=(const VecTeur& sizing){
        if(Num == sizing.Num){  /* if the element already exist end the task*/
            return *this;
        }
        if(Num != sizing.Num){ /* entering new element*/
            delete[]adr;    /* freeing the pointer*/
            Num = sizing.Num;   
            adr = new int[Num];   /* allocution dynamique*/
        }
        for(int i = 0; i < sizing.Num ; i++){ /* copying of the vector  */
            adr[i]=sizing.adr[i];
        }
        return *this;
    }
    int size() const {  /* printing the new size of the VecTeur*/
        return Num;
    }
};
int main() {
    VecTeur Premier_vector(5);  
    Premier_vector[0] = 3;
    Premier_vector[1] = -1;
    Premier_vector[2] = 7;
    Premier_vector[3] = 23;
    Premier_vector[4] = 11;
    VecTeur Second_Vector = Premier_vector;
    cout << "Size of Second_Vector: " << Second_Vector.size() << endl; 
    for (int i = 0; i < Second_Vector.size(); i++) {    /*printing the copy vector*/
        cout << Second_Vector[i] << " ";
    }
    cout<<endl;
    for (int i = 0; i < Second_Vector.size(); i++) {    /*printing the first vector*/
        cout << Premier_vector[i] << " ";
    }
    Premier_vector[0] = 99;
    cout<<endl;
    for (int i = 0; i < Second_Vector.size(); i++) {    /*printing the first vector with the new value*/
        cout << Premier_vector[i] << " ";
    }
        cout<<endl;
    for (int i = 0; i < Second_Vector.size(); i++) {    /*printing the second vector to check if we still have same values*/
        cout << Second_Vector[i] << " ";
    }
    return 0;
}