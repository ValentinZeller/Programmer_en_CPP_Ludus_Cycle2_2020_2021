#include "CPoint.h"

//Constructeur
CPoint::CPoint(float m_fltX, float m_fltY)
{
	this->m_fltX = m_fltX;
	this->m_fltY = m_fltY;
}

void CPoint::deplacePoint(float flt_X, float flt_Y)
{
	this->m_fltX += flt_X;
	this->m_fltY += flt_Y;
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