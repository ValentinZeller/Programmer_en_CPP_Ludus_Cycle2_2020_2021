#include <iostream>
#include "CVecteur3D.h"

using namespace std;

int main() {

	CVecteur3D v1(1, 2, 3);
	CVecteur3D v2(1, 2, 3);

	cout << "Test surcharge operateur ==" << endl;
	if (v1 == v2) {
		cout << "Les vecteurs coincident" << endl;
	}
	else {
		cout << "Les vecteurs ne coincident pas" << endl;
	}

	cout << endl << "Test surcharge operateur !=" << endl;
	if (v1 != v2) {
		cout << "Les vecteurs ne coincident pas" << endl;
	}
	else {
		cout << "Les vecteurs coincident" << endl;
	}

	return 0;
}


