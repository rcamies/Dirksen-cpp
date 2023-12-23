/************************************************************/
/*    DIRKSEN.CPP          Test-programma bij les 144-00    */
/*    aanroepen met  cl dirksen.cpp /EHsc                   */ 
/************************************************************/


#include <iostream>
#include <iomanip>
#include <conio.h>

#include <dirksen.h>        // Bibliotheek voor Dirksen-cursus

#define  MINI 0             // Minimale en maximale waarden
#define  MAXI 80            // voor de tel-variabele i



int main ()                  // Begin hoofdfunctie DIRKSEN
{
  int  i ;


  WisBeeld;

  cout << "Dit is een kort test-programma" ;
  cout << " voor Dirksen-cursisten.  \n\n" ;
  cout << "Als deze tekst en onderstaande" ;
  cout << " tabel met 80 getallen goed \n" ;
  cout << "leesbaar op het beeldscherm "   ;
  cout << "wordt weergegeven, dan is   \n" ;
  cout << "het vertalen en starten van "   ;
  cout << "het programma u gelukt. \n\n\n" ;


  for (i=MINI ; i<MAXI ; i++)
  {
    if (i % 10 == 0) cout << endl ;
    cout << setw(5) << i ;
  };
  cout << endl << endl ;


  PauzeStop ;  // Macro, gedefinieerd in header-file dirksen.h

}                                // Einde hoofdfunctie DIRKSEN
