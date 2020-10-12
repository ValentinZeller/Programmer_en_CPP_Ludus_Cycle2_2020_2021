#include "CPoint.h"

//Constructeur
CPoint::CPoint(float m_fltX, float m_fltY)
{
	this->m_fltX = m_fltX;
	this->m_fltY = m_fltY;
}


void affiche(CPoint& pt) {
	cout << "Abscisse du point : " << pt.m_fltX << endl;
	cout << "Ordonnee du point : " << pt.m_fltY << endl;
}