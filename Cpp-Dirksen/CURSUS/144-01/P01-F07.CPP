
/************************************************************/
/*   P01-F07    Formatteren van de uitvoer van waarden      */
/*              van de typen float, double en long double   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators

using namespace std;

void main (void)
{
  float       v1,v2 ;                   // declaratie van drie
  double      v3,v4 ;                   // verschillende typen
  long double v5,v6 ;                   // variabelen

  v1 = 1.555555555555555555555 ;        // alle zes variabelen
  v2 = 0.000005555555555555555 ;        // krijgen een waarde,
  v3 = 1.555555555555555555555 ;        // bestaande uit
  v4 = 0.000005555555555555555 ;        // 1 cijfer voor en
  v5 = 1.555555555555555555555 ;        // 21 cijfers achter
  v6 = 0.000005555555555555555 ;        // de komma


  cout << setprecision(20) << v1 << endl ;
  cout << setprecision(20) << v2 << endl ;
  cout << setprecision(20) << v3 << endl ;
  cout << setprecision(20) << v4 << endl ;
  cout << setprecision(20) << v5 << endl ;
  cout << setprecision(20) << v6 << endl ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}
