#pragma once
#include <iostream>

using namespace std;

class CInt2D
{
	int** m_nVal;
	int m_nMax;
	int m_nMax2;
public:
	CInt2D(int exp1 = 5, int exp2 = 5);

	int operator()(int i,int j);
};

