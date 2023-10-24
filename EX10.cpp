#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string nom;
    string prenom;
    string dateNaissance;

public:
    Person(string nom, string prenom, string dateNaissance)
        : nom(nom), prenom(prenom), dateNaissance(dateNaissance) {}

    virtual void Afficher() {
        cout << "Nom: " << nom << endl;
        cout << "Prénom: " << prenom << endl;
        cout << "Date de Naissance: " << dateNaissance << endl;
    }
};

class Employee : public Person {
private:
    long int  salaire;
public:
    Employee(string nom, string prenom, string dateNaissance, float salaire)
        : Person(nom, prenom, dateNaissance), salaire(salaire) {}
    void Afficher() override {
        Person::Afficher();
        cout << "Salaire: " << salaire << endl;
    }
};

class Manager : public Employee {
private:
    string service;

public:
    Manager(string nom, string prenom, string dateNaissance, float salaire, string service)
        : Employee(nom, prenom, dateNaissance, salaire), service(service) {}

    void Afficher() override {
        Employee::Afficher();
        cout << "Service: " << service << endl;
    }
};

class Director : public Manager {
private:
    string societe;

public:
    Director(string nom, string prenom, string dateNaissance, float salaire, string service, string societe)
        : Manager(nom, prenom, dateNaissance, salaire, service), societe(societe) {}

    void Afficher() override {
        Manager::Afficher();
        cout << "Société: " << societe << endl;
    }
};

int main() {
    Person personne("Ahmed", "Anzari", "15/07/1990");
    personne.Afficher();
    cout<<"-----------------------------"<<endl;
    Employee employe("Mohamed", "Younsi", "10/09/1985",150378);
    employe.Afficher();
    cout<<"-----------------------------"<<endl;
    Manager chef("Jawad", "Daoudi", "25/03/1999", 128746, "Développement");
    chef.Afficher();
    cout<<"-----------------------------"<<endl;
    Director directeur("labas", "hmd", "08/07/1975", 156348710, "Direction Générale","MBDIA");
    directeur.Afficher();
    return 0;
}
