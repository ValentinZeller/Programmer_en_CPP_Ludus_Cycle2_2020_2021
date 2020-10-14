#pragma once
class CSet_int
{
private:
	int* nAdVal;	//adresse du tableau des valeurs
	int nMax;
	int nElem;

public:
	CSet_int(int nVal = 20);
	~CSet_int();
};

