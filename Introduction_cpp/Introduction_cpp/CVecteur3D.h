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
	/*
	//a) et c) sans param�tre
	CVecteur3D();

	//a) avec param�tre
	CVecteur3D(float m_fltX, float m_fltY, float m_fltZ);

	//b) avec param�tre et en une seule fonction membre
	//CVecteur3D(float m_fltX = 0,float m_fltY=0,float m_fltZ = 0);
	*/

	//Coincide

	//a) coincide par valeur
	//bool coincide(CVecteur3D v2);

	//b) coincide par adresse
	bool coincide(CVecteur3D* v2);

	//c) coincide par r�f�rence
	bool coincide(CVecteur3D &v2);

	//Norme max

	//a) R�sultat renvoy� par valeur
	float normax(CVecteur3D v2);

	//b) R�sultat renvoy� par r�f�rence
	//float& normax(CVecteur3D& v2);

	//c) R�sultat renvoy� par adresse
	float* normax(CVecteur3D* v2);

	/*

	//a) R�sultat renvoy� par valeur
	CVecteur3D normax(CVecteur3D v2);

	//b) R�sultat renvoy� par r�f�rence
	CVecteur3D& normax(CVecteur3D& v2);

	//c) R�sultat renvoy� par adresse
	CVecteur3D* normax(CVecteur3D* v2);

	*/

};

