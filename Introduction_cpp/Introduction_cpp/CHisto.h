#pragma once
#include <iostream>

using namespace std;

class CHisto
{
private:
	float m_fMin;
	float m_fMax;
	int* m_nVal;
	int m_nInter;
	float m_fAmplitude;
public:
	CHisto(float min, float max, int nInter);
	~CHisto();

	CHisto& operator<<(float X);
	int operator[](const int i);
};

