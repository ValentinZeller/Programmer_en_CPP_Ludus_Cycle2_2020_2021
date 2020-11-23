#include "CVecteur3D.h"

float CVecteur3D::operator[](int i) const
{
	if (i >= 0 && i < 3) {
		return this->v[i];
	}
	else {
		cout << "Erreur : valeur de l'index non valide" << endl;
		exit(1);
	}
}