
/************************************************************/
/*   P11-F07B   Les 144-11        Uitwerking oefenopgave 1  */
/*                                                          */
/*              Leest de lengte van een blok uit Serie 33L  */
/*              in en berekent daaruit het topvlak, volume  */
/*              en gewicht.                                 */
/*              Er wordt geen overerving toegepast.         */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators
#include <dirksen.h>        // Bibliotheek voor Dirksen-cursus


class SERIE33L                 // Definitie van de basisklasse
{
  private: float Soortgew                  ;
           int   Hoogte , Breedte , Lengte ;

  public:  SERIE33L (void)            ;         // Constructor
           void  Invoer_Lengte (void) ;         // Element-
           int   Geef_Topvlak  (void) ;         //    functies
           int   Geef_Hoogte   (void) ;
           float Geef_Soortgew (void) ;
} ;


class MODEL33L            // Definitie van de afgeleide klasse
{
  private: SERIE33L Blok33L ;
           int      Topvlak ;
           long int Volume  ;
           float    Gewicht ;

  public:  void  Invoer_Lengte (void) ;            // Element-
           void  Bereken_Blok  (void) ;            // functies
           void  Uitvoer_Blok  (void) ;
} ;



using namespace std; 

int main (void)                 // Begin hoofdfunctie P11-F07B
{
  MODEL33L  blok ;


  WisBeeld             ;          // Wis beeldscherm en voer
  blok.Invoer_Lengte() ;          // de lengte van het blok in


  blok.Bereken_Blok() ;           // Bereken afmetingen en het
  blok.Uitvoer_Blok() ;           // gewicht en voer deze uit


  PauzeStop ;
}                               // Einde hoofdfunctie P11-F07B


/************************************************************/
/*   Element-functies van klassen  SERIE33L  en  MODEL33L   */
/************************************************************/


SERIE33L::SERIE33L (void)                       // Constructor
{
  Soortgew = 0.35 ;
  Hoogte   = 30   ;
  Breedte  = 30   ;
}


void SERIE33L::Invoer_Lengte (void)
{
  cout << "Serie 33L:  vaste hoogte en breedte van " ;
  cout << Hoogte << " cm \n\n"      ;
  cout << "De gewenste lengte is: " ;
  cin  >> Lengte                    ;
}


int SERIE33L::Geef_Topvlak (void)
{
  return Breedte * Lengte ;
}


int SERIE33L::Geef_Hoogte (void)
{
  return Hoogte ;
}


float SERIE33L::Geef_Soortgew (void)
{
  return Soortgew ;
}


void MODEL33L::Invoer_Lengte (void)     // Invoeren van lengte
{                                       // ten behoeve van de
  Blok33L.Invoer_Lengte() ;             // basisklasse
}


void MODEL33L::Bereken_Blok (void)
{
  Topvlak = Blok33L.Geef_Topvlak()                          ;
  Volume  = (long int) Topvlak * Blok33L.Geef_Hoogte()      ;
  Gewicht = (float) Volume * Blok33L.Geef_Soortgew() / 1000 ;
}


void MODEL33L::Uitvoer_Blok (void)
{
  cout.setf(ios::fixed)                                ;
  cout << "\n\nBij deze lengte geldt voor het blok:"   ;
  cout << "\n------------------------------------\n"   ;
  cout << "\nTopvlak:" << setw(8) << Topvlak << " cm2" ;
  cout << "\nVolume: " << setw(8) << Volume  << " cm3" ;
  cout << "\nGewicht:" << setw(8) << setprecision(2)   ;
  cout << Gewicht << " kg"                             ;
}
