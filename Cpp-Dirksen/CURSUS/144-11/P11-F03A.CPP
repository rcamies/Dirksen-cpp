
/************************************************************/
/*   P11-F03A    Berekent verschillende afmetingen en het   */
/*               gewicht van een kogel na het invoeren van  */
/*               de diameter en het soortelijk gewicht.     */
/*               Deze gegevens zijn opgeslagen binnen een   */
/*               basisklasse en een afgeleide klasse.       */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

#define  PI 3.14159


class KOGELafm                             // Klasse-definitie
{
  private: float  diameter , omtrek ;
           float  opprvlak , volume ;

  public:  void  invoer_diameter  (void) ;         // Element-
           void  bereken_afmeting (void) ;         // functies
           void  uitvoer_afmeting (void) ;
           float geef_volume      (void) ;
} ;


class KOGELgew                             // Klasse-definitie
{
  private: KOGELafm  afmeting           ;
           float     soortgew , gewicht ;

  public:  //  void  invoer_diameter (void) ;      // Element-
           void  invoer_soortgew (void) ;          // functies
           void  bereken_gewicht (void) ;
           void  uitvoer_gewicht (void) ;
} ;


using namespace std;

int main (void)                 // Begin hoofdfunctie P11-F03A
{
  KOGELgew  kogel ;


  cout << (char)033 << "[2J" ;    // Wis beeldscherm en voer
  kogel.invoer_diameter()    ;    // de verlangde gegevens in
  //  ??  WAT DOET DE COMPILER NU VOOR  ??
  //  ??  BOVENSTAANDE FUNCTIE-AANROEP  ??

  kogel.invoer_soortgew()    ;


  kogel.bereken_gewicht()    ;    // Bereken afmetingen en het
  kogel.uitvoer_gewicht()    ;    // gewicht en voer deze uit


  cout << "\n\nDruk op een toets:" << flush ;
  getch()  ;
  return 0 ;                    // Einde hoofdfunctie P11-F03A
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


//  Deze element-functie bestaat nu niet meer voor de compiler
//
//  void KOGELgew::invoer_diameter (void)
//  {
//    afmeting.invoer_diameter() ;
//  }


void KOGELgew::invoer_soortgew (void)
{
  cout << "\nVoer het soortelijk gewicht van de kogel in:";
  cin  >> soortgew ;
}


void KOGELgew::bereken_gewicht (void)
{
  afmeting.bereken_afmeting() ;
  gewicht  = afmeting.geef_volume() * soortgew ;
}


void KOGELgew::uitvoer_gewicht (void)
{
  afmeting.uitvoer_afmeting() ;
  cout << "\n" ;
  cout << "\n  Soort. gew. : " << soortgew ;
  cout << "\n  Gewicht     : " << gewicht  ;
}
