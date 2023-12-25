
/************************************************************/
/*   P03-F02           Berekenen van het gewicht van een    */
/*                     kogel met behulp van een KLASSE      */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators

#define  PI 3.14159

class Kogel                                 // Klassedefinitie
{
private: float  diameter, soortgew, gewicht;

public:  float  bereken_gewicht(void);  // Declaratie van
};                                         // element-functie

using namespace std;

void main(void) // Begin hoofdfunctie P03-F03
{
    float gewicht;
    Kogel kogel;
    Kogel* z_toegang;
    z_toegang = &kogel;
    // Aanroep van de
    gewicht = kogel.bereken_gewicht(); // elementfunctie
    cout << "\n\tDe kogel weegt: " << z_toegang->gewicht;
    cout << "\n\n\nDruk op een toets: " << flush;
    getch();
} // Einde hoofdfunctie P03-F03



/************************************************************/
/*   Element-functie, die diameter en soortelijk gewicht    */ /*
        inleest en daaruit het het gewicht    */
        /*                    van de kogel berekent                 */
        /************************************************************/

float Kogel::bereken_gewicht(void)
{
    float  d, s;

    cout << "\n\tVoer de diameter van de kogel in: ";
    cin >> diameter;

    cout << "\n\tVoer het soortelijk gewicht van de kogel in: ";
    cin >> soortgew;

    d = diameter;    // Toegang tot klasse-elementen
    s = soortgew;    // vanuit de element-functie

    gewicht = PI / 6 * d * d * d * s;     // Berekening gewicht

    return gewicht;                // Teruggave van het gewicht
}
