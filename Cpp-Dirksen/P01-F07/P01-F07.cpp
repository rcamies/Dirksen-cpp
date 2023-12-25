/******************************************************************************************************
 *    P01-F07       Formateren van de uitvoer van waarden van de typen float, double en long double   *
 *****************************************************************************************************/

#include <iostream>     // Bibliotheek met cin, cout en cerr
#include <conio.h>      // Bibliotheek met putch en getch
#include <iomanip>      // Bibliotheek met IO-manipulatoren

using namespace std;

void main(void)
{
    float           v1, v2;  // declaratie van drie verschillende typen variabelen
    double          v3, v4;
    long double     v5, v6;

    v1 = 1.555555555555555555555;   // alle zes variabelen krijgen een waarde bestaande uit
    v2 = 0.000005555555555555555;   // 1 cijfer voor en 21 cijfers achter de komma
    v3 = 1.555555555555555555555;
    v4 = 0.000005555555555555555;
    v5 = 1.555555555555555555555;
    v6 = 0.000005555555555555555;

    cout << setprecision(20) << v1 << endl;
    cout << setprecision(20) << v2 << endl;
    cout << setprecision(20) << v3 << endl;
    cout << setprecision(20) << v4 << endl;
    cout << setprecision(20) << v5 << endl;
    cout << setprecision(20) << v6 << endl;

    cout << "\n\n\nDruk op een toets : " << flush;
    getch();
}

