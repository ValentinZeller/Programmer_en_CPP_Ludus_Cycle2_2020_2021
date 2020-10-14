#include "CVecteur3D.h"

CVecteur3D::CVecteur3D(float fltX, float fltY, float fltZ)
{
	this->m_fltX = fltX;
	this->m_fltY = fltY;
	this->m_fltZ = fltZ;
}

// Surcharges opérateurs ==

bool CVecteur3D::operator==(const CVecteur3D& v)
{
	if (this->m_fltX == v.m_fltX && this->m_fltY == v.m_fltY && this->m_fltZ == v.m_fltZ) {
		return true;
	}
	else {
		return false;
	}
}

bool operator==(const CVecteur3D& v1, const CVecteur3D& v2)
{
	if (v1.m_fltX == v2.m_fltX && v1.m_fltY == v2.m_fltY && v1.m_fltZ == v2.m_fltZ) {
		return true;
	}
	else {
		return false;
	}
}

//Surcharges opérateurs !=

bool CVecteur3D::operator!=(const CVecteur3D& v)
{
	if (this->m_fltX != v.m_fltX || this->m_fltY != v.m_fltY || this->m_fltZ != v.m_fltZ) {
		return true;
	}
	else {
		return false;
	}
}

bool operator!=(const CVecteur3D& v1, const CVecteur3D& v2)
{
	if (v1.m_fltX != v2.m_fltX || v1.m_fltY != v2.m_fltY || v1.m_fltZ != v2.m_fltZ) {
		return true;
	}
	else {
		return false;
	}
}