#pragma once

#include <iostream>
using namespace std;

class CVecteur3D_72
{
private:
	float m_fltX;
	float m_fltY;
	float m_fltZ;

public:
	CVecteur3D_72(float fltX = 0.0, float fltY = 0.0, float fltZ = 0.0);

	void affiche();
	CVecteur3D_72 somme(CVecteur3D_72& v2);
	float prodScalaire(CVecteur3D_72& v2);

};

