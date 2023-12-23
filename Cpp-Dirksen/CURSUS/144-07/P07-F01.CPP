
/************************************************************/
/*   P07-F01        Referentie-overdracht, zowel naar de    */
/*                  functie toe, als vanuit de functie      */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch


int& Minus (int &Param1 , int &Param2) ;  // Functie-prototype


using namespace std; 

int main (void)                  // Begin hoofdfunctie P07-F01
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
  getch () ;
  return 0 ;
}                                // Einde hoofdfunctie P07-F01



/************************************************************/
/*  Functie waarin uitsluitend lokale variabelen voorkomen  */
/*  en de parameteroverdracht via referenties plaats vindt  */
/************************************************************/

int& Minus (int &Param1 , int &Param2)          // Functie-kop
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