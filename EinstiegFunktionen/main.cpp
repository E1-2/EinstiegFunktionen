/*
Funktionen in C++
Allgemeiner Aufbau einer Funktion:

Rückgabetyp Funktionsname (Datentyp Variablenname_1, Datentyp Variablenname_2)
{
	Anweisungen;
	return Funktionswert;
}
*/

#include <iostream>
using namespace std;

int sum(int, int);

int main() {

	int ergebnis = 0;

	ergebnis = sum(12, 2);
	cout << ergebnis << endl;

	return 0;
}

int sum(int zahl1, int zahl2) {
	int sum = 0;
	sum = zahl1 + zahl2;

	return sum;
}

