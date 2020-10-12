#include <iostream>
#include "CPoint.h"
#include "CVecteur3D.h"
using namespace std;


int main() {

	CPoint pt(2, 3); //automatique
	CPoint* pt2 = new CPoint(1.1,2);//dynamique

	cout << "Affichage du point 1 :" << endl;
	affiche(pt);

	cout << endl << "Affichage du point 2 :" << endl;
	affiche(*pt2);

	delete pt2;

	CVecteur3D v1(1, 2, 3);
	CVecteur3D v2(2, 3, 4);

	if (coincide(v1, v2)) {
		cout << endl << "Les vecteurs coincident." << endl;
	}
	else {
		cout << endl << "Les vecteurs ne coincident pas." << endl;
	}

	return 0;
}