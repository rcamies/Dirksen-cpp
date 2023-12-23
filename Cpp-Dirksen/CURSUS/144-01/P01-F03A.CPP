#define _CRT_NONSTDC_NO_WARNINGS
/************************************************************/
/*   P01-F03A                  Uitvoer van tekst via COUT   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

using namespace std;

void main (void)
{
  
  cout << "Via een cout-instructie kunnen tekstregels op het";
  cout << "beeldscherm worden weergegeven." ;
  cout << "Na een cout-instructie volgt niet automatisch een";
  cout << "regeltransport." ;

  cout << "\n" ;
  cout << "\nHet gebruik van het uit 'C' bekende" ;
  cout << "\n stuurteken 'backslash-n' geeft wel" ;
  cout << "\n  een regeltransport." ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}
