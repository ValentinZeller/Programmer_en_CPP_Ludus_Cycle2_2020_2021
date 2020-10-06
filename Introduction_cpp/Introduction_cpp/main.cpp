#include"CPoint.h"
#include <iostream>

using namespace std;


int main() {

	//Instance de classe CPoint
	CPoint pt; //appel du constructeur sans parametres

	cout << "Abscisse du point : " << pt.abscisse() << endl;
	cout << "Ordonnee du point : " << pt.ordonnee() << endl;

	pt.deplacePoint(1,1);
	cout << " - Apres deplacement : " << endl;
	cout << "Abscisse du point : " << pt.abscisse() << endl;
	cout << "Ordonnee du point : " << pt.ordonnee() << endl;

	pt.homothetie(2);
	cout << " - Apres homothetie : " << endl;
	cout << "Abscisse du point : " << pt.abscisse() << endl;
	cout << "Ordonnee du point : " << pt.ordonnee() << endl;
	cout << "r = " << pt.getRho() << endl;
	cout << "theta = " << pt.getTheta() << endl;

	pt.rotation(90);
	cout << " - Apres Rotation : " << endl;
	cout << "Abscisse du point : " << pt.abscisse() << endl;
	cout << "Ordonnee du point : " << pt.ordonnee() << endl;
	cout << "r = " << pt.getRho() << endl;
	cout << "theta = " << pt.getTheta() << endl;
	
	return 0;
}