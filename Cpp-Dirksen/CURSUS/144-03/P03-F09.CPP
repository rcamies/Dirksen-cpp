
/************************************************************/
/*   P03-F09           Berekenen van het gewicht van een    */
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

  public:  //  Declaratie van 2 inline-element-functies

    void Invoer_Gegevens (void)
      {
        cout << "\n\tVoer de diameter van de kogel in: " ;
        cin  >> diameter ;
        cout << "\n\tVoer het soortelijk gewicht" ;
        cout << " van de kogel in: " ;
        cin  >> soortgew ;
      }

    void Verwerk_Gewicht (void)
      {
        gewicht = PI / 6 * diameter * diameter
                         * diameter * soortgew ;
        cout << "\n\tDe kogel weegt: " << gewicht ;
      }
} ;



void main (void)                 // Begin hoofdfunctie P03-F09
{
  Kogel  kogel ;



  kogel.Invoer_Gegevens() ;
  kogel.Verwerk_Gewicht() ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}                                // Einde hoofdfunctie P03-F09
