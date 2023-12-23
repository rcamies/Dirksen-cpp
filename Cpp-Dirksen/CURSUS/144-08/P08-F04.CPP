
/************************************************************/
/*   P08-F04             Testen van de functies  random()   */
/*                       en  randomize()    (van Borland)   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators
#include <stdlib.h>         // Standaard-bibliotheek (C / C++)

#define  OMVANG 50          // Aantal elementen van de tabel
#define  MAXWIL 99          // Maximale willekeurige waarde


using namespace std; 

int main (void)                  // Begin hoofdfunctie P08-F04
{
  int   tabel[OMVANG] ;     // Tabel voor willekeurige waarden
  int   i             ;     // Hulp-variabele (tel-waarde)


  
  srand( 0 );



  for (i=0 ; i<OMVANG ; i++)           // Vul de tabel met 50
  {                                    // willekeurige waarden
    tabel[i] = rand() % (MAXWIL+1) ;   
  }                                  


  cout << "De " << OMVANG << " willekeurige getallen zijn:" ;
  cout << endl ;


  for (i=0 ; i<OMVANG ; i++)         // Weergeven van de tabel
  {
    if (i % 10 == 0) cout << endl ;     // Nieuwe regel na 10
    cout << setw(5) << tabel[i]   ;     // weergegeven waarden
  }  


  cout << "\n\nDruk op een toets:" << flush ;
  getch () ;
  return 0 ;
}                                // Einde hoofdfunctie P08-F04
