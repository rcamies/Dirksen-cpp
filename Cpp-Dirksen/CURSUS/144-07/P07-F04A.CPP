
/************************************************************/
/*   P07-F04A    Overdracht van referenties naar een grote  */
/*               array, zowel naar als vanuit een functie   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

#define  OMVANG 200
#define  AANTAL 10

class Enorm                                // Klasse-definitie
{
  public:  int Tabel[OMVANG] ;
} ;

void   Vullen (Enorm& , int) ; // Functie-prototypes: dit zijn
Enorm& Zetten (Enorm& , int) ; //    dus geen element-functies
void   Drukaf (Enorm&)       ;



using namespace std;

int main (void)                 // Begin hoofdfunctie P07-F04A
{
  Enorm  eerste[AANTAL] ;      // Variabelen bestaande uit een
  Enorm  tweede[AANTAL] ;      // tabel van 10 klasse-objecten
  int    i              ;



  for (i=0 ; i<AANTAL ; i++)               // Aanroepen van de
  {                                        // functie 'Vullen'
    Vullen (eerste[i] , 1) ;               // voor elk van de
    Vullen (tweede[i] , 2) ;               // klasse-objecten,
  } ;                                      // gevolgd door een
  cout << "EERSTE gevuld met 1:  " ;       // controle-afdruk
  Drukaf (eerste[6]) ;
  cout << "TWEEDE gevuld met 2:  " ;
  Drukaf (tweede[6]) ;


  for (i=0 ; i<AANTAL ; i++)               // Aanroepen van de
    tweede[i] = Zetten (eerste[i] , 3) ;   // functie 'Zetten'
                                           // voor elk van de
  cout << "\nEERSTE gevuld met 3:  " ;     // klasse-objecten,
  Drukaf (eerste[6]) ;                     // gevolgd door een
  cout << "en TWEEDE bevat dan:  " ;       // controle-afdruk
  Drukaf (tweede[6]) ;


  for (i=0 ; i<AANTAL ; i++)               // Aanroepen van de
    Vullen (eerste[i] , 4) ;               // functie 'Vullen'
                                           // voor elk van de
  cout << "\nEERSTE gevuld met 4:  " ;     // klasse-objecten,
  Drukaf (eerste[6]) ;                     // gevolgd door een
  cout << "en TWEEDE bevat dan:  " ;       // controle-afdruk
  Drukaf (tweede[6]) ;


  cout << "\nDruk op een toets:" << flush ;
  getch () ;
  return 0 ;
}                               // Einde hoofdfunctie P07-F04A



/************************************************************/
/*   Vullen     Vult alle elementen van een klasse-object   */
/*              met de als parameter ontvangen int-waarde   */
/************************************************************/

void Vullen (Enorm &blok , int waarde)
{
  int  i ;

  for (i=0 ; i<OMVANG ; i++)     // Alle 200 gegevenselementen
    blok.Tabel[i] = waarde ;     // worden met dezelfde waarde
}                                // gevuld


/************************************************************/
/*   Zetten     Vult alle elementen van een klasse-object   */
/*              met de als parameter ontvangen int-waarde   */
/*              en geeft de ontvangen referentie terug      */
/*              als functie-parameter                       */
/************************************************************/

Enorm& Zetten (Enorm &blok , int waarde)
{
  int  i ;
                                 // Alle 200 gegevenselementen
  for (i=0 ; i<OMVANG ; i++)     // worden met dezelfde waarde
    blok.Tabel[i] = waarde ;     // gevuld

  return blok   ;     // Teruggave van de ontvangen referentie
}                     // als functie-parameter


/************************************************************/
/*   Drukaf     Geeft de waarden van de elementen van een   */
/*              klasse-object weer op het beeldscherm       */
/************************************************************/

void Drukaf (Enorm &blok)
{
  int  i ;

  for (i=0 ; i<8 ; i++)                  // Alleen de eerste 8
    cout << blok.Tabel[i] << "  " ;      // waarden worden op
  cout << endl ;                         // scherm weergegeven
}
