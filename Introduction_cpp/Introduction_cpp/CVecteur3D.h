#pragma once
class CVecteur3D
{
private:
	float m_fltX;
	float m_fltY;
	float m_fltZ;

public:

	//Constructeur
	CVecteur3D(float x=0.0, float y=0.0, float z=0.0);

	//a) coincide par valeur
	//bool coincide(CVecteur3D v2);

	//b) coincide par adresse
	bool coincide(CVecteur3D* v2);

	//c) coincide par référence
	bool coincide( CVecteur3D &v2);

};

