#pragma once
#include <iostream>

using namespace std;

class CVect
{
private:
	double m_dblX;
	double m_dblY;
	double m_dblZ;

public:
	CVect(double fltX = 0, double fltY = 0, double fltZ = 0);

	void affiche();

	double getX();
	double getY();
	double getZ();
};

