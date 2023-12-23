
/************************************************************/
/*   P07-F08A                 Uitwerking van oefenopgave 1  */
/*               Overdracht van referenties naar een grote  */
/*               array, zowel naar als vanuit een functie.  */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met getch en putch

#define  OMVANG 200
#define  AANTAL 10


class Enorm                                // Klasse-definitie
{
  private: int Tabel[OMVANG] ;

  public:  void  Vullen (Enorm& , int) ;    // element-functie
           void  Drukaf (Enorm&) ;          // element-functie
} ;



using namespace std; 

int main (void)                 // Begin hoofdfunctie P07-F08A
{
  Enorm  eerste[AANTAL] ;      //  Variabele bestaande uit een
  int    i              ;      // tabel van 10 klasse-objecten




  for (i=0 ; i<AANTAL ; i++)               // Aanroepen van de
    eerste[i].Vullen (eerste[i] , 3) ;     // functie 'Vullen'
                                           // voor elk van de
  cout << "EERSTE gevuld met 3:  " ;       // klasse-objecten,
  eerste[6].Drukaf (eerste[6]) ;           // gevolgd door een
                                           // controle-afdruk


  for (i=0 ; i<AANTAL ; i++)               // Aanroepen van de
    eerste[i].Vullen (eerste[i] , 5) ;     // functie 'Vullen'
                                           // voor elk van de
  cout << "EERSTE gevuld met 5:  " ;       // klasse-objecten,
  eerste[6].Drukaf (eerste[6]) ;           // gevolgd door een
                                           // controle-afdruk


  cout << "\nDruk op een toets:" << flush ;
  getch () ;
  return 0 ;
}                               // Einde hoofdfunctie P07-F08A



/************************************************************/
/*   Vullen           Element-functie van de klasse Enorm   */
/*              Vult alle elementen van een klasse-object   */
/*              met de als parameter ontvangen int-waarde   */
/************************************************************/

void Enorm::Vullen (Enorm &blok , int waarde)
{
  int  i ;

  for (i=0 ; i<OMVANG ; i++)     // Alle 200 gegevenselementen
    blok.Tabel[i] = waarde ;     // worden met dezelfde waarde
}                                // gevuld


/************************************************************/
/*   Drukaf           Element-functie van de klasse Enorm   */
/*              Geeft de waarden van de elementen van een   */
/*              klasse-object weer op het beeldscherm       */
/************************************************************/

void Enorm::Drukaf (Enorm &blok)
{
  int  i ;

  for (i=0 ; i<8 ; i++)                  // Alleen de eerste 8
    cout << blok.Tabel[i] << "  " ;      // waarden worden op
  cout << endl << endl ;                 // scherm weergegeven
}
