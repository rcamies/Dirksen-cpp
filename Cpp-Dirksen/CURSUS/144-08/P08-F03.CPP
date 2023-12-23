
/************************************************************/
/*   P08-F03             Testen van de standaard-functies   */
/*                       rand()  en  srand()   (ANSI-C++)   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators
#include <stdlib.h>         // Standaard-bibliotheek (C / C++)

#define  OMVANG 50          // Aantal elementen van de tabel
#define  MAXWIL 99          // Maximale willekeurige waarde



using namespace std;

int main (void)                  // Begin hoofdfunctie P08-F03
{
  int   tabel[OMVANG] ;     // Tabel voor willekeurige waarden
  int   i             ;     // Hulp-variabele (tel-waarde)
  float willekeur     ;     // Hulp-variabele t.b.v. rand()

  cout << (char)033 << "[2J" ;     // Wis beeldscherm
  srand (25) ;                     // Initialisatie van rand()


  for (i=0 ; i<OMVANG ; i++)
  {                                            // Vul de tabel
    willekeur = (float) rand() / 32767 * MAXWIL ;    // met 50
    tabel[i] = (int) willekeur ;               // willekeurige
  } ;                                          // int-waarden 


  cout << "De " << OMVANG << " willekeurige getallen zijn:" ;
  cout << endl ;


  for (i=0 ; i<OMVANG ; i++)         // Weergeven van de tabel
  {
    if (i % 10 == 0) cout << endl ;     // Nieuwe regel na 10
    cout << setw(5) << tabel[i]   ;     // weergegeven waarden
  } ;


  cout << "\n\nDruk op een toets:" << flush ;
  getch () ;
  return 0 ;
}                                // Einde hoofdfunctie P08-F03
