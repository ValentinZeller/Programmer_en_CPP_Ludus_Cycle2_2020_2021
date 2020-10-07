#pragma once
class CVecteur3D
{
private:
	float m_fltX;
	float m_fltY;
	float m_fltZ;

public:

	void affiche();
	//Constructeur

	//a) et c) sans paramètre
	CVecteur3D();

	//a) avec paramètre
	CVecteur3D(float m_fltX, float m_fltY, float m_fltZ);
	
	//b) avec paramètre et en une seule fonction membre
	//CVecteur3D(float m_fltX = 0,float m_fltY=0,float m_fltZ = 0);
};

