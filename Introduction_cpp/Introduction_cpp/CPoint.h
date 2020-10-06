#pragma once

#ifndef CPOINT_H
#define CPOINT_H

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

	void deplacePoint(float flt_X, float flt_Y);

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