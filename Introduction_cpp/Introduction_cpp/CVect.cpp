#include "CVect.h"

CVect::CVect(int exp)
{
	this->m_nMax = exp;
	this->m_nVal = new int[exp];
	for (int i = 0; i < exp; i++) {
		this->m_nVal[i] = 0;
	}
}

int CVect::operator[](int i)
{
	if (i >= 0 && i < this->m_nMax) {
		return this->m_nVal[i];
	}
	else {
		cout << "Erreur : valeur de l'index non valide" << endl;
		exit(1);
	}
}

int& CVect::operator[](int i) const
{
	if (i >= 0 && i < this->m_nMax) {
		return this->m_nVal[i];
	}
	else {
		cout << "Erreur : valeur de l'index non valide" << endl;
		exit(1);
	}
}
