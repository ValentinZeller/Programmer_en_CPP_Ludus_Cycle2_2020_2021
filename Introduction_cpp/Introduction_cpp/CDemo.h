#pragma once
#include <iostream>

using namespace std;

class CDemo
{
private:
	int x, y;
public:
	CDemo(int abs = 1, int ord = 0) //Constructeur I (0, 1 ou 2 arguments)
	{
		x = abs;
		y = ord;
		cout << "constructeur I : " << x << " " << y << "\n";
	}

	CDemo(CDemo const& d);
	~CDemo();
};