#include <iostream>
#include "CVecteur3D.h"

using namespace std;

int main() {

	CVecteur3D v1(1, 2, 3);
	CVecteur3D v2(4, 5, 6);

	v1[0] = 5;

	v2[0] = v1[2];

	cout << "Valeur 0 du vecteur 1 : " <<  v1[0] << endl;
	cout << "Valeur 0 du vecteur 2 : " << v2[0] << endl;


	return 0;
}


