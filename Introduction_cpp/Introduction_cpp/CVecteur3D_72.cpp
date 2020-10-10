#include "CVecteur3D_72.h"

CVecteur3D_72::CVecteur3D_72(float fltX, float fltY, float fltZ)
{
	this->m_fltX = fltX;
	this->m_fltY = fltY;
	this->m_fltZ = fltZ;
}

void CVecteur3D_72::affiche()
{
	cout << "< " << m_fltX << ", " << m_fltY << ", " << m_fltZ << " >" << endl;
}

CVecteur3D_72 CVecteur3D_72::somme(CVecteur3D_72& v2)
{
	CVecteur3D_72 tempVect(m_fltX + v2.m_fltX,m_fltY + v2.m_fltY,m_fltZ + v2.m_fltZ);
	return tempVect;
}

float CVecteur3D_72::prodScalaire(CVecteur3D_72& v2)
{
	float prodScal = m_fltX * v2.m_fltX + m_fltY * v2.m_fltY + m_fltZ * v2.m_fltZ;
	return prodScal;
}
