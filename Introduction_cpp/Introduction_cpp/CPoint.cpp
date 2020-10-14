#include "CPoint.h"

int CPoint::m_nCpt = 0;

CPoint::CPoint()
{
	m_nCpt++;
	this->m_nNum = m_nCpt;
	cout << "Creation du point numero : " << this->m_nNum << endl;
}

CPoint::~CPoint()
{
	cout << "Destruction du point numero : " << this->m_nNum << endl;
}

