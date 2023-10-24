#include <iostream>
#include <string>
using namespace std;
class Animal {
  public:
    string nom;
    int age;
    /*
    void set_value(const string nom, const int age) {
        this->nom = nom;
        this->age = age;
    }
    */
    void set_value(){
      cout << "\nEntrer le nom: -->";
      cin >> nom;
      cout << "\nEntrer l'age: -->";
      cin >> age;
    }
    void afficher_information(){
         cout << "Nom : " << nom << ", Age : " << age <<  endl;
    }
};
class Zebra : public Animal {
public:
    string lieuOrigine = "l'Afrique du Sud-Ouest";
    void afficher_information(){
         cout << "Nom : " << nom << ", Age : " << age << ", Lieu d'origine : " << lieuOrigine << endl;
    }
};
class Dolphin : public Animal {
public:
    string lieuOrigine = "Océan Atlantique";
    void afficher_information(){
         cout << "Nom : " << nom << ", Age : " << age << ", Lieu d'origine : " << lieuOrigine << endl;
    }
};
int main() {
    Zebra zebra;
    Dolphin dolphin;
    cout << "Enter les informations pour ce zebra " << endl;
    zebra.set_value();
    cout << "Enter les informations pour ce dolphin " << endl;
    dolphin.set_value();
    zebra.afficher_information();
    dolphin.afficher_information();
    return 0;
}


