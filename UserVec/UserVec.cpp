// User1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Vector3D.h"
using namespace Geom;
using namespace std;

int main()
{

    Vector3D v(1, 2, 3);
    Vector3D v1(4, 5, 6);
    Vector3D* sumVect = new Vector3D(0, 0, 0);
    Vector3D* subVect = new Vector3D(0, 0, 0);
    Vector3D* mulVect = new Vector3D(0, 0, 0);
    cout << endl << " \t\t <<Vector>> : 1 \n" << endl;
    v.Print();
    // using operator : [] , en mode ecriture : 
    v[0] = 8;
    cout << "\n Apres l'utilisation de l'operateur : [] en mode Ecriture : " << endl;
    v.Print();
    cout << "\n Apres l'utilisation de l'operateur : [] en mode Lecture : " << endl;
    cout << " \n Vector(x,y,z) : (x) = " << v[0] << endl;
    cout << endl << " \t\t <<Vector>> : 2 \n" << endl;
    v1.Print();
    // using operator : +
    cout << endl << "Apres la somme des deux vecteurs : \n\n";
    *sumVect = (v + v1);
    sumVect->Print();
    // using operator : - 
    cout << endl << "Apres la soustraction des deux vecteurs : \n\n";
    *subVect = (v - v1);
    subVect->Print();
    // using operator : *
    cout << endl << "Apres le produit scalaire des deux vecteurs : \n\n";
    *mulVect = v * v1;
    mulVect->Print();
    // using methods : 
    // multiplication : 
    cout << endl << "Apres la multiplication d'un vecteur fois un nomber reel : \n\n";
    v.MultipParNombre(3);
    v.Print();
    // division : 
    cout << endl << "Apres la division d'un vecteur sur un nomber reel : " << endl;
    /*v.DivisionParNombre(0);*/
    v.DivisionParNombre(2);
    v.Print();




    system("pause>0");

}

