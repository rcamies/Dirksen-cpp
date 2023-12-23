
/************************************************************/
/*   P07-F03A    Overdracht van referenties naar een grote  */
/*               array, zowel naar als vanuit een functie   */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

#define  OMVANG 200
#define  AANTAL 10


class Enorm                                // Klasse-definitie
{
  public:   int  Tabel[OMVANG] ;
} ;


void  Vullen (Enorm& , int) ;  // Functie-prototypes: dit zijn
void  Drukaf (Enorm&) ;        //    dus geen element-functies



using namespace std; 

int main (void)                 // Begin hoofdfunctie P07-F03A
{
  Enorm  eerste[AANTAL] ;      //  Variabele bestaande uit een
  int    i              ;      // tabel van 10 klasse-objecten




  for (i=0 ; i<AANTAL ; i++)               // Aanroepen van de
    Vullen (eerste[i] , 3) ;               // functie 'vullen'
                                           // voor elk van de
  cout << "EERSTE gevuld met 3:  " ;       // klasse-objecten,
  Drukaf (eerste[6]) ;                     // gevolgd door een
                                           // controle-afdruk


  for (i=0 ; i<AANTAL ; i++)               // Aanroepen van de
    Vullen (eerste[i] , 5) ;               // functie 'vullen'
                                           // voor elk van de
  cout << "EERSTE gevuld met 5:  " ;       // klasse-objecten,
  Drukaf (eerste[6]) ;                     // gevolgd door een
                                           // controle-afdruk


  cout << "\nDruk op een toets:" << flush ;
  getch () ;
  return 0 ;
}                               // Einde hoofdfunctie P07-F03A



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
/*   Drukaf     Geeft de waarden van de elementen van een   */
/*              klasse-object weer op het beeldscherm       */
/************************************************************/

void Drukaf (Enorm &blok)
{
  int  i ;

  for (i=0 ; i<8 ; i++)                  // Alleen de eerste 8
    cout << blok.Tabel[i] << "  " ;      // waarden worden op
  cout << endl << endl ;                 // scherm weergegeven
}
