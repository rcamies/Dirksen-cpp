
/************************************************************/
/*   P13-F02     Les 144-13          Uitwerking opdracht 1  */
/*                                                          */
/*               Berekent verschillende afmetingen en het   */
/*               gewicht van 3 kogels bij gegeven diameter  */
/*               en soortelijk gewicht.     (late binding)  */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch


#define  PI 3.14159
#define  MaxKogel 3


class KOGEL                   // Definitie van de klasse KOGEL
{
  private: float  diameter , omtrek  ;
           float  opprvlak , volume  ;
           float  soortgew , gewicht ;

  public:  KOGEL (float , float)      ;         // Constructor
           void  Bereken_Kogel (void) ;         // Element-
           void  Uitvoer_Kogel (void) ;         //    functies
} ;


using namespace std; 

int main (void)                  // Begin hoofdfunctie P13-F02
{
  KOGEL  *kogel[MaxKogel] ;       // Lijst met klasse-objecten
  int    i                ;       // Hulp-variabele   (teller)

  kogel[0] = new KOGEL (1.1 , 5.6) ;      // Initialisatie van
  kogel[1] = new KOGEL (2.2 , 7.5) ;      // 3 klasse-objecten
  kogel[2] = new KOGEL (3.3 , 6.7) ;

  cout << (char)033 << "[2J"  ;             // Wis beeldscherm


  for (i=0 ; i<MaxKogel ; i++)        // Geef de afmetingen en
  {                                   // het gewicht van alle
    cout << "\n\nKogel " << i+1 ;     // kogel-objecten weer
    cout << ":\n========\n"     ;     // op het beeldscherm
    kogel[i] -> Uitvoer_Kogel() ;

    cout << "\n\n\nDruk op een toets:" << flush ;
    getch() ;
  } ;

  return 0 ;                     // Einde hoofdfunctie P13-F02
}


/************************************************************/
/*   Element-functies van klasse  KOGEL         (P13-F02)   */
/************************************************************/


KOGEL::KOGEL (float Dia , float Sgw)            // Constructor
{
  diameter = Dia  ;                   // Initialiseert de
  soortgew = Sgw  ;                   // 6 gegevenselementen
  Bereken_Kogel() ;                   // van een klasse-object
}


void KOGEL::Bereken_Kogel (void)
{
  omtrek   = PI       * diameter     ;
  opprvlak = omtrek   * diameter     ;
  volume   = opprvlak * diameter / 6 ;
  gewicht  = soortgew * volume       ;
}


void KOGEL::Uitvoer_Kogel (void)
{
  cout << "\nDeze kogel heeft de volgende afmetingen: " ;
  cout << "\n  Diameter    : " << diameter ;
  cout << "\n  Omtrek      : " << omtrek   ;
  cout << "\n  Oppervlakte : " << opprvlak ;
  cout << "\n  Volume      : " << volume   ;
  cout << "\nDeze kogel kent de volgende gewichten:" ;
  cout << "\n  Soort. gew. : " << soortgew ;
  cout << "\n  Gewicht     : " << gewicht  ;
}
