
/************************************************************/
/*   P12-F06A   Les 144-12   Programma voor oefenopgave 1   */
/*                                                          */
/*              Initialiseert 7 blokken uit de series 33L   */
/*              en 44L. Berekent daaruit het topvlak, het   */
/*              volume en het gewicht van elk blok. Geeft   */
/*              vervolgens de kenmerken van die 7 blokken   */
/*              weer op het beeldscherm.                    */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators


#define  Max33L  4             // Aantal blokken van Serie 33L
#define  Max44L  3             // Aantal blokken van Serie 44L


class BASISafm                 // Definitie van de basisklasse
{
  private: float Soortgew                  ;
           int   Hoogte , Breedte , Lengte ;

  public:  void  Init_Basis (int , float) ;     // Element-
           void  Init_Lengte   (int)      ;     //    functies
           int   Geef_Topvlak  (void)     ;
           int   Geef_Hoogte   (void)     ;
           float Geef_Soortgew (void)     ;
           void  Uitvoer_Basis (void)     ;
} ;


class MODEL33L: public BASISafm            // Definitie van de
{                                          // afgeleide klasse
  private: int      Topvlak ;              // met overerving
           long int Volume  ;              // van basisklasse
           float    Gewicht ;

  public:  MODEL33L (void)            ;    // Constructor 33-1
           MODEL33L (int)             ;    // Constructor 33-2
           void  Bereken_Blok  (void) ;    // Element-
           void  Uitvoer_Blok  (void) ;    //         functies
} ;


class MODEL44L: public BASISafm            // Definitie van de
{                                          // afgeleide klasse
  private: int      Topvlak ;              // met overerving
           long int Volume  ;              // van basisklasse
           float    Gewicht ;

  public:  MODEL44L (void)            ;    // Constructor 44-1
           MODEL44L (int)             ;    // Constructor 44-2
           void  Bereken_Blok  (void) ;    // Element-
           void  Uitvoer_Blok  (void) ;    //         functies
} ;



using namespace std; 

int main (void)                 // Begin hoofdfunctie P12-F06A
{
  MODEL33L  blok33L [Max33L] ;    // Lijst met klasse-objecten
  MODEL44L  blok44L [Max44L] ;    // Lijst met klasse-objecten
  int       i                ;    // Hulp-variabele   (teller)

  cout << (char)033 << "[2J" ;    // Wis beeldscherm
  cout.setf(ios::fixed)      ;

  blok33L[0] = MODEL33L (30) ;    // Initialiseer de 4 blokken
  blok33L[1] = MODEL33L (45) ;    //       van klasse MODEL33L
  blok33L[2] = MODEL33L (60) ;
  blok33L[3] = MODEL33L (75) ;

  blok44L[0] = MODEL44L (40) ;    // Initialiseer de 3 blokken
  blok44L[1] = MODEL44L (60) ;    //       van klasse MODEL44L
  blok44L[2] = MODEL44L (80) ;


  for (i=0 ; i<Max33L ; i++)      // Bereken de afmetingen en
  {                               // het gewicht van 4 blokken
    blok33L[i].Bereken_Blok() ;   // in Serie 33L en geef deze
    blok33L[i].Uitvoer_Blok() ;   // weer op het beeldscherm

    cout << "\n\n\nDruk op een toets:" << flush ;
    getch()  ;
  }


  for (i=0 ; i<Max44L ; i++)      // Bereken de afmetingen en
  {                               // het gewicht van 3 blokken
    blok44L[i].Bereken_Blok() ;   // in Serie 44L en geef deze
    blok44L[i].Uitvoer_Blok() ;   // weer op het beeldscherm

    cout << "\n\n\nDruk op een toets:" << flush ;
    getch()  ;
  }

  return 0 ;                    // Einde hoofdfunctie P12-F06A
}


/************************************************************/
/*   Element-functies van basisklasse  BASISafm             */
/************************************************************/


void BASISafm::Init_Basis (int Afm , float Sgw)
{
  Soortgew = Sgw ;
  Hoogte   = Afm ;
  Breedte  = Afm ;
}


void BASISafm::Init_Lengte (int Len)
{
  Lengte = Len ;
}


int BASISafm::Geef_Topvlak (void)
{
  return Breedte * Lengte ;
}


int BASISafm::Geef_Hoogte (void)
{
  return Hoogte ;
}


float BASISafm::Geef_Soortgew (void)
{
  return Soortgew ;
}


void BASISafm::Uitvoer_Basis (void)
{
  cout << "\n\nStandaard-afmetingen (HxBxL):  " << Hoogte ;
  cout << " x " << Breedte << " x " << Lengte << " cm"    ;
}


/************************************************************/
/*   Element-functies van beide afgeleide klassen           */
/************************************************************/


MODEL33L::MODEL33L (void)                  // Constructor 33-1
{                                          // ten behoeve van
  Topvlak = 0 ;                            // afgeleide klasse
}


MODEL44L::MODEL44L (void)                  // Constructor 44-1
{                                          // ten behoeve van
  Topvlak = 0 ;                            // afgeleide klasse
}


MODEL33L::MODEL33L (int Len)               // Constructor 33-2
{                                          // ten behoeve van
  Init_Basis (30 , 0.35) ;                 // de basisklasse
  Init_Lengte (Len)      ;
}


MODEL44L::MODEL44L (int Len)               // Constructor 44-2
{                                          // ten behoeve van
  Init_Basis (40 , 0.31) ;                 // de basisklasse
  Init_Lengte (Len) ;
}


void MODEL33L::Bereken_Blok (void)
{
  Topvlak = Geef_Topvlak()                          ;
  Volume  = (long int) Topvlak * Geef_Hoogte()      ;
  Gewicht = (float) Volume * Geef_Soortgew() / 1000 ;
}


void MODEL44L::Bereken_Blok (void)
{
  Topvlak = Geef_Topvlak()                          ;
  Volume  = (long int) Topvlak * Geef_Hoogte()      ;
  Gewicht = (float) Volume * Geef_Soortgew() / 1000 ;
}


void MODEL33L::Uitvoer_Blok (void)
{
  Uitvoer_Basis() ;
  cout << "\n\nBij deze lengte geldt voor het blok:"   ;
  cout << "\n------------------------------------\n"   ;
  cout << "\nTopvlak:" << setw(8) << Topvlak << " cm2" ;
  cout << "\nVolume: " << setw(8) << Volume  << " cm3" ;
  cout << "\nGewicht:" << setw(8) << setprecision(2)   ;
  cout << Gewicht << " kg"                             ;
}


void MODEL44L::Uitvoer_Blok (void)
{
  Uitvoer_Basis() ;
  cout << "\n\nBij deze lengte geldt voor het blok:"   ;
  cout << "\n------------------------------------\n"   ;
  cout << "\nTopvlak:" << setw(8) << Topvlak << " cm2" ;
  cout << "\nVolume: " << setw(8) << Volume  << " cm3" ;
  cout << "\nGewicht:" << setw(8) << setprecision(2)   ;
  cout << Gewicht << " kg"                             ;
}
