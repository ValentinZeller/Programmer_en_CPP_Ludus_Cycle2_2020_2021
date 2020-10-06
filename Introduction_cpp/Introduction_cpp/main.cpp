#include"CPoint.h"
#include <iostream>

using namespace std;


int main() {

	//Instance de classe CPoint
	CPoint pt; //appel du constructeur sans parametres

	pt.affichePoint();
	pt.deplacePoint(12, 3);
	cout << "Apres deplacement : " << endl;
	pt.affichePoint();

	return 0;
}