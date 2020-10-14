#include <iostream>
#include "CChose.h"

using namespace std;

int main() {
	CChose x;

	cout << "bonjour\n";

	CChose* adc = new CChose; //Creation objet de type chose
	delete adc; //Destruction objet de type chose

	return 0;
}


