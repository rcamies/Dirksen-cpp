/*****************************************************************
 *    P01-F05       In- en uitvoer van floating-point waarden    *
 *****************************************************************/

#include <iostream>     // Bibliotheek met cin, cout en cerr
#include <conio.h>      // Bibliotheek met putch en getch

using namespace std;

void main(void)
{
    float getal_1, getal_2, resultaat;  // Declaratie van 3 float waarden

    cout << "\n\n\n\t Voer twee floating-point-getallen in: \n";

    cout << "\n\t Getal 1 : ";       
    cin >> getal_1;                     // invoer van de eerste floating-point-waarde

    cout << "\n\t Getal_2 : ";
    cin >> getal_2;                     // invoer van de tweede floating-point-waarde

    resultaat = getal_1 * getal_2;

    cout << "\n\n\t";                   // \t is naar volgende tab
    cout << getal_1 << " * " << getal_2 << " = " << resultaat;

    cout << "\n\nDruk op een toets: " << flush;
    getch();
}
