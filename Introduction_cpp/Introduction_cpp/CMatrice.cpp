#include "CMatrice.h"

CMatrice::CMatrice(double tab[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			m_tabValeur[i][j] = tab[i][j];
		}
	}
}

double CMatrice::getValeur(int l, int c)
{
	return this->m_tabValeur[l][c];
}

void CMatrice::setValeur(int l, int c, double dblVal)
{
	this->m_tabValeur[l][c] = dblVal;
}






