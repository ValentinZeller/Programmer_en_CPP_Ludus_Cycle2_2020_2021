#include "CSet_int.h"

CSet_int::CSet_int(int nVal)
{
	this->m_nAdVal = new int[nVal];
	this->m_nElem = 0;
	this->m_nMax = nVal;
}


// 3) Constructeur de copie
CSet_int::CSet_int(CSet_int& set)
{
	this->m_nElem = set.m_nElem;
	this->m_nMax = set.m_nMax;
	this->m_nAdVal = new int[m_nMax];
	for (int i = 0; i < m_nMax; i++) {
		this->m_nAdVal[i] = set.m_nAdVal[i];
	}
}

CSet_int::~CSet_int()
{
	delete[] this->m_nAdVal;
}

int CSet_int::getCardinal()
{
	return this->m_nElem;
}

void CSet_int::addValue(int nVal)
{
	if (m_nElem < m_nMax) {
		m_nAdVal[m_nElem] = nVal;
		m_nElem++;
	}
	else {
		cout << "Erreur : Tableau complet" << endl;
	}
}

bool CSet_int::hasValue(int nVal)
{
	for (int i = 0; i < m_nElem; i++)
	{
		if (this->m_nAdVal[i] == nVal) {
			return true;
		}
	}
	return false;
}

/*
int CSet_int::operator[](const int i) const
{
	if (i >= 0 && i < this->m_nMax) {
		return this->m_nAdVal[i];
	}
	else {
		cout << "Erreur : valeur de l'index non valide" << endl;
		exit(1);
	}
}

int& CSet_int::operator[](const int i)
{
	if (i >= 0 && i < this->m_nMax) {
		return this->m_nAdVal[i];
	}
	else {
		cout << "Erreur : valeur de l'index non valide" << endl;
		exit(1);
	}
}
*/

CSet_int &CSet_int::operator=(const CSet_int& set)
{
	this->m_nElem = set.m_nElem;
	this->m_nMax = set.m_nMax;
	this->m_nAdVal = new int[m_nMax];
	for (int i = 0; i < m_nMax; i++) {
		this->m_nAdVal[i] = set.m_nAdVal[i];
	}

	return *this;
}
