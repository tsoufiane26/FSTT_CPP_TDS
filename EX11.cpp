#include <iostream>
#include <cmath> //bibliotheque pour la racine carre
using namespace std;
class Vecteur3d
{
public:
    float x, y, z;
    Vecteur3d(float x =0,float y =0,float z =0) : x(x), y(y), z(z) {}
    void afficher() const
    {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
    Vecteur3d somme(const Vecteur3d &autreVecteur3d) const
    {
        return Vecteur3d(x +autreVecteur3d.x, y+autreVecteur3d.y, z+autreVecteur3d.z);
    }

    float produitScalaire(const Vecteur3d &autreVecteur3d) const
    {
        return x*autreVecteur3d.x + y*autreVecteur3d.y + z*autreVecteur3d.z;
    }

    bool coincide(const Vecteur3d &autreVecteur3d) const
    {
        return (x == autreVecteur3d.x && y == autreVecteur3d.y && z == autreVecteur3d.z);
    }
    float norme() const
    {
        return sqrt(pow(x,2)+pow(y,2)+pow(z,2));
    }

    // Fonction pour obtenir le vecteur avec la plus grande norme parmi deux
    Vecteur3d normax(Vecteur3d &v1, Vecteur3d &v2)
    {
        if (v1.norme() >= v2.norme())
        {
            return Vecteur3d(v1.x, v1.y, v1.z);
        }
        else
        {
            return Vecteur3d(v2.x, v2.y, v2.z);
        }
    }
};

int main()
{
    Vecteur3d v1(4,-1,0);
    Vecteur3d v2(-3,5,6);
    cout<<"les coordonnees du 1 er vecteur donnees par : "<<endl;
    v1.afficher();
    cout<<"les coordonnees du 2 eme vecteur donnees par : "<<endl;
    v2.afficher();
    Vecteur3d v3 = v1.somme(v2);
    cout<<"les coordonnees du vercteur'SOMME' donnees par : "<<endl;
    v3.afficher();
    float produit = v1.produitScalaire(v2);
    cout << "Le Produit scalaire  egal : " << produit << endl;
    if (v1.coincide(v2))
        cout << "Les vecteurs coïncident." << endl;
    else
        cout << "Les vecteurs ne coïncident pas." << endl;
    float normeV1 = v1.norme();
    float normeV2 = v2.norme();
    cout << "Norme de v1 : " << normeV1 << endl;
    cout << "Norme de v2 : " << normeV2 << endl;
    Vecteur3d vecteurMax = v1.normax(v1, v2);
    cout << "Le vecteur avec la plus grande norme est : ";
    vecteurMax.afficher();
    return 0;
}
