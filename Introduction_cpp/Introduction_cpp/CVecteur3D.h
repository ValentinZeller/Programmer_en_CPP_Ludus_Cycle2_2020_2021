#pragma once
class CVecteur3D
{
private:
	float m_fltX;
	float m_fltY;
	float m_fltZ;

public:
	CVecteur3D(float fltX = 0, float fltY = 0, float fltZ = 0);

	// Surcharges opérateurs ==
	bool operator==(const CVecteur3D&); //fonction membre
	friend bool operator==(const CVecteur3D&, const CVecteur3D&); //fonction amie

	//Surcharges opérateurs !=
	bool operator!=(const CVecteur3D&); //fonction membre
	friend bool operator!=(const CVecteur3D&, const CVecteur3D&); //fonction amie
};

