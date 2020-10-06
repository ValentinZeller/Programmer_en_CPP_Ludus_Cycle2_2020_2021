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
	//Donn�es membres
	float m_fltX;
	float m_fltY;

public:
	//Fonctions membres

	void deplacePoint(float flt_X, float flt_Y);
	void homothetie(float flt_val);
	void rotation(float flt_angle);
	
	float rho();
	float theta();

	//Constructeur
	CPoint(float m_fltX = 0, float m_fltY=0);

	
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