#include <iostream>
#include "CPoint.h"
using namespace std;


int main() {

	CPoint pt(2, 3); //automatique
	CPoint* pt2 = new CPoint(1.1,2);//dynamique

	cout << "Affichage du point 1 :" << endl;
	affiche(pt);

	cout << endl << "Affichage du point 2 :" << endl;
	affiche(*pt2);

	delete pt2;

	return 0;
}