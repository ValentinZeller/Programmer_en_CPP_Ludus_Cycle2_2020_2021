#include "CHisto.h"
CHisto::CHisto(float min, float max, int nInter)
{
	if ((max > min) && (nInter > 0)) {
		this->m_fMax = max;
		this->m_fMin = min;

		this->m_nInter = nInter;
	} else
	{
		cout << "Erreur : maximum inferieur ou egal au minimum ou intervalle inferieur ou egal a 0." << endl;
		this->m_fMax = 10;
		this->m_fMin = 1;
		this->m_nInter = 2;
	}
	this->m_fAmplitude = (this->m_fMax - this->m_fMin)/this->m_nInter; //même amplitude
	this->m_nVal = new int[this->m_nInter];
	for (int i = 0; i < this->m_nInter; i++) {
		this->m_nVal[i] = 0;
	}
}

CHisto::~CHisto() {
	delete this->m_nVal;
}

CHisto& CHisto::operator<<(float X)
{
	if (X >= this->m_fMin && X <= this->m_fMax) {
		int nNumTranche = 0;

		while (X > (nNumTranche+this->m_fMin) * this->m_fAmplitude) {
			nNumTranche++;
		}

		this->m_nVal[nNumTranche]++;
	}
	else {
		cout << "Erreur : Valeur trop grande ou trop petite" << endl;
		exit(1);
	}
}

int CHisto::operator[](const int i)
{
	if (i > 0 && i <= this->m_nInter) {
		return this->m_nVal[i-1];
	}
	else {
		cout << "Erreur : valeur de l'index non valide" << endl;
		exit(1);
	}
}
