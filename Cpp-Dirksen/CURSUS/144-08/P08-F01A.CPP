
/************************************************************/
/*   P08-F01A        Eerste test-programma van opdracht 1   */
/*                                                          */
/*                   Kopieren van een zeer grote array      */
/*                   door middel van waarde-overdrachten    */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met getch en putch

#define  GROOTTE 25000       // Aantal elementen van de array
#define  HERHAAL 50000       // Aantal overdracht-acties


class Tabel                                // Klasse-definitie
{
  private: int tabel[GROOTTE] ;

  public:  void Vuleerste (void)          ; // element-functie
           void Vultweede (Tabel &eerste) ; // element-functie
           void Weergeven (void)          ; // element-functie

} ;                                  // Einde klasse-definitie



using namespace std; 

int main (void)                 // Begin hoofdfunctie P08-F01A
{
  Tabel  Eerste , Tweede ;       // 2 klasse-objecten, elk met
  int    hh              ;       // 2500 gegevenselementen



  cout << "Snelheidsvergelijking:     Eerste test\n\n"    ;
  cout << HERHAAL << " maal kopieren van een array met "  ;
  cout << GROOTTE << " elementen via waarde-overdrachten" ;
  cout << endl << endl ;


  Eerste.Vuleerste() ;

  cout << "\nTabel EERSTE is gevuld met:   " ;
  Eerste.Weergeven() ;

  cout << "Druk op een toets en registreer de tijd " << endl ;
  cout << "tot de eerstvolgende beeldscherm-melding" << endl ;
  getch() ;


  for (hh=0 ; hh<HERHAAL ; hh++)    // Waarde-overdrachten uit
    Tweede.Vultweede (Eerste) ;     // "Eerste" naar "Tweede"

  cout << "\nTabel TWEEDE is gevuld met:   " ;
  Tweede.Weergeven() ;

  cout << "Druk op een toets: " << flush ;
  getch () ;
  return 0 ;
}                               // Einde hoofdfunctie P08-F01A



/************************************************************/
/*   P08-F01A          Element-functies voor klasse Tabel   */
/************************************************************/


void Tabel::Vuleerste (void)
{
  int  i ;                                // Vul elementen van
  for (i=0 ; i<GROOTTE ; i++)             // het klasse-object
    tabel[i] = i ;                        //  "Eerste" met een
} ;                                       // nieuwe int-waarde


void Tabel::Vultweede (Tabel &Eerste)
{
  int  i ;                                // Kopieer alle
  for (i=0 ; i<GROOTTE ; i++)             // element-waarden
    tabel[i] = Eerste.tabel[i];           // vanuit "Eerste"
} ;                                       // naar "Tweede"


void Tabel::Weergeven (void)
{
  int  i ;
  for (i=0 ; i<8 ; i++)                  // Alleen de eerste 8
    cout << tabel[i] << "  ";            // waarden worden op
  cout << endl << endl ;                 // scherm weergegeven
} ;
