#pragma once

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

public:
	//Fonctions membres
	friend void affiche(CPoint& pt);

	//Constructeur
	CPoint(float m_fltX = 0, float m_fltY=0);
	
};
