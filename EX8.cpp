#include <iostream>
using namespace std;

class Complex_Number {
  public:
    float re;
    float im;
    Complex_Number(float re=0, float im=0) {
      this->re = re;
      this->im = im;
    }
    void set_theNumber() {
      cout << "\nEntrer la partie reel: -->";
      cin >> re;
      cout << "\nEntrer la partie imaginaire: -->";
      cin >> im;
    }
};

int main() {
  Complex_Number c1;
  Complex_Number c2;
  cout << "\nPour le premier nombre complexe : ";
  c1.set_theNumber();

  cout << "\nPour le deuxieme nombre complexe : ";
  c2.set_theNumber();

  while (true) {
        int choix;
             cout << "\nMenu d'opérations :"
                  << "\n1. Égalité"
                  << "\n2. Addition"
                  << "\n3. Soustraction"
                  << "\n4. Multiplication"
                  << "\n5. Division"
                  << "\n6. Quitter"
                  << "\nChoisissez une opération (1/2/3/4/5/6) : ";
        cin >> choix;

        double re_resultat;
        double im_resultat;

        switch (choix) {
            case 1:
                if (c1.re == c2.re && c1.im == c1.im) {//C'est aussi le syntaxe de la fonction égalite
                    cout << "Ces nombres complexes sont égaux." ;
                } else {
                    cout << "Ces nombres complexes sont différents." ;
                }
                break;
            case 2: {//Syntaxe de la fonction addition
                re_resultat = c1.re + c2.re;
                im_resultat = c1.im + c2.im;
                cout << "La partie réel du resultat  est : " << re_resultat << " et la partie imaginaire  : " << im_resultat << endl;
                break;
            }
            case 3: {//syntaxe de la fonction soustraction
                re_resultat = c1.re - c2.re;
                im_resultat = c1.im - c2.im;
                cout << "La partie réel du resultat est : " << re_resultat << " et la partie imaginaire : " << im_resultat << endl;
                break;
            }
            case 4: {//syntaxe de la fonction multiplication
                re_resultat = c1.re*c2.re -c1.im*c2.im;
                im_resultat = c1.re*c2.im + c1.im*c2.re;
                cout << "La partie réel du resultat est : " << re_resultat << " et la partie imaginaire : " << im_resultat << endl;
                break;
            }
            case 5: {//syntaxe de la fonction division
                if (c2.re + c2.im != 0) {
                   re_resultat = (c1.re*c2.re + c1.im*c2.im)/(c2.im*c2.im + c2.re*c2.re);
                    im_resultat = (-c1.re*c2.im + c1.im*c2.re)/(c2.im*c2.im + c2.re*c2.re);
                    cout << "La partie réel du resultat est : " << re_resultat << " et la partie imaginaire : " << im_resultat << endl;
                    break;
                }else {
                cout << "ERROR division sur 0 !!!"<< endl;
                    }

            }
            case 6://Quitter switch
                return 0;
            default:
                cout << "Choix invalide. Veuillez sélectionner une option valide." << endl;
        }
    }
    return 0;
}


