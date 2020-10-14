#include <iostream>
#include "CChose.h"
#include "CDemo.h"

using namespace std;

int main() {
	CChose x;

	cout << "bonjour\n";

	CChose* adc = new CChose; //Creation objet de type chose
	delete adc; //Destruction objet de type chose

	void fct(CDemo, CDemo*); //proto fonction indépendante fct
	cout << "début main \n";
	CDemo a;
	CDemo b = 2;
	CDemo c = a;
	CDemo* adr = new CDemo(3, 3);
	fct(a, adr);
	CDemo d = CDemo(4, 4);
	c = CDemo(5, 5);
	cout << "fin main\n";

	return 0;
}

void fct(CDemo d, CDemo* add)
{
	cout << "entrée fct\n";
	delete add;
	cout << "sortie fct\n";
}

/* Exercice 75 :
	début main
	constructeur I : 1 0
	constructeur I : 2 0
	constructeur II (recopie) : 1 0
	constructeur I : 3 3
	constructeur II (recopie) : 1 0
	entrée fct
	destruction : 3 3
	sortie fct
	destruction : 1 0
	constructeur I : 4 4
	constructeur I : 5 5
	destruction : 5 5
	fin main
	destruction : 4 4
	destruction : 5 5
	destruction : 2 0
	destruction : 1 0
*/
