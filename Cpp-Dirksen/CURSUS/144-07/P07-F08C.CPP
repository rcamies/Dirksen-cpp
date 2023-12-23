
/************************************************************/
/*   P07-F08C                 Uitwerking van oefenopgave 2  */
/*               Overdracht van referenties naar een grote  */
/*               array, zowel naar als vanuit een functie.  */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met getch en putch

#define  OMVANG 200
#define  AANTAL 10

using namespace std; 

class Enorm                                // Klasse-definitie
{
  private: int Tabel[OMVANG] ;

  public:  void Vullen (int waarde)         // element-functie
           {
             int  i ;                   // Alle 200 gegevens-
             for (i=0 ; i<OMVANG ; i++) // elementen worden
               Tabel[i] = waarde ;      // worden met dezelfde
           } ;                          // waarde gevuld

           void  Drukaf (void)              // element-functie
           {
             int  i ;
             for (i=0 ; i<8 ; i++)       // Alleen de eerste 8
               cout << Tabel[i] << "  "; // waarden worden op
             cout << endl ;              // scherm weergegeven
           } ;
} ;




int main (void)                 // Begin hoofdfunctie P07-F08C
{
  Enorm  eerste[AANTAL] ;      //  Variabele bestaande uit een
                               // tabel van 10 klasse-objecten
  int    i ;




  for (i=0 ; i<AANTAL ; i++)               // Aanroepen van de
  {                                        // functie 'Vullen'
    eerste[i].Vullen (i) ;                 // voor elk van de
    cout << "EERSTE [" << i << "]:  " ;    // klasse-objecten,
    eerste[i].Drukaf() ;                   // gevolgd door een
  } ;                                      // controle-afdruk


  cout << "\nDruk op een toets:" << flush ;
  getch () ;
  return 0 ;
}                               // Einde hoofdfunctie P07-F08C
