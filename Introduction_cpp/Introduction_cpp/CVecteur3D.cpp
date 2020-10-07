#include "CVecteur3D.h"

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

//c) Constructeur une ligne

CVecteur3D::CVecteur3D(float x, float y, float z)
{
	this->m_fltX = x;
	this->m_fltY = y;
	this->m_fltZ = z;
}


