//char-Felder in Funktionen
//Rückgabewert Funktionsname (char [], ...)
//Ein Rückgabewert ist NUR BEI char[]Feldern nicht nötig, da das Feld global verändert wird.

#include <iostream>
using namespace std;

void uebergeben(char[]); //Ein char Feld --> [] angekündigt.

int main()
{
	char text[] = "Hallo";

	cout << text << endl;
	uebergeben(text); //Der Index [] wird hier nicht benötigt, da das ganze Feld übergeben werden soll und nicht einzelene Feldwerte, z.B. --> text[3].
	cout << text << endl;

	return 0;
}


void uebergeben(char x[]) //"text" wird zu "x". Index [] nicht vergessen! Es wird ja mehr als ein Zeichen übergeben.
{
	int i;
	for (i = 0; x[i] != '\0'; i++) //Wenn der FeldWERT, z.B. 'H' ungleich '\0' ist, dann ... 
	{
		x[i] = '-';//... ersetzte den FeldWERT, z.B. 'H' mit '-'
	}

	x[i] = '\0'; //Wichtig! Am Ende der Zeichenkette muss die Null-Terminierung stehen, damit das Ende der Zeichenkette bekannt ist.

	//"return" wird hier nicht benötigt, da der Rückgabewert void (leer) ist.
}
