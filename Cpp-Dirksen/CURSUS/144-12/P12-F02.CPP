
/************************************************************/
/*   P12-F02     Berekent verschillende afmetingen en het   */
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

  public:  KOGELafm (void)  ;                  // Constructors
           KOGELafm (float) ;
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

int main (void)                  // Begin hoofdfunctie P12-F02
{
  KOGELafm  kogelnr[3] ;           // Lijst met kogel-objecten
  int       i          ;           // Hulp-variabele  (teller)

  kogelnr[0] = KOGELgew (1.1 , 5.6) ;     // Initialisatie van
  kogelnr[1] = KOGELafm (2.2)       ;     // de kogel-objecten
  kogelnr[2] = KOGELgew (3.3 , 6.7) ;




  for (i=0 ; i<3 ; i++)
  {
    cout << "\n\nKogel " << i+1 ;        // Geef afmetingen en
    cout << ":\n========\n"     ;        // gewichten van alle
    kogelnr[i].uitvoer_kogel()  ;        // kogels weer

    cout << "\n\n\nDruk op een toets:" << flush ;
    getch() ;
  } ;

  return 0 ;                     // Einde hoofdfunctie P12-F02
}


/************************************************************/
/*   Element-functies van klassen  KOGELafm  en  KOGELgew   */
/************************************************************/


KOGELafm::KOGELafm (void)      // Constructor zonder parameter
{
  diameter = 4.4     ;
}


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