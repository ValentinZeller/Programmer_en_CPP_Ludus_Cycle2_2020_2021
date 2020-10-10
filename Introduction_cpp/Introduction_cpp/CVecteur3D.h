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
	//a) et c) sans paramètre
	CVecteur3D();

	//a) avec paramètre
	CVecteur3D(float m_fltX, float m_fltY, float m_fltZ);

	//b) avec paramètre et en une seule fonction membre
	//CVecteur3D(float m_fltX = 0,float m_fltY=0,float m_fltZ = 0);
	*/

	//Coincide

	//a) coincide par valeur
	//bool coincide(CVecteur3D v2);

	//b) coincide par adresse
	bool coincide(CVecteur3D* v2);

	//c) coincide par référence
	bool coincide(CVecteur3D &v2);

	//Norme max

	//a) Résultat renvoyé par valeur
	float normax(CVecteur3D v2);

	//b) Résultat renvoyé par référence
	//float& normax(CVecteur3D& v2);

	//c) Résultat renvoyé par adresse
	float* normax(CVecteur3D* v2);

	/*

	//a) Résultat renvoyé par valeur
	CVecteur3D normax(CVecteur3D v2);

	//b) Résultat renvoyé par référence
	CVecteur3D& normax(CVecteur3D& v2);

	//c) Résultat renvoyé par adresse
	CVecteur3D* normax(CVecteur3D* v2);

	*/

};

