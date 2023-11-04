#include <iostream>
#include <list>
#include <string>
using namespace std;
class donnees_utilisateur {
public:
    string First_Name;
    string Family_Name;
    int age;

    donnees_utilisateur(const string& first_name, const string& family_name, int age_plus) {
        First_Name = first_name;
        Family_Name = family_name;
        age = age_plus;
    }
};

bool tridonnees_utilisateur(const donnees_utilisateur& Perso_1, const donnees_utilisateur& Perso_2) {
    return Perso_1.Family_Name < Perso_2.Family_Name;
}

int main() {
    list<donnees_utilisateur> Person;
    bool StopInput = false;
    int Boucle = 1;
    char Entrer_data;

    do {
        string f_name, fam_name;
        int age;

        cout << "Person Number " << Boucle << ":" << endl;
        cout << "Enter your first name: ";
        cin >> f_name;
        cout << "Enter your family name: ";
        cin >> fam_name;
        cout << "Enter your age: ";
        cin >> age;

        donnees_utilisateur px(f_name, fam_name, age);
        Person.push_back(px);
        Boucle++;

        cout << "Do you want to add more people? (y/n): ";

        do {
            cin >> Entrer_data;
        } while (Entrer_data != 'y' && Entrer_data != 'Y' && Entrer_data != 'n' && Entrer_data != 'N');

        if (Entrer_data == 'n' || Entrer_data == 'N')
            StopInput = true;

    } while (!StopInput);

    cout << endl;
    Person.sort(tridonnees_utilisateur);
    for (const donnees_utilisateur& px : Person) {
    cout << "First Name: " << px.First_Name << ", Family Name: " << px.Family_Name << ", Age: " << px.age << endl;
    }
    return 0;
}