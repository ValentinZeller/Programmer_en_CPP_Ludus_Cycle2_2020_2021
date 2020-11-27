#include "CInt2D.h"

CInt2D::CInt2D(int exp1, int exp2)
{
	this->m_nMax = exp1;
	this->m_nMax2 = exp2;
	this->m_nVal = new int*[exp1];
	for (int i = 0; i < exp1; ++i) {
		this->m_nVal[i] = new int[exp2];
		for (int j = 0; j < exp2; j++) {
			this->m_nVal[i][j] = 0;
		}
	}
}

int CInt2D::operator()(int i, int j)
{
	if (i >= 0 && i < this->m_nMax && j >= 0 && j < this->m_nMax2) {
		return this->m_nVal[i][j];
	}
	else {
		cout << "Erreur : valeur de l'index non valide" << endl;
		exit(1);
	}
}
