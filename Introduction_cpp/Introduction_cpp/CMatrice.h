#pragma once

const int SIZE = 3;

class CMatrice
{
private:
	double m_tabValeur[SIZE][SIZE];

public:
	CMatrice(double tab[SIZE][SIZE]);

	double getValeur(int l, int c);
	void setValeur(int l, int c, double dblVal);
};

