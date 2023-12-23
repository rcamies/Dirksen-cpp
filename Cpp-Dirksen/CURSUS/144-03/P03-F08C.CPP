
/************************************************************/
/*   P03-F08C          Berekenen van de gewichten van 2     */
/*                     kogels met behulp van een KLASSE     */
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

    void Kogel::Invoer_Diameter (void)
      {
        cout << "\n\tVoer de diameter van de kogel in: " ;
        cin  >> diameter ;
      } ;

    void Kogel::Invoer_Soortgew (void)
      {
        cout << "\n\tVoer het soortelijk gewicht" ;
        cout << " van de kogel in: " ;
        cin  >> soortgew ;
      } ;

    void Kogel::Bereken_Gewicht (void)
      {
        gewicht = PI / 6 * diameter * diameter
                         * diameter * soortgew ;
      } ;

    void Kogel::Uitvoer_Gewicht (void)
      {
        cout << "\n\tDe kogel weegt: " << gewicht ;
      } ;
} ;



void main (void)                // Begin hoofdfunctie P03-F08C
{
  Kogel  kogel ;
  int    nr    ;



  for (nr=0 ; nr<2 ; nr++)
  {
    cout << "\n\nVoor kogel " << nr+1 << " geldt: \n" ;
    kogel.Invoer_Diameter() ;
    kogel.Invoer_Soortgew() ;            // Invoer, berekening
    kogel.Bereken_Gewicht() ;            // en uitvoer van een
    kogel.Uitvoer_Gewicht() ;            // kogel
  } ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}                               // Einde hoofdfunctie P03-F08C
