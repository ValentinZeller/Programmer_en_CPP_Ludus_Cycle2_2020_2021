#include"CPoint.h"
#include <iostream>

using namespace std;


int main() {

	//Instance de classe CPoint
	CPoint pt; //appel du constructeur sans parametres

	cout << "Abscisse du point : " << pt.abscisse() << endl;
	cout << "Ordonnee du point : " << pt.ordonnee() << endl;
	pt.deplacePoint(12, 3);
	cout << "Apres deplacement : " << endl;
	cout << "Abscisse du point : " << pt.abscisse() << endl;
	cout << "Ordonnee du point : " << pt.ordonnee() << endl;


	return 0;
}