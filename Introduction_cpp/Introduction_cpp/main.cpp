#include <iostream>
#include "CSet_int.h"
#include "CVecteur3D.h"
#include <time.h>
#include "CVect.h"
#include "CInt2D.h"
#include "CHisto.h"

using namespace std;

const int SIZE = 20;

int main() {

	srand(time(NULL));

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

	CSet_int set2;

	CSet_int set3;

	// Affectation multiple
	set3 = set2 =  set;
	//set[0] = 1; Impossible
	cout << "Surcharge operateur [] : "<<set[0] <<endl;

	//Vecteur 3D
	CVecteur3D v1(1,2,3);
	float x = v1[2];
	cout <<"Surcharge operateur [] des vecteurs : "<< x << endl;

	//Vecteur dynamique
	CVect t(10);
	cout << "Vecteur dynamique et operateur [] : "<<t[1] << endl;

	//Entier � deux indices
	CInt2D t2(4, 3);
	cout << "Tableau entier dynamique a deux indices et operateur () : " << t2(1, 2) << endl;

	//Histogramme
	CHisto h(1, 10, 2);
	h << 1;
	h << 2;
	cout << "Histogramme : ajout de deux valeur dans la tranche 1 : "<< h[1] << endl;

	return 0;
}

