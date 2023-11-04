#include<iostream>
#include<math.h>

class Complex_Number{ 
    public:     
        float Reel;
        float Imaginary;
        Complex_Number(){};//conscructeur par defaut
        Complex_Number(int Real,int Imaginaire){//conscructeur personalisé
            Reel=Real;
            Imaginary=Imaginaire;
        }
        Complex_Number operator+(Complex_Number& Deuxieme){
            Complex_Number total;
            total.Reel=Reel+Deuxieme.Reel;
            total.Imaginary=Imaginary+Deuxieme.Imaginary;
            return total;
        }
        Complex_Number operator-(Complex_Number& Deuxieme){
        Complex_Number total;
        total.Reel=Reel-Deuxieme.Reel;
        total.Imaginary=Imaginary-Deuxieme.Imaginary;
        return total;
        }
        Complex_Number operator/(Complex_Number& Deuxieme){
        Complex_Number Part1,Part2,total;
         if((Reel == Deuxieme.Reel) && (((Deuxieme.Imaginary+Imaginary) == 0) || (Deuxieme.Imaginary+Imaginary) == Imaginary*2) ){
            Part1.Reel=(Reel*Deuxieme.Reel)+(pow(Deuxieme.Imaginary,2));
        }
        else{
            Part1.Reel=(Reel*Deuxieme.Reel)+(Imaginary*Deuxieme.Imaginary);
            Part1.Imaginary=((Reel*Deuxieme.Imaginary)*-1)+(Imaginary*Deuxieme.Reel);
        }
        if((Reel == Deuxieme.Reel) && ((((Deuxieme.Imaginary*-1)+Imaginary) == 0) || ((Deuxieme.Imaginary*-1)+Imaginary) == Imaginary*2) ){
            Part2.Reel=(Reel*Deuxieme.Reel)+((Imaginary*Deuxieme.Imaginary)*-1);
        }
        Part2.Reel=(Reel*Deuxieme.Reel)+(pow(Deuxieme.Imaginary,2));
        total.Reel=Part1.Reel/Part2.Reel;
        total.Imaginary=Part1.Imaginary/Part2.Reel;
        return total;
        }
        bool operator==(Complex_Number& Deuxieme){
            return ((Reel==Deuxieme.Reel) && (Imaginary==Deuxieme.Imaginary));
        }
        Complex_Number operator*(Complex_Number& Deuxieme){         //cette methode pose des probleme de confusion 
        Complex_Number total;                                      
        if((Reel == Deuxieme.Reel) && (((Deuxieme.Imaginary+Imaginary) == 0) || (Deuxieme.Imaginary+Imaginary) == Imaginary*2) ){
            total.Reel=(Reel*Deuxieme.Reel)+((Imaginary*Deuxieme.Imaginary)*-1);
        }
        else{
            total.Reel=(Reel*Deuxieme.Reel)+(Imaginary*Deuxieme.Imaginary*-1);
            total.Imaginary=(Reel*Deuxieme.Imaginary)+(Imaginary*Deuxieme.Reel);
        }
        return total;
    }
        void display(){
            if(Imaginary>0)
            std::cout<<"La valeur : "<<Reel<<" + "<<Imaginary<<" i."<<std::endl;
            else std::cout<<"La valeur : "<<Reel<<" "<<Imaginary<<" i."<<std::endl;
        }
};
    void equal(int& check){
        if(check==1)
            std::cout<<"Les deux nombres complexes sont égaux"<<std::endl;
        else{ std::cout<<"Il n'y a pas d'égalité."<<std::endl;}
    };


int main(){
    int choice,check;
    Complex_Number First_Number,Deuxieme_Number,Total;
    std::cout<<"Donner deux nombre complexe z :"<<std::endl<<"(Premier Nombre complexe) Partie reel : ";
    std::cin>>(First_Number.Reel);
    std::cout<<"Partie Imaginaire : ";
    std::cin>>(First_Number.Imaginary);
    std::cout<<"(Deuxieme nombre Imaginaire) Partie reel:";
    std::cin>>(Deuxieme_Number.Reel);
    std::cout<<"Partie Imaginaire : ";
    std::cin>>(Deuxieme_Number.Imaginary);
    std::cout<<"Tapez 1 pour l'addition, 2 pour la soustraction, 3 pour la multiplication, 4 pour la division, 5 pour l'égalité (0 pour finir le programme)"<<std::endl;
    do{
        std::cin>>choice;
        switch(choice){
            case 1:{Total = First_Number + Deuxieme_Number;    
                    Total.display();};continue;
            case 2:{Total = First_Number - Deuxieme_Number;    
                    Total.display();};continue;
            case 3:{Total = First_Number * Deuxieme_Number;    
                    Total.display();};continue;
            case 4:{Total = First_Number / Deuxieme_Number;    
                    Total.display();};continue;
            case 5:{check = First_Number == Deuxieme_Number;    
                        equal(check);};continue;
            default:continue;
        }
    }while(choice !=0);
    std::cout<<"MERCI BEAUCOUP"<<std::endl;
    return 0;
}