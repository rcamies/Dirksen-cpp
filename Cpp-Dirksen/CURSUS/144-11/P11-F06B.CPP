
/************************************************************/
/*   P11-F06B    Berekent verschillende afmetingen en het   */
/*               gewicht van een kogel na het invoeren van  */
/*               de diameter en het soortelijk gewicht.     */
/*               Deze gegevens zijn opgeslagen binnen een   */
/*               basisklasse en een afgeleide klasse.       */
/*               Er wordt gebruik gemaakt van overerving en */
/*               bescherming via protected element-functies */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

#define  PI 3.14159


class KOGELafm                 // Definitie van de basisklasse
{
  private:   float  diameter , omtrek ;
             float  opprvlak , volume ;

  public:    void   invoer_diameter  (void) ;      // Element-
                                                   // functies
  protected: void   bereken_afmeting (void) ;         
             void   uitvoer_afmeting (void) ;
             float  geef_volume      (void) ;
} ;


class KOGELgew: public KOGELafm            // Definitie van de
{                                          // afgeleide klasse
  private: float  soortgew , gewicht    ;

  public:  void  invoer_soortgew (void) ;          // Element-
           void  bereken_gewicht (void) ;          // functies
           void  uitvoer_gewicht (void) ;
} ;



using namespace std; 

int main (void)                 // Begin hoofdfunctie P11-F06B
{
  KOGELgew  kogel ;


  cout << (char)033 << "[2J" ;    // Wis beeldscherm en voer
  kogel.invoer_diameter()    ;    // de verlangde gegevens in
  kogel.invoer_soortgew()    ;


  kogel.bereken_gewicht()    ;    // Bereken afmetingen en het
  kogel.uitvoer_gewicht()    ;    // gewicht en voer deze uit


  cout << "\n\nDruk op een toets:" << flush ;
  getch()  ;
  return 0 ;                    // Einde hoofdfunctie P11-F06B
}


/************************************************************/
/*   Element-functies van klassen  KOGELafm  en  KOGELgew   */
/************************************************************/


void KOGELafm::invoer_diameter (void)                // public
{
  cout << "\nVoer de diameter van de kogel in:             " ;
  cin  >> diameter ;
}


void KOGELafm::bereken_afmeting (void)            // protected
{
  omtrek   = PI       * diameter ;
  opprvlak = omtrek   * diameter ;
  volume   = opprvlak * diameter / 6 ;
}


void KOGELafm::uitvoer_afmeting (void)            // protected
{
  cout << "\n\nDe kogel heeft de volgende afmetingen: " ;
  cout << "\n  Diameter    : " << diameter ;
  cout << "\n  Omtrek      : " << omtrek   ;
  cout << "\n  Oppervlakte : " << opprvlak ;
  cout << "\n  Volume      : " << volume   ;
}


float KOGELafm::geef_volume (void)                // protected
{
  return volume ;
}


void KOGELgew::invoer_soortgew (void)                // public
{
  cout << "\nVoer het soortelijk gewicht van de kogel in:  " ;
  cin  >> soortgew ;
}


void KOGELgew::bereken_gewicht (void)                // public
{
  bereken_afmeting() ;
  gewicht = geef_volume() * soortgew ;
}


void KOGELgew::uitvoer_gewicht (void)                // public
{
  uitvoer_afmeting() ;
  cout << "\n" ;
  cout << "\n  Soort. gew. : " << soortgew ;
  cout << "\n  Gewicht     : " << gewicht  ;
}
