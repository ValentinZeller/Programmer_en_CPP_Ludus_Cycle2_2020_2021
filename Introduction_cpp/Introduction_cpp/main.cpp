#include <iostream>
#include "CPoint.h"
#include "CVecteur3D.h"
#include "CVect.h"
#include "CMatrice.h"

using namespace std;

CVect prod(CMatrice mat, CVect& v);

int main() {

	CPoint pt(2, 3); //automatique
	CPoint* pt2 = new CPoint(1.1,2);//dynamique

	cout << "Affichage du point 1 :" << endl;
	affiche(pt);

	cout << endl << "Affichage du point 2 :" << endl;
	affiche(*pt2);

	delete pt2;

	CVecteur3D v1(1, 2, 3);
	CVecteur3D v2(2, 3, 4);

	if (coincide(v1, v2)) {
		cout << endl << "Les vecteurs coincident." << endl;
	}
	else {
		cout << endl << "Les vecteurs ne coincident pas." << endl;
	}

	double tab[SIZE][SIZE];
	
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++) {
			tab[i][j] =  rand() % 10;
		}
	}

	CMatrice mat(tab);
	cout << endl << "Affichage de la matrice" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			cout << mat.getValeur(i, j) << "   ";
		}
		
		cout << endl;
	}

	CVect vect(1, 2, 3);
	cout << endl << "Affichage du vecteur" << endl;
	vect.affiche();

	CVect result = prod(mat, vect);

	cout << endl << "Affichage du resultat du produit matrice par vecteur :" << endl;
	result.affiche();

	return 0;
}

CVect prod(CMatrice mat, CVect& v) {

	//Tableau stockant les composantes du vecteur à retourner
	double tabComp[SIZE] = { 0 };
	//Tableau stockant les composantes du vecteur dans la multiplication
	double tabVect[SIZE] = { 0 };

	//Stockage des composantes du vecteur dans le tableau
	tabVect[0] = v.getX();
	tabVect[1] = v.getY();
	tabVect[2] = v.getZ();

	//Multiplication ligne par colonne
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
		{
			tabComp[i] += mat.getValeur(i, j) * tabVect[j];
		}
	}

	CVect result(tabComp[0], tabComp[1], tabComp[2]);
	return result;
}

