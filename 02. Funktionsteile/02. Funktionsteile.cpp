/*
Funktion ohne Rückgabewert und mit zwei unterschiedlichen Parametern
*/

#include <iostream>
using namespace std;

//Deklaration bzw. Prototyp der unteren Funktionen
float rechteck(int, float);
void ausgabe();

//Haupt - Funktion
int main()
{
	int a = 0;
	float b = 0.0;

	ausgabe();
	cin >> a;

	ausgabe();
	cin >> b;

	cout << "Das Rechteck ist " << rechteck(a, b) << " m2 gross." << endl;

	return 0;
}


//Definition der Funktion Rechteck
float rechteck(int c, float d) //mehrer Parameterwerte werden einer Funktion übergeben
{
	float e = 0.0;
	e = c * d;

	return e;
}

//Rückgabedatentyp void --> der Inhalt der Funktion wird ausgegeben
void ausgabe()
{
	cout << "Geben Sie eine Kantenlaenge des Rechtecks ein!" << endl;
}
