
/************************************************************/
/*   P11-F04     Berekent verschillende afmetingen en het   */
/*               gewicht van een kogel na het invoeren van  */
/*               de diameter en het soortelijk gewicht.     */
/*               Deze gegevens zijn opgeslagen binnen een   */
/*               basisklasse en een afgeleide klasse.       */
/*               Er wordt gebruik gemaakt van overerving.   */ 
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

#define  PI 3.14159


class KOGELafm                 // Definitie van de basisklasse
{
  private: float  diameter , omtrek ;
           float  opprvlak , volume ;

  public:  void  invoer_diameter  (void) ;         // Element-
           void  bereken_afmeting (void) ;         // functies
           void  uitvoer_afmeting (void) ;
           float geef_volume      (void) ;
} ;


class KOGELgew: public KOGELafm            // Definitie van de
{                                          // afgeleide klasse
  private: float  soortgew , gewicht    ;

  public:  void  invoer_soortgew (void) ;          // Element-
           void  bereken_gewicht (void) ;          // functies
           void  uitvoer_gewicht (void) ;
} ;



using namespace std;

int main (void)                  // Begin hoofdfunctie P11-F04
{
  KOGELgew  kogel ;


  cout << (char)033 << "[2J" ;    // Wis beeldscherm en voer
  kogel.invoer_diameter()    ;    // de verlangde gegevens in
  kogel.invoer_soortgew()    ;


  kogel.bereken_afmeting()   ;    // Bereken afmetingen en het
  kogel.bereken_gewicht()    ;    // gewicht van de kogel

  kogel.uitvoer_afmeting()   ;    // Geef afmetingen + gewicht
  kogel.uitvoer_gewicht()    ;    // weer op het beeldscherm


  cout << "\n\nDruk op een toets:" << flush ;
  getch()  ;
  return 0 ;                     // Einde hoofdfunctie P11-F04
}


/************************************************************/
/*   Element-functies van klassen  KOGELafm  en  KOGELgew   */
/************************************************************/


void KOGELafm::invoer_diameter (void)
{
  cout << "\nVoer de diameter van de kogel in:             " ;
  cin  >> diameter ;
}


void KOGELafm::bereken_afmeting (void)
{
  omtrek   = PI       * diameter ;
  opprvlak = omtrek   * diameter ;
  volume   = opprvlak * diameter / 6 ;
}


void KOGELafm::uitvoer_afmeting (void)
{
  cout << "\n\nDe kogel heeft de volgende afmetingen: " ;
  cout << "\n  Diameter    : " << diameter ;
  cout << "\n  Omtrek      : " << omtrek   ;
  cout << "\n  Oppervlakte : " << opprvlak ;
  cout << "\n  Volume      : " << volume   ;
}


float KOGELafm::geef_volume (void)
{
  return volume ;
}


void KOGELgew::invoer_soortgew (void)
{
  cout << "\nVoer het soortelijk gewicht van de kogel in:  " ;
  cin  >> soortgew ;
}


void KOGELgew::bereken_gewicht (void)
{
  gewicht  = geef_volume() * soortgew ;
}


void KOGELgew::uitvoer_gewicht (void)
{
  cout << "\n" ;
  cout << "\n  Soort. gew. : " << soortgew ;
  cout << "\n  Gewicht     : " << gewicht  ;
}
