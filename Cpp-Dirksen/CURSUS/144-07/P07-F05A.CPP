
/************************************************************/
/*   P07-F05A    Overdracht van referenties naar een grote  */
/*               klasse, zowel naar als vanuit een functie  */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met getch en putch

#define  OMVANG 200
#define  AANTAL 10


class Enorm                                // Klasse-definitie
{
  public:  int Tabel[OMVANG] ;
} ;

class Massa                                // Klasse-definitie
{
  public:  Enorm  Veld1 ;
           float  Veld2 ;
           Enorm  Veld3 ;
} ;

void   Vullen (Massa& , int) ; // Functie-prototypes: dit zijn
Massa& Zetten (Massa& , int) ; //    dus geen element-functies
void   Drukaf (Massa&)       ;



using namespace std; 

int main (void)                 // Begin hoofdfunctie P07-F05A
{
  Massa  eerste ;               // Elke variabele bestaat uit
  Massa  tweede ;               // een object van klasse Massa
  int    i      ;



  Vullen (eerste , 1) ;                   // Vullen van alle
  Vullen (tweede , 2) ;                   // gegevenselementen
                                          // van de twee
  cout << "EERSTE gevuld met 1:  " ;      // klasse-objecten
  Drukaf (eerste) ;                       // met beginwaarden,
  cout << "TWEEDE gevuld met 2:  " ;      // gevolgd door een
  Drukaf (tweede) ;                       // controle-afdruk


  tweede = Zetten (eerste , 3) ;          // Aanroepen van de
                                          // functie 'Zetten':
  cout << "\nEERSTE gevuld met 3:  " ;    // hier komt dus een
  Drukaf (eerste) ;                       // referentie naar
  cout << "en TWEEDE bevat dan:  " ;      // 'tweede' vanuit
  Drukaf (tweede) ;                       // de functie terug

  
  Vullen (eerste , 4) ;                   // Vullen van alle
                                          // gegevenselementen
  cout << "\nEERSTE gevuld met 4:  " ;    // van alleen klasse
  Drukaf (eerste) ;                       // object 'eerste',
  cout << "en TWEEDE bevat dan:  " ;      // gevolgd door een
  Drukaf (tweede) ;                       // controle-afdruk

  cout << "\nDruk op een toets:" << flush ;
  getch () ;
  return 0 ;
}                               // Einde hoofdfunctie P07-F05A



/************************************************************/
/*   Vullen     Vult alle elementen van een klasse-object   */
/*              met de als parameter ontvangen int-waarde   */
/************************************************************/

void Vullen (Massa &blok , int waarde)
{
  int  i ;

  for (i=0 ; i<OMVANG ; i++)           // De gegevenselementen
  {                                    // van Veld1 en Veld3
    blok.Veld1.Tabel[i] = waarde ;     // worden met dezelfde
    blok.Veld3.Tabel[i] = waarde ;     // int-waarde gevuld
  } ;                                  // Voor Veld2 wordt uit
  blok.Veld2 = (float) 1.1 * waarde ;  // die int-waarde een
}                                      // float-waarde gevormd


/************************************************************/
/*   Zetten     Vult alle elementen van een klasse-object   */
/*              met de als parameter ontvangen int-waarde   */
/*              en geeft de ontvangen referentie terug      */
/*              als functie-parameter                       */
/************************************************************/

Massa& Zetten (Massa &blok , int waarde)
{
  int  i ;
                                       // De gegevenselementen
  for (i=0 ; i<OMVANG ; i++)           // van Veld1 en Veld3
  {                                    // worden met dezelfde
    blok.Veld1.Tabel[i] = waarde ;     // int-waarde gevuld
    blok.Veld3.Tabel[i] = waarde ;     // Voor Veld2 wordt uit
  } ;                                  // die int-waarde een
  blok.Veld2 = (float) 1.1 * waarde ;  // float-waarde gevormd

  return blok ;       // Teruggave van de ontvangen referentie
}                     // als functie-parameter


/************************************************************/
/*   Drukaf     Geeft de waarden van de elementen van een   */
/*              klasse-object weer op het beeldscherm       */
/************************************************************/

void Drukaf (Massa &blok)
{
  int  i ;
                                         // Alleen de eerste 8
  for (i=0 ; i<8 ; i++)                  // waarden worden op
    cout << blok.Veld1.Tabel[i] << " " ; // scherm weergegeven

  cout << " " << blok.Veld2 << "  " ;

  for (i=0 ; i<8 ; i++)                  // Alleen de eerste 8
    cout << blok.Veld3.Tabel[i] << " " ; // waarden worden op
                                         // scherm weergegeven
  cout << endl ;
}
