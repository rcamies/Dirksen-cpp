
/************************************************************/
/*   P10-F02     Berekent verschillende afmetingen en het   */
/*               gewicht van een kogel na het invoeren van  */
/*               de diameter en het soortelijk gewicht.     */
/*               Uitvoer verloopt via een element-functie.  */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

#define  PI 3.14159


class KOGEL                                // Klasse-definitie
{
  private:  float  diameter , soortgew ;
            float  omtrek   , opprvlak ;
            float  volume   , gewicht  ;

  public:   void  bereken_gegevens (void) ;        // Element-
            void  invoer_diameter  (void) ;        // functies
            void  invoer_soortgew  (void) ;
            void  print (void) ;
} ;


using namespace std; 

int main (void)                  // Begin hoofdfunctie P10-F02
{
  KOGEL  kogel ;


  cout << (char)033 << "[2J" ;    // Wis beeldscherm en voer
  kogel.invoer_diameter()    ;    // de verlangde gegevens in
  kogel.invoer_soortgew()    ;


  kogel.bereken_gegevens()   ;    // Bereken afmetingen en het
  kogel.print()              ;    // gewicht en voer deze uit


  cout << "\n\nDruk op een toets:" << flush ;
  getch()  ;
  return 0 ;                     // Einde hoofdfunctie P10-F02
}


/************************************************************/
/*   Element-functies van klasse KOGEL          (P10-F02)   */
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


void KOGEL::print (void)
{
  cout << "\n\n\nDe kogel heeft de volgende afmetingen: " ;
  cout << "\n  Diameter    : " << diameter ;
  cout << "\n  Omtrek      : " << omtrek   ;
  cout << "\n  Oppervlakte : " << opprvlak ;
  cout << "\n  Volume      : " << volume   ;
  cout << "\n" ;
  cout << "\n  Soort. gew. : " << soortgew ;
  cout << "\n  Gewicht     : " << gewicht  ;
}
