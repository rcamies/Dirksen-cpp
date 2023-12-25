/*************************************************************
 *    P01-F04B      Uitvoer van interger waarden via COUT    *
 *************************************************************/

#include <iostream>     // Bibliotheek met cin, cout en cerr
#include <conio.h>      // Bibliotheek met putch en getch

using namespace std;

void main(void)
{
    int getal_1, getal_2;   //Declaratie van 3 int varaiabelen
    int resultaat;

    cout << "Uitvoer van integer-waarden via kanaal COUT \n\n";
    getal_1 = 100;
    getal_2 = 200;
    resultaat = getal_1 * getal_2;

    // In onderstaande uitvoeropdractht hoeven geen typen te worden opgegeven.
    // Die typen zijn al bij de compiler bekend.

    cout << getal_1 << " * " << getal_2 << " = " << resultaat;

    cout << "\n\nDruk een toets: " << flush;
    getch();
}