#pragma once

#include <iostream>
using namespace std;


class CVecteur3D
{
private:
	float v[3];
public:
	CVecteur3D(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0) 
	{
		v[0] = c1; v[1] = c2; v[2] = c3;
	}

	float operator[](int i) const;
};

