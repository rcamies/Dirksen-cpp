
/************************************************************/
/*   P06-F03     Testen levensduur van lokale variabelen    */
/*               De levensduur van lokale variabelen moet   */
/*               eindigen bij het afsluiten van de functie  */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch


int Minus (int Getal1 , int Getal2) ;     // Functie-prototype

using namespace std;

void main (void)                 // Begin hoofdfunctie P06-F03
{
  int  Getal1 = 100 ;              // Declaratie/initialisatie
  int  Getal2 = 200 ;              //  van drie int-variabelen
  int  Getal3 = 0   ;



  cout << "\n\nVoor het aanroepen van de functie geldt:" ;
  cout << "\nVariabele 1 = " << Getal1 ;
  cout << "\nVariabele 2 = " << Getal2 ;
  cout << "\nVariabele 3 = " << Getal3 ;

  Getal3 = Minus (Getal1 , Getal2) ;        // Functie-aanroep

  cout << "\n\nNa terugkeer vanuit de functie geldt:" ;
  cout << "\nVariabele 1 = " << Getal1 ;
  cout << "\nVariabele 2 = " << Getal2 ;
  cout << "\nVariabele 3 = " << Getal3 ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}                                // Einde hoofdfunctie P06-F03



/************************************************************/
/*   Functie waarin uitsluitend lokale variabelen voor-     */
/*   komen en de parameteroverdracht per waarde gebeurt     */
/************************************************************/

int Minus (int Param1 , int Param2)             // Functie-kop
{
  int  Local3 = 5 ;

  Param1-- ;
  Param2-- ;

  cout << "\n\nBinnen de functie geldt:" ;
  cout << "\nVariabele 1 = " << Param1 ;
  cout << "\nVariabele 2 = " << Param2 ;
  cout << "\nVariabele 3 = " << Local3 ;

  return Param1 ;
}
