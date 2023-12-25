
/************************************************************/
/*   P03-F05           Berekenen van het gewicht van een    */
/*                     kogel met behulp van een KLASSE      */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators

#define  PI 3.14159


class Kogel                                // Klasse-definitie
{
private: float diameter, soortgew, gewicht;

public:  void  Invoer_Diameter(void);  // Declaratie van 4
      void  Invoer_Soortgew(void);  // element-functies
      void  Bereken_Gewicht(void);
      void  Uitvoer_Gewicht(void);
};

using namespace std;

void main(void)                 // Begin hoofdfunctie P03-F05
{
    Kogel  kogel;



    kogel.Invoer_Diameter();
    kogel.Invoer_Soortgew();
    kogel.Bereken_Gewicht();
    kogel.Uitvoer_Gewicht();

    cout << "\n\n\nDruk op een toets: " << flush;
    getch();
}                                // Einde hoofdfunctie P03-F05



/************************************************************/
/*   Element-functies van klasse Kogel                      */
/************************************************************/

void Kogel::Invoer_Diameter(void)
{
    cout << "\n\tVoer de diameter van de kogel in: ";
    cin >> diameter;
}


void Kogel::Invoer_Soortgew(void)
{
    cout << "\n\tVoer het soortelijk gewicht van de kogel in: ";
    cin >> soortgew;
}


void Kogel::Bereken_Gewicht(void)
{
    gewicht = PI / 6 * diameter * diameter * diameter * soortgew;
}


void Kogel::Uitvoer_Gewicht(void)
{
    cout << "\n\tDe kogel weegt: " << gewicht;
}
