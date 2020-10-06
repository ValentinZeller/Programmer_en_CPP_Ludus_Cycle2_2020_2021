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

void CPoint::homothetie(float flt_val)
{
	this->m_fltX *= flt_val;
	this->m_fltY *= flt_val;
}

void CPoint::rotation(float flt_angle)
{
	flt_angle *= M_PI / 180;
	float x = this->m_fltX;
	float y = this->m_fltY;
	this->m_fltX = x * cos(flt_angle) + y * sin(flt_angle);
	this->m_fltY = - x * sin(flt_angle) + y * cos(flt_angle);
}

float CPoint::rho()
{
	return sqrt(pow(this->m_fltX,2) + pow(this->m_fltY,2));
}

float CPoint::theta()
{
	float theta = 0;
	if (this->m_fltX > 0) {
		theta = atan(this->m_fltY / this->m_fltX);
	}
	else if (this->m_fltX < 0) {
		if (this->m_fltY >= 0) {
			theta = atan(this->m_fltY / this->m_fltX + M_PI);
		}
		else {
			theta = atan(this->m_fltY / this->m_fltX - M_PI);
		}
	}
	else if (this->m_fltX == 0) {
		if (this->m_fltY > 0) {
			theta = M_PI / 2;
		}
		else {
			theta = - M_PI / 2;
		}
	}
	theta *= 180 / M_PI;
	return theta;
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