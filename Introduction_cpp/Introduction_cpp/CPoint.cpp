#include "CPoint.h"

int CPoint::cpt = 0;

//Constructeur
CPoint::CPoint(float m_fltX, float m_fltY)
{
	this->m_fltX = m_fltX;
	this->m_fltY = m_fltY;
	cpt++;
}

//Exercice 73
int CPoint::cpt_val()
{
	return cpt;
}


void CPoint::deplacePoint(float flt_X, float flt_Y)
{
	this->m_fltX += flt_X;
	this->m_fltY += flt_Y;
}

void CPoint::affiche() {
	cout << "Abscisse du point : " << m_fltX << endl;
	cout << "Ordonnee du point : " << m_fltY << endl;
	cout << "Nombre de points : " << cpt_val() << endl;
}


//Assesseurs

float CPoint::abscisse() const
{
	return this->m_fltX;
}
float CPoint::ordonnee() const
{
	return this->m_fltY;
}

/*
//Mutateurs

void CPoint::setfltX(int m_fltX)
{
	this->m_fltX = m_fltX;
}
void CPoint::setfltY(int m_nY)
{
	this->m_fltY = m_nY;
}

*/