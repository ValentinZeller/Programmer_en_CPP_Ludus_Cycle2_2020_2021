#include <iostream>
#include "CPoint.h"
#include "CVecteur3D_72.h"

using namespace std;


int main() {
	CVecteur3D_72 v1(1, 2, 3);
	CVecteur3D_72 v2(4, 5, 6);
	
	cout << "Affichage du vecteur 1 :" << endl;
	v1.affiche();

	cout << "Affichage du vecteur 2 :" << endl;
	v2.affiche();

	cout << endl << "La somme des 2 vecteurs donne : " << endl;
	v1.somme(v2).affiche();
	
	cout << endl << "Le produit scalaire des 2 vecteurs donne : " << v1.prodScalaire(v2) << endl;
	
	cout << "Nombre de points : " << CPoint::cpt_val() << endl;

	return 0;
}