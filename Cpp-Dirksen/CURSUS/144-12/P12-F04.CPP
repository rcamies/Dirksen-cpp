
/************************************************************/
/*   P12-F04     Berekent verschillende afmetingen en het   */
/*               gewicht van een kogel na het invoeren van  */
/*               de diameter en het soortelijk gewicht.     */
/*               De klasse-objecten worden via pointers en  */
/*               dynamische geheugentoewijzing benaderd.    */
/*               Er is sprake van late binding.             */
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

  public:  KOGELgew (float , float)     ;       // Constructor
           void  bereken_gewicht (void) ;       // Element-
           void  uitvoer_kogel   (void) ;       //    functies
} ;



using namespace std;

int main (void)                  // Begin hoofdfunctie P12-F04
{
  KOGELafm  *kogelptr[3] ;     // Pointers naar kogel-objecten
  int       i            ;     // Hulp-variabele  (teller)

  kogelptr[0] = new KOGELgew (1.1 , 5.6) ;    // Initialisatie
  kogelptr[1] = new KOGELafm (2.2)       ;    // van pointers
  kogelptr[2] = new KOGELgew (3.3 , 6.7) ;    // en objecten




  for (i=0 ; i<3 ; i++)
  {
    cout << "\n\nKogel " << i+1    ;   //   Geef de afmetingen
    cout << ":\n========\n"        ;   //  van alle kogels van
    kogelptr[i] -> uitvoer_kogel() ;   // klasse Kogelafm weer

    cout << "\n\n\nDruk op een toets:" << flush ;
    getch() ;
  } ;

  return 0 ;                     // Einde hoofdfunctie P12-F04
}


/************************************************************/
/*   Element-functies van klassen  KOGELafm  en  KOGELgew   */
/************************************************************/


KOGELafm::KOGELafm (float dia)    // Constructor met parameter
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


void KOGELafm::uitvoer_kogel (void)   // late binding: virtual
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