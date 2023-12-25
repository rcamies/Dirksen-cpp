
/************************************************************/
/*   P03-F08A          Berekenen van de gewichten van 2     */
/*                     kogels met behulp van een KLASSE     */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators

#define  PI 3.14159

using namespace std;

class Kogel                                // Klasse-definitie
{
private: float diameter, soortgew, gewicht;

public:  //  Declaratie van 4 inline-element-functies

    void Invoer_Diameter (void)
    {
        cout << "\n\tVoer de diameter van de kogel in: ";
        cin >> diameter;
    };

    void Invoer_Soortgew (void)
    {
        cout << "\n\tVoer het soortelijk gewicht";
        cout << " van de kogel in: ";
        cin >> soortgew;
    };

    void Bereken_Gewicht (void)
    {
        gewicht = PI / 6 * diameter * diameter
            * diameter * soortgew;
    };

    void Uitvoer_Gewicht (void)
    {
        cout << "\n\tDe kogel weegt: " << gewicht;
    };
};



void main(void)                // Begin hoofdfunctie P03-F08A
{
    Kogel  kogelA, kogelB;



    cout << "Voor kogel 1 geldt: \n";
    kogelA.Invoer_Diameter();             // Invoer, berekening
    kogelA.Invoer_Soortgew();             // en uitvoer van de
    kogelA.Bereken_Gewicht();             // eerste kogel
    kogelA.Uitvoer_Gewicht();

    cout << "\n\nVoor kogel 2 geldt: \n";
    kogelB.Invoer_Diameter();             // Invoer, berekening
    kogelB.Invoer_Soortgew();             // en uitvoer van de
    kogelB.Bereken_Gewicht();             // tweede kogel
    kogelB.Uitvoer_Gewicht();

    cout << "\n\n\nDruk op een toets: " << flush;
    getch();
}                               // Einde hoofdfunctie P03-F08A
