#include <iostream>
using namespace std;

void summe(int[]);

int main()
{
    int messwerte[10]= { 0 };
    for (int i = 0; i <= 9; i++)
    {
        cout << messwerte[i] << endl;
    }

    summe(messwerte); //Die Speicheradresse des ersten Elementes wird übergeben.
    cout << messwerte << endl;  //Die Speicheradresse von messwert[0] wird ausgegeben!

    for (int i = 0; i <= 9; i++)
    {
        cout << messwerte[i] << endl;
    }
    return 0;
}

void summe(int zahlen[])
{
    for (int i = 0; i <= 9; i++)
    {
        zahlen[i] = zahlen[i] + 90;
    }
}
