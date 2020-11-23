#pragma once
#include <iostream>

using namespace std;


class CSet_int
{	
private:
	int* m_nAdVal;	//adresse du tableau des valeurs
	int m_nElem;
	int m_nMax;

public:
	CSet_int(int nVal = 20);
	CSet_int(CSet_int &set); // 3) Constructeur de copie

	~CSet_int();

	int getCardinal();
	void addValue(int nVal);
	bool hasValue(int nVal);

	//Surcharge opérateur index
	int operator[](int i);
	
	CSet_int& operator<(const int& nX);

	CSet_int& operator=(const CSet_int& set);
};