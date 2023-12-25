/*****************************************************************
 *    P01-F06       In- en uitvoer van strings via CIN en COUT   *
 *****************************************************************/

#include <iostream>     // Bibliotheek met cin, cout en cerr
#include <conio.h>      // Bibliotheek met putch en getch

using namespace std;

void main(void)
{
    char voornaam[25];      // Declaratie van twee stringvariabelen van 25 karakters
    char achternaam[25];

    cout << "\n\nVoer uw voornaam in : ";
    cin >> voornaam;        // string invoer via CIN

    cout << "\n\nVoer uw achternaam in : ";
    cin >> achternaam;      // string invoer via CIN

    cout << "\n\n\nU heet " << voornaam << " " << achternaam;

    cout << "\n\n\nDruk op een toets : " << flush;
    getch();
}
