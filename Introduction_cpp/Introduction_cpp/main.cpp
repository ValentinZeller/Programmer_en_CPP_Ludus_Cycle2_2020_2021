#include"CPoint.h"
#include <iostream>

using namespace std;


int main() {

	//Instance de classe CPoint
	CPoint pt; //appel du constructeur sans parametres

	pt.affiche();

	pt.deplacePoint(1,1);
	cout << endl << " - Apres deplacement : " << endl;
	pt.affiche();

	CPoint pt2;
	cout << endl << " - Apres creation d'un nouveau point : " << endl;
	pt.affiche();
	

	
	
	return 0;
}