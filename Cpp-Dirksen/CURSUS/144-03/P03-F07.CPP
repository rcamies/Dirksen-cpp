
/************************************************************/
/*   P03-F07           Berekenen van het gewicht van een    */
/*                     kogel met behulp van een KLASSE      */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators

#define  PI 3.14159

using namespace std;


class Kogel                                // Klasse-definitie
{
  private: float diameter , soortgew , gewicht ;

  public:  //  Declaratie van 4 inline-element-functies

    void Invoer_Diameter (void)
      {
        cout << "\n\tVoer de diameter van de kogel in: " ;
        cin  >> diameter ;
      }

    void Invoer_Soortgew (void)
      {
        cout << "\n\tVoer het soortelijk gewicht" ;
        cout << " van de kogel in: " ;
        cin  >> soortgew ;
      }

    void Bereken_Gewicht (void)
      {
        gewicht = PI / 6 * diameter * diameter
                         * diameter * soortgew ;
      }

    void Uitvoer_Gewicht (void)
      {
        cout << "\n\tDe kogel weegt: " << gewicht ;
      }
} ;



void main (void)                 // Begin hoofdfunctie P03-F07
{
  Kogel  kogel ;



  kogel.Invoer_Diameter() ;
  kogel.Invoer_Soortgew() ;
  kogel.Bereken_Gewicht() ;
  kogel.Uitvoer_Gewicht() ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}                                // Einde hoofdfunctie P03-F07
