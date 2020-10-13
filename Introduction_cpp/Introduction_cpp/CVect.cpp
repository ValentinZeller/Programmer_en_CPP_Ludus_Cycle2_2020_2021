#include "CVect.h"
#include "CMatrice.h"

CVect::CVect(double fltX, double fltY, double fltZ)
{
	this->m_dblX = fltX;
	this->m_dblY = fltY;
	this->m_dblZ = fltZ;
}


double CVect::getX()
{
	return this->m_dblX;
}

double CVect::getY()
{
	return this->m_dblY;
}

double CVect::getZ()
{
	return this->m_dblZ;
}

