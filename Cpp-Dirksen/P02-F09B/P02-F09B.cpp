
/************************************************************/
/*   P02-F09B                Uitwerking van oefenopgave 1   */
/*                Berekenen van het gewicht van een kogel   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#define  PI 3.14159


class Kogel                 // Definitie van de klasse 'Kogel'
{
private:  float  diameter, soortgew, gewicht;

public:   float  bereken_gewicht(void); //  Declaratie van
};                                         // element-functie

using namespace std;

void main(void)                // Begin hoofdfunctie P02-F09B
{
    Kogel  kogel;             // Object van de klasse 'Kogel'
    float  gewicht;
    //  Aanroep van de
    gewicht = kogel.bereken_gewicht();       // element-functie

    cout.setf(ios::fixed);      /* added by RC: use fixed output i.s.o. scientific! */

    cout << "\n\tDe kogel heeft een gewicht van: ";
    cout << gewicht;
    cout << "\n\n\nDruk op een toets: " << flush;
    getch();
}                               // Einde hoofdfunctie P02-F09B



                           // Definitie van de element-functie

float Kogel::bereken_gewicht(void)
{
    cout << "\n\tVoer de diameter van de kogel in: ";
    cin >> diameter;

    cout << "\n\tVoer het soortelijk gewicht van de kogel in: ";
    cin >> soortgew;

    gewicht = PI / 6 * diameter * diameter * diameter * soortgew;
    return gewicht;         // Teruggave van het gewicht
}
