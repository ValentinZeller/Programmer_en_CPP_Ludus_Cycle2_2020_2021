#include "CVecteur3D.h"

float CVecteur3D::operator[](const int i) const
{
	if (i >= 0 && i < SIZE) {
		return this->v[i];
	}
	else {
		cout << "Erreur : valeur de l'index non valide" << endl;
		exit(1);
	}
}

float& CVecteur3D::operator[](const int i)
{
	if (i >= 0 && i < SIZE) {
		return this->v[i];
	}
	else {
		cout << "Erreur : valeur de l'index non valide" << endl;
		exit(1);
	}
}
