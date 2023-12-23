
/************************************************************/
/*   P06-F01     Testen levensduur van lokale variabelen    */
/*               De levensduur van lokale variabelen moet   */
/*               eindigen bij het afsluiten van de functie  */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

using namespace std;
int Minus (int var1 , int var2) ;         // Functie-prototype


void main (void)                 // Begin hoofdfunctie P06-F01
{
  int  var1 = 100 ;                // Declaratie/initialisatie
  int  var2 = 200 ;                //  van drie int-variabelen
  int  var3 = 0   ;

  
  cout << "\n\nVoor het aanroepen van de functie geldt:" ;
  cout << "\nVariabele 1 = " << var1 ;
  cout << "\nVariabele 2 = " << var2 ;
  cout << "\nVariabele 3 = " << var3 ;

  var3 = Minus (var1 , var2) ;              // Functie-aanroep

  cout << "\n\nNa terugkeer vanuit de functie geldt:" ;
  cout << "\nVariabele 1 = " << var1 ;
  cout << "\nVariabele 2 = " << var2 ;
  cout << "\nVariabele 3 = " << var3 ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}                                // Einde hoofdfunctie P06-F01



/************************************************************/
/*   Functie waarin uitsluitend lokale variabelen voor-     */
/*   komen en de parameteroverdracht per waarde gebeurt     */
/************************************************************/

int Minus (int var1 , int var2)                 // Functie-kop
{
  var1-- ;
  var2-- ;

  cout << "\n\nBinnen de functie geldt:" ;
  cout << "\nVariabele 1 = " << var1 ;
  cout << "\nVariabele 2 = " << var2 ;
  cout << "\nVariabele 3 = " << var3 ;

  return var1 ;
}
