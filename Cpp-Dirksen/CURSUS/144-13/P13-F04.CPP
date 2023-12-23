
/************************************************************/
/*   P13-F04    Les 144-13          Uitwerking opdracht 2   */
/*                                                          */
/*              Initialiseert 7 blokken uit de series 33L   */
/*              en 44L. Berekent daaruit het topvlak, het   */
/*              volume en het gewicht van elk blok. Geeft   */
/*              vervolgens de kenmerken van die 7 blokken   */
/*              weer op het beeldscherm.   (late binding)   */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators


#define  MaxBlok 7          // Aantal blokken van Serie 33/44L


class BLOKKEN                  // Definitie van klasse BLOKKEN
{
  private: float    Soortgew , Gewicht ;
           int      Hoogte   , Breedte ;
           int      Lengte   , Topvlak ;
           long int Volume             ;

  public:  BLOKKEN (int , float , int) ;        // Constructor
           void  Bereken_Blok  (void)  ;        // Element-
           void  Uitvoer_Blok  (void)  ;        //    functies
} ;



using namespace std; 

int main (void)                  // Begin hoofdfunctie P13-F04
{
  BLOKKEN  *blok [MaxBlok] ;    // Lijst met 7 klasse-objecten
  int      i               ;    // Hulp-variabele     (teller)



  blok[0] = new BLOKKEN (30 , 0.35 , 30) ;     // Initialiseer
  blok[1] = new BLOKKEN (30 , 0.35 , 45) ;     // de 4 blokken
  blok[2] = new BLOKKEN (30 , 0.35 , 60) ;     // in Serie 33L
  blok[3] = new BLOKKEN (30 , 0.35 , 75) ;
  blok[4] = new BLOKKEN (40 , 0.31 , 40) ;     // Initialiseer
  blok[5] = new BLOKKEN (40 , 0.31 , 60) ;     // de 3 blokken
  blok[6] = new BLOKKEN (40 , 0.31 , 80) ;     // in Serie 44L


  for (i=0 ; i<MaxBlok ; i++)     // Bereken de afmetingen en
  {                               // het gewicht van 7 blokken
    blok[i] -> Bereken_Blok() ;   // van 2 series en geef deze
    blok[i] -> Uitvoer_Blok() ;   // weer op het beeldscherm

    cout << "\n\n\nDruk op een toets:" << flush ;
    getch()  ;
  }

  return 0 ;                     // Einde hoofdfunctie P13-F04
}



/************************************************************/
/*   Element-functies van klasse  BLOKKEN       (P13-F04)   */
/************************************************************/


BLOKKEN::BLOKKEN (int Afm , float Sgw , int Len)
{
  Soortgew = Sgw ;
  Hoogte   = Afm ;
  Breedte  = Afm ;
  Lengte   = Len ;
}


void BLOKKEN::Bereken_Blok (void)
{
  Topvlak = Breedte * Lengte                 ;
  Volume  = (long int) Topvlak * Hoogte      ;
  Gewicht = (float) Volume * Soortgew / 1000 ;
}


void BLOKKEN::Uitvoer_Blok (void)
{
  cout.setf(ios::fixed) ;

  cout << "\n\nStandaard-afmetingen (HxBxL):  " << Hoogte ;
  cout << " x " << Breedte << " x " << Lengte << " cm"    ;

  cout << "\n\nBij deze lengte geldt voor het blok:"   ;
  cout << "\n------------------------------------\n"   ;
  cout << "\nTopvlak:" << setw(8) << Topvlak << " cm2" ;
  cout << "\nVolume: " << setw(8) << Volume  << " cm3" ;
  cout << "\nGewicht:" << setw(8) << setprecision(2)   ;
  cout << Gewicht << " kg"                             ;
}
