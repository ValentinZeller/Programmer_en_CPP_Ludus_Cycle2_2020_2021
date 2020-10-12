#pragma once

class CVecteur3D
{
private:
	float m_fltX;
	float m_fltY;
	float m_fltZ;

public:
	CVecteur3D(float fltX = 0, float fltY = 0, float fltZ = 0);

	friend bool coincide(CVecteur3D& v1, CVecteur3D v2);
};

