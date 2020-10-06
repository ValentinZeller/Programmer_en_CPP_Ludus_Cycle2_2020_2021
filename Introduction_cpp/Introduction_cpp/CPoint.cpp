#include "CPoint.h"

//Constructeur
/*CPoint::CPoint(float m_fltX, float m_fltY)
{
	this->m_fltX = m_fltX;
	this->m_fltY = m_fltY;
}
*/
CPoint::CPoint(float m_fltRho, float m_fltTheta)
{
	this->m_fltRho = m_fltRho;
	this->m_fltTheta = m_fltTheta;
}


void CPoint::deplacePoint(float flt_X, float flt_Y)
{
	float xtemp = abscisse() + flt_X;
	float ytemp = ordonnee() + flt_Y;

	this->m_fltRho = cartToRho(xtemp, ytemp);
	this->m_fltTheta = cartToTheta(xtemp, ytemp);
}

void CPoint::homothetie(float flt_val)
{
	float xtemp = abscisse() * flt_val;
	float ytemp = ordonnee() * flt_val;

	this->m_fltRho = cartToRho(xtemp, ytemp);
	this->m_fltTheta = cartToTheta(xtemp, ytemp);
}

void CPoint::rotation(float flt_angle)
{
	flt_angle *= M_PI / 180;
	float x = abscisse();
	float y = ordonnee();

	float xtemp = x * cos(flt_angle) + y * sin(flt_angle);
	float ytemp = - x * sin(flt_angle) + y * cos(flt_angle);

	this->m_fltRho = cartToRho(xtemp, ytemp);
	this->m_fltTheta = cartToTheta(xtemp, ytemp);
}

float CPoint::cartToRho(float n_X, float n_Y)
{
	return sqrt(pow(n_X, 2) + pow(n_Y, 2));
}

float CPoint::cartToTheta(float n_X, float n_Y)
{
	float theta = 0;
	if (n_X > 0) {
		theta = atan(n_Y / n_X);
	}
	else if (n_X < 0) {
		if (n_Y >= 0) {
			theta = atan(n_Y / n_X + M_PI);
		}
		else {
			theta = atan(n_Y / n_X - M_PI);
		}
	}
	else if (n_X == 0) {
		if (n_Y > 0) {
			theta = M_PI / 2;
		}
		else {
			theta = -M_PI / 2;
		}
	}
	theta *= 180 / M_PI;
	return theta;
}

float CPoint::abscisse() const
{
	return m_fltRho * cos(m_fltTheta);
}
float CPoint::ordonnee() const
{
	return m_fltRho * sin(m_fltTheta);
}

float CPoint::getRho() const
{
	return m_fltRho;
}

float CPoint::getTheta() const
{
	return m_fltTheta;
}


//Assesseurs
/*
float CPoint::abscisse() const
{
	return this->m_fltX;
}
float CPoint::ordonnee() const
{
	return this->m_fltY;
}
*/

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