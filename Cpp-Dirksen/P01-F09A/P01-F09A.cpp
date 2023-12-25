/************************************************************************************************************************************
 *    P01-F09       Invoer van karakters via CIN, uitvoer van karakters en decimale, hexadecimale en octale integerwaarden via COUT *
 ************************************************************************************************************************************/

#include <iostream>     // Bibliotheek met cin, cout en cerr
#include <conio.h>      // Bibliotheek met putch en getch
#include <iomanip>      // Bibliotheek met IO-manipulatoren

using namespace std;

void main(void)
{
    unsigned char teken;    // ASCII-karakter van type CHAR
    int i, j;               // twee integer hulpvariabelen

    cout << "Vor drie tekens in en druk op ENTER:    ";
    cin >> teken;           // voer de karakters in en lees het eerste karakter uit input-buffer

    cout << "\n----------------------------------------------";
    cout << "----------------------------------------------\n";

    for (j = 0; j < 3; j++)
    {
        i = teken;
        cout << " Teken = " << teken << "  int-waarde: ";
        cout << "  dec: " << dec << setw(3) << i;
        cout << "  hex: " << hex << setw(2) << i;
        cout << "  oct: " << oct << setw(3) << i;
        cout << "  char: " << teken << endl;
        if (j < 2)          // Lees een volgend karakter uit de input-buffer
            cin >> teken;
    };

   
    cout << "----------------------------------------------";
    cout << "----------------------------------------------";

    cout << "\n\n\nDruk op een toets : " << flush;
    getch();
}

