#include "CVecteur3D.h"

void CVecteur3D::affiche()
{
	
}

//a) Constructeur sans paramètre
/* CVecteur3D::CVecteur3D()
{
	this->m_fltX = 0;
	this->m_fltY = 0;
	this->m_fltZ = 0;
}*/

//a) et b)Constructeur avec paramètre
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


