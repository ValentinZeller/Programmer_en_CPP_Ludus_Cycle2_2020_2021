#include <iostream>
#include "CPoint.h"

using namespace std;

const int SIZE = 4;

int main() {

	CPoint* tabPoint = new CPoint[SIZE];

	delete[] tabPoint;

	return 0;
}

