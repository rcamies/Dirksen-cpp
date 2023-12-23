
/************************************************************/
/*   P12-F01A    Berekent verschillende afmetingen en het   */
/*               gewicht van een kogel na het invoeren van  */
/*               de diameter en het soortelijk gewicht.     */
/*               Er is sprake van vroege binding.           */ 
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#define  PI 3.14159


class KOGELafm                 // Definitie van de basisklasse
{
  private: float  diameter , omtrek ;
           float  opprvlak , volume ;

  public:  KOGELafm (float) ;                   // Constructor
           void  bereken_afmeting (void) ;      // Element-
           void  uitvoer_kogel    (void) ;      //    functies
           float geef_volume      (void) ;
} ;


class KOGELgew: public KOGELafm            // Definitie van de
{                                          // afgeleide klasse
  private: float  soortgew , gewicht    ;

  public:  KOGELgew (float , float) ;           // Constructor
           void  bereken_gewicht (void) ;       // Element-
           void  uitvoer_kogel   (void) ;       //    functies
} ;



using namespace std;

int main (void)                 // Begin hoofdfunctie P12-F01A
{
  KOGELgew  kogel1 (1.1 , 5.6) ;
  KOGELafm  kogel2 (2.2)       ;
  KOGELgew  kogel3 (3.3 , 6.7) ;


  cout << (char)033 << "[2J" ;           // Wis beeldscherm
  cout << "Kogel 1:\n========\n" ;       // Geef afmetingen en
  kogel1.uitvoer_kogel() ;               // gewicht van kogel1

  cout << "\n\n\nDruk op een toets:" << flush ;
  getch() ;


  cout << "\n\nKogel 2:\n========\n" ;   // Geef de afmetingen
  kogel2.uitvoer_kogel() ;               // van kogel2

  cout << "\n\n\nDruk op een toets:" << flush ;
  getch() ;


  cout << "\n\nKogel 3:\n========\n" ;   // Geef afmetingen en
  kogel3.uitvoer_kogel() ;               // gewicht van kogel3

  cout << "\n\n\nDruk op een toets:" << flush ;
  getch()  ;
  return 0 ;                    // Einde hoofdfunctie P12-F01A
}


/************************************************************/
/*   Element-functies van klassen  KOGELafm  en  KOGELgew   */
/************************************************************/


KOGELafm::KOGELafm (float dia)                  // Constructor
{
  diameter = dia     ;
  bereken_afmeting() ;
}


void KOGELafm::bereken_afmeting (void)
{
  omtrek   = PI       * diameter ;
  opprvlak = omtrek   * diameter ;
  volume   = opprvlak * diameter / 6 ;
}


void KOGELafm::uitvoer_kogel (void)
{
  cout << "\nDeze kogel heeft de volgende afmetingen: " ;
  cout << "\n  Diameter    : " << diameter ;
  cout << "\n  Omtrek      : " << omtrek   ;
  cout << "\n  Oppervlakte : " << opprvlak ;
  cout << "\n  Volume      : " << volume   ;
}


float KOGELafm::geef_volume (void)
{
  return volume ;
}


KOGELgew::KOGELgew (float dia , float sgw) :KOGELafm (dia)
{
  soortgew = sgw    ;         // Deze constructor roept ook de
  bereken_gewicht() ;         // constructor van KOGELafm aan
}


void KOGELgew::bereken_gewicht (void)  // Deze element-functie
{                                      // berekent afmetingen
  bereken_afmeting() ;                 // en het gewicht
  gewicht = geef_volume() * soortgew ;
}


void KOGELgew::uitvoer_kogel (void)    // Deze element-functie
{                                      // geeft de afmetingen
  KOGELafm::uitvoer_kogel() ;          // en het gewicht weer
  cout << "\nDeze kogel kent de volgende gewichten:" ;
  cout << "\n  Soort. gew. : " << soortgew ;
  cout << "\n  Gewicht     : " << gewicht  ;
}
