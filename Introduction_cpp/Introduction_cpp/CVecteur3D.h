#pragma once

#include <iostream>
using namespace std;

const int SIZE = 3;

class CVecteur3D
{
private:
	float v[SIZE];

public:
	inline CVecteur3D(float fltX = 0, float fltY = 0, float fltZ = 0) {
		this->v[0] = fltX;
		this->v[1] = fltY;
		this->v[2] = fltZ;
	}

	float operator[](const int i) const;
	float& operator[](const int i);
};

