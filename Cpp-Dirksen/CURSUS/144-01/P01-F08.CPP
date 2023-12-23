
/************************************************************/
/*   P01-F08              Formatteren van de uitvoer door   */
/*                        middel van de format flag fixed   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators

using namespace std;

void main (void)
{
  double v1 , v2 , v3 ;
  double v4 , v5 , v6 ;
  double v7 , v8 , v9 ;

  //  Onderstaande waarden moeten worden weergegeven met een
  //  vaste veldgrootte van 10 posities, waarvan 2 cijfers
  //  achter de komma.

  v1 =        0.01  ;   // Kleinst mogelijke getal
  v2 =        0.11  ;   // Achter de komma staan geen nullen
  v3 =        1.11  ;   // Cijfer voor de komma is niet nul
  v4 =  1000000.00  ;   // Getal past precies in het veld
  v5 =  9999999.99  ;   // Hoogst mogelijke getal
  v6 = 12345678.90  ;   // Getal past niet in het veld
  v7 =  9999999.996 ;   // Getal wordt door afronding te groot
  v8 =        0.0051;   // Getal wordt naar boven afgerond
  v9 =        0.0049;   // Getal wordt naar beneden afgerond

  
  cout.setf (ios::showpoint); // toon punt en niet sign. nullen
  cout.setf (ios::fixed);     // selecteer fixed point notatie

  cout << "\n\t v1 = " << setw(10) << setprecision(2) << v1 ;
  cout << "\n\t v2 = " << setw(10) << setprecision(2) << v2 ;
  cout << "\n\t v3 = " << setw(10) << setprecision(2) << v3 ;
  cout << "\n\t v4 = " << setw(10) << setprecision(2) << v4 ;
  cout << "\n\t v5 = " << setw(10) << setprecision(2) << v5 ;
  cout << "\n\t v6 = " << setw(10) << setprecision(2) << v6 ;
  cout << "\n\t v7 = " << setw(10) << setprecision(2) << v7 ;
  cout << "\n\t v8 = " << setw(10) << setprecision(2) << v8 ;
  cout << "\n\t v9 = " << setw(10) << setprecision(2) << v9 ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}
