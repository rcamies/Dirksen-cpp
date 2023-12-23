
/************************************************************/
/*   P10-F03     Berekent verschillende afmetingen en het   */
/*               gewicht van een kogel na het invoeren van  */
/*               de diameter en het soortelijk gewicht.     */
/*               Uitvoer verloopt via een element-functie,  */
/*               die ook de operator '<<' herdefinieert.    */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

#define  PI 3.14159

using namespace std;

class KOGEL                                // Klasse-definitie
{
  private:  float  diameter , soortgew ;
            float  omtrek   , opprvlak ;
            float  volume   , gewicht  ;

  public:   void  bereken_gegevens (void) ;        // Element-
            void  invoer_diameter  (void) ;        // functies
            void  invoer_soortgew  (void) ;
				void  operator << (std::ostream&)  ;
} ;



int main (void)                  // Begin hoofdfunctie P10-F03
{
  KOGEL  kogel ;


  kogel.invoer_diameter()    ;    // de verlangde gegevens in
  kogel.invoer_soortgew()    ;


  kogel.bereken_gegevens()   ;    // Bereken afmetingen en het
  cout << kogel              ;    // gewicht en voer deze uit


  cout << "\n\nDruk op een toets:" << flush ;
  getch()  ;
  return 0 ;                     // Einde hoofdfunctie P10-F03
}


/************************************************************/
/*   Element-functies van klasse KOGEL          (P10-F03)   */
/************************************************************/


void KOGEL::invoer_diameter (void)
{
  cout << "\nVoer de diameter van de kogel in:             " ;
  cin  >> diameter ;
}

/************************************************************/


void KOGEL::invoer_soortgew (void)
{
  cout << "\nVoer het soortelijk gewicht van de kogel in:  " ;
  cin  >> soortgew ;
}

/************************************************************/


void KOGEL::bereken_gegevens (void)
{
  omtrek   = PI       * diameter ;
  opprvlak = omtrek   * diameter ;
  volume   = opprvlak * diameter / 6 ;
  gewicht  = volume   * soortgew ;
}

/************************************************************/


void KOGEL::operator << (ostream &OS)
{
  OS << "\n\n\nDe kogel heeft de volgende afmetingen: " ;
  OS << "\n  Diameter    : " << diameter ;
  OS << "\n  Omtrek      : " << omtrek   ;
  OS << "\n  Oppervlakte : " << opprvlak ;
  OS << "\n  Volume      : " << volume   ;
  OS << "\n" ;
  OS << "\n  Soort. gew. : " << soortgew ;
  OS << "\n  Gewicht     : " << gewicht  ;
}
