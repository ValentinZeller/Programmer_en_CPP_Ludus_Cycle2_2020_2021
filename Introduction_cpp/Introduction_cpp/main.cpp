#include <iostream>
#include "CSet_int.h"

using namespace std;

const int SIZE = 20;

int main() {
	int nCptEntier = 0;
	int nVal = 0;

	CSet_int set(SIZE);
	for (size_t i = 0; i < SIZE; i++)
	{
		nVal = rand() % 20;
		if (!set.hasValue(nVal)) {
			nCptEntier++;
		}
		set.addValue(nVal);
		cout << "Valeur ajoutee au tableau : " << nVal << endl;
	}

	cout << "Nombre d'entier different : " << nCptEntier << endl;

	return 0;
}

