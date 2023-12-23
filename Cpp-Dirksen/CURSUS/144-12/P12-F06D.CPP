
/************************************************************/
/*   P12-F06D   Les 144-12       Uitwerking oefenopgave 2   */
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


#define  MaxBlok 7          // Aantal blokken van Serie 33/44L


class BASISafm                 // Definitie van de basisklasse
{
  private: float Soortgew                  ;
           int   Hoogte , Breedte , Lengte ;

  public:  void  Init_Basis (int , float , int) ;  // Element-
           int   Geef_Topvlak  (void) ;            // functies
           int   Geef_Hoogte   (void) ;
           float Geef_Soortgew (void) ;
           void  Uitvoer_Basis (void) ;
} ;


class MODEL34L: public BASISafm            // Definitie van de
{                                          // afgeleide klasse
  private: int      Topvlak ;              // met overerving
           long int Volume  ;              // van basisklasse
           float    Gewicht ;

  public:  MODEL34L (int , float , int) ;       // Constructor
           void  Bereken_Blok  (void)   ;       // Element-
           void  Uitvoer_Blok  (void)   ;       //    functies
} ;



using namespace std; int main (void)                 // Begin hoofdfunctie P12-F06D
{
  MODEL34L *blok34L [MaxBlok] ; // Lijst met 7 klasse-objecten
  int       i                 ; // Hulp-variabele     (teller)


  cout.setf(ios::fixed)      ;

  blok34L[0] = new MODEL34L (30 , 0.35 , 30) ; // Initialiseer
  blok34L[1] = new MODEL34L (30 , 0.35 , 45) ; // de 4 blokken
  blok34L[2] = new MODEL34L (30 , 0.35 , 60) ; // in Serie 33L
  blok34L[3] = new MODEL34L (30 , 0.35 , 75) ;
  blok34L[4] = new MODEL34L (40 , 0.31 , 40) ; // Initialiseer
  blok34L[5] = new MODEL34L (40 , 0.31 , 60) ; // de 3 blokken
  blok34L[6] = new MODEL34L (40 , 0.31 , 80) ; // in Serie 44L


  for (i=0 ; i<MaxBlok ; i++)     // Bereken de afmetingen en
  {                               // het gewicht van 7 blokken
    blok34L[i]->Bereken_Blok() ;  // van 2 series en geef deze
    blok34L[i]->Uitvoer_Blok() ;  // weer op het beeldscherm

    cout << "\n\n\nDruk op een toets:" << flush ;
    getch()  ;
  }

  return 0 ;                    // Einde hoofdfunctie P12-F06D
}



/************************************************************/
/*   Element-functies van basisklasse  BASISafm             */
/************************************************************/


void BASISafm::Init_Basis (int Afm , float Sgw , int Len)
{
  Soortgew = Sgw ;
  Hoogte   = Afm ;
  Breedte  = Afm ;
  Lengte   = Len ;
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
/*   Element-functies van afgeleide klasse  MODEL34L        */
/************************************************************/


MODEL34L::MODEL34L (int Afm , float Sgw , int Len)
{                                           // Constructor
  Init_Basis (Afm , Sgw , Len) ;            // ten behoeve van
}                                           // de basisklasse


void MODEL34L::Bereken_Blok (void)
{
  Topvlak = Geef_Topvlak()                          ;
  Volume  = (long int) Topvlak * Geef_Hoogte()      ;
  Gewicht = (float) Volume * Geef_Soortgew() / 1000 ;
}


void MODEL34L::Uitvoer_Blok (void)
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