
/************************************************************/
/*   P01-F09D               Uitwerking van oefenopgave 1    */
/*                                                          */
/*   Invoer van karakters via CIN, uitvoer van karakters    */
/*   en decimale, hexadecimale en octale integer-waarden    */
/*   via COUT.                                              */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators

using namespace std;

void main(void)
{
    unsigned char  teken;       // ASCII-karakter van type CHAR
    int            i, j;       // twee integer-hulp-variabelen

    cout << (char)033 << "[2J";              // Wis beeldscherm


    cout.setf(ios::uppercase);
    cout << "Voer drie tekens in en druk op ENTER:   ";


    for (j = 0; j < 3; j++)
    {
        cin >> teken;          // Lees een karakter uit de buffer
        i = teken;
        cout << "\n\nTeken = " << teken << "  int-waarde:";
        cout << "  dec: " << dec << setw(3) << i;
        cout << "  hex: " << hex << setw(2) << i;
        cout << "  oct: " << oct << setw(3) << i;
        cout << "  char: " << teken;
    };


    cout << "\n\nDruk op een toets:" << flush;
    getch();
}
