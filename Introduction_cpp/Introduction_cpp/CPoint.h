#pragma once

#ifndef CPOINT_H
#define CPOINT_H
#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>
using namespace std;

class CPoint
{
private:
	//Données membres
	float m_fltX;
	float m_fltY;

	static int cpt;

public:
	//Fonctions membres
	void affiche();
	void deplacePoint(float flt_X, float flt_Y);

	//Constructeur
	CPoint(float m_fltX = 0, float m_fltY=0);

	static int cpt_val();
	
	//Get
	float abscisse() const;
	float ordonnee() const;

	/*
	//Set
	void setfltX(int m_fltX);
	void setfltY(int m_fltY);
	*/

};

#endif // !CPOINT_H