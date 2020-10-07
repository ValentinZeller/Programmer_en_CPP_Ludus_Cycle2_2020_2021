#include <iostream>
#include "CVecteur3D.h"

using namespace std;


int main() {
	CVecteur3D v1;
	CVecteur3D v2(1, 2, 3);
	
	if (v1.coincide(v2)) {
		cout << "Les vecteurs coincident." << endl;
	}
	else {
		cout << "Les vecteurs ne coincident pas." << endl;
	}
	
	return 0;
}