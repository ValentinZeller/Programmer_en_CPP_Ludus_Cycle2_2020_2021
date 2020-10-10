#include "CVecteur3D.h"
#include <math.h>

// Coincide

/*
bool CVecteur3D::coincide(CVecteur3D v2)
{
	if (this->m_fltX == v2.m_fltX && this->m_fltY == v2.m_fltY && this->m_fltZ == v2.m_fltZ) {
		return true;
	}
	else {
		return false;
	}
}
*/

bool CVecteur3D::coincide(CVecteur3D* v2)
{
	if (this->m_fltX == v2->m_fltX && this->m_fltY == v2->m_fltY && this->m_fltZ == v2->m_fltZ) {
		return true;
	}
	else {
		return false;
	}
}

bool CVecteur3D::coincide(CVecteur3D& v2)
{
	if (this->m_fltX == v2.m_fltX && this->m_fltY == v2.m_fltY && this->m_fltZ == v2.m_fltZ) {
		return true;
	}
	else {
		return false;
	}
}

//Norme

//a) R�sultat renvoy� par valeur
float CVecteur3D::normax(CVecteur3D v2)
{
	float normax = sqrt(pow(this->m_fltX, 2) + pow(this->m_fltY, 2) + pow(this->m_fltZ, 2));
	float norme2 = sqrt(pow(v2.m_fltX, 2) + pow(v2.m_fltY, 2) + pow(v2.m_fltZ, 2));

	if (normax < norme2) {
		normax = norme2;
	}

	return normax;
}

/*
//b) R�sultat renvoy� par r�f�rence
float& CVecteur3D::normax(CVecteur3D& v2)
{
	float normax = sqrt(pow(this->m_fltX,2)+pow(this->m_fltY,2)+pow(this->m_fltZ,2));
	float norme2 = sqrt(pow(v2.m_fltX, 2) + pow(v2.m_fltY, 2) + pow(v2.m_fltZ, 2));

	if (normax < norme2) {
		normax = norme2;
	}

	return normax;
}
*/

//c) R�sultat renvoy� par adresse
float* CVecteur3D::normax(CVecteur3D* v2)
{
	float normax = sqrt(pow(this->m_fltX, 2) + pow(this->m_fltY, 2) + pow(this->m_fltZ, 2));
	float norme2 = sqrt(pow(v2->m_fltX, 2) + pow(v2->m_fltY, 2) + pow(v2->m_fltZ, 2));

	if (normax < norme2) {
		normax = norme2;
	}

	return &normax;
}

/*
//a) R�sultat renvoy� par valeur
CVecteur3D CVecteur3D::normax(CVecteur3D v2)
{
	float norme = sqrt(pow(this->m_fltX, 2) + pow(this->m_fltY, 2) + pow(this->m_fltZ, 2));
	float norme2 = sqrt(pow(v2.m_fltX, 2) + pow(v2.m_fltY, 2) + pow(v2.m_fltZ, 2));

	CVecteur3D temp = *this;

	if (norme < norme2) {
		temp = v2;
	}

	return temp;
}


//b) R�sultat renvoy� par r�f�rence
CVecteur3D& CVecteur3D::normax(CVecteur3D& v2)
{
	float norme = sqrt(pow(this->m_fltX,2)+pow(this->m_fltY,2)+pow(this->m_fltZ,2));
	float norme2 = sqrt(pow(v2.m_fltX, 2) + pow(v2.m_fltY, 2) + pow(v2.m_fltZ, 2));

	CVecteur3D temp = *this;

	if (norme < norme2) {
		temp = v2;
	}

	return temp;
}


//c) R�sultat renvoy� par adresse
CVecteur3D* CVecteur3D::normax(CVecteur3D* v2)
{
	float norme = sqrt(pow(this->m_fltX, 2) + pow(this->m_fltY, 2) + pow(this->m_fltZ, 2));
	float norme2 = sqrt(pow(v2->m_fltX, 2) + pow(v2->m_fltY, 2) + pow(v2->m_fltZ, 2));

	CVecteur3D* temp = this;

	if (norme < norme2) {
		temp = v2;
	}

	return temp;
}
*/

// Constructeur

CVecteur3D::CVecteur3D(float x, float y, float z)
{
	this->m_fltX = x;
	this->m_fltY = y;
	this->m_fltZ = z;
}

/*
//a) Constructeur sans param�tre
 CVecteur3D::CVecteur3D()
{
	this->m_fltX = 0;
	this->m_fltY = 0;
	this->m_fltZ = 0;
}

//a) et b)Constructeur avec param�tre
CVecteur3D::CVecteur3D(float m_fltX, float m_fltY, float m_fltZ)
{
	this->m_fltX = m_fltX;
	this->m_fltY = m_fltY;
	this->m_fltZ = m_fltZ;
}

//c) Constructeur une ligne

CVecteur3D::CVecteur3D() : m_fltX(0), m_fltY(0), m_fltZ(0)
{

}
*/

