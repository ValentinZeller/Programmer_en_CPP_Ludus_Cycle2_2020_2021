#include "CDemo.h"

CDemo::CDemo(const CDemo& d)
{
	cout << "constructeur II (recopie) : " << d.x << " " << d.y << "\n";
	x = d.x;
	y = d.y;
}

CDemo::~CDemo()
{
	cout << "destruction : " << x << " " << y << "\n";
}