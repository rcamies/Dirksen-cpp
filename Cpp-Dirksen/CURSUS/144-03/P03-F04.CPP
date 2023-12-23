
/************************************************************/
/*   P03-F04           Berekenen van het gewicht van een    */
/*                     kogel met behulp van een KLASSE      */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators

#define  PI 3.14159


class Kogel                                // Klasse-definitie
{
  private: float  diameter , soortgew , gewicht ;

  public:  float  bereken_gewicht (float d , float s) ;
} ;


using namespace std;

void main (void)                 // Begin hoofdfunctie P03-F04
{
  Kogel  kogel ;
  float  diam , sgew , gewicht ;



  cout << "\n\tVoer de diameter van de kogel in: " ;
  cin  >> diam ;
  cout << "\n\tVoer het soortelijk gewicht van de kogel in: ";
  cin  >> sgew ;

                                                    // Aanroep
  gewicht = kogel.bereken_gewicht (diam , sgew) ;   // element
                                                    // functie

  cout << "\n\tDe kogel weegt: " << gewicht ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}                                // Einde hoofdfunctie P03-F04



/************************************************************/
/*   Element-functie, die het gewicht van de kogel berekent */
/************************************************************/

float Kogel::bereken_gewicht (float d , float s)
{
  diameter = d ;    // Toegang tot klasse-elementen
  soortgew = s ;    // vanuit de element-functie

  gewicht = PI / 6 * d * d * d * s ;     // Berekening gewicht

  return gewicht ;                // Teruggave van het gewicht
}
