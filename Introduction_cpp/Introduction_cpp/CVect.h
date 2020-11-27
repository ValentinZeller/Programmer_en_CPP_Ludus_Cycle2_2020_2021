#pragma once
#include <iostream>

using namespace std;

class CVect
{
private:
	int* m_nVal;
	int m_nMax;
public:
	CVect(int exp = 5);

	int operator[](int i);
	int& operator[](int i) const;
};

