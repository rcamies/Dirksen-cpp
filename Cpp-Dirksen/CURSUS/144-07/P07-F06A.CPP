
/************************************************************/
/*   P07-F06A       Foutieve referentie-overdracht vanuit   */
/*                  een functie, via de functie-parameter   */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch


int& Minus (int Param1 , int Param2) ;    // Functie-prototype


using namespace std; 

int main (void)                 // Begin hoofdfunctie P07-F06A
{
  int  Getal1 = 100 ;             // Declaratie/initialisatie
  int  Getal2 = 200 ;             //  van drie int-variabelen
  int  Getal3 = 0   ;



  cout << "\n\nVoor het aanroepen van functie MINUS geldt:" ;
  cout << "\nVariabele 1 = " << Getal1 ;
  cout << "\nVariabele 2 = " << Getal2 ;
  cout << "\nVariabele 3 = " << Getal3 ;

  Getal3 = Minus (Getal1 , Getal2) ;        // Functie-aanroep

  cout << "\n\nNa terugkeer vanuit functie MINUS geldt:" ;
  cout << "\nVariabele 1 = " << Getal1 ;
  cout << "\nVariabele 2 = " << Getal2 ;
  cout << "\nVariabele 3 = " << Getal3 ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch () ;
  return 0 ;
}                               // Einde hoofdfunctie P07-F06A


/************************************************************/
/*    Functie waarvan de functie-parameter via een          */
/*    referentie-overdracht wordt teruggegeven              */
/************************************************************/

int& Minus (int Param1 , int Param2)            // Functie-kop
{
  int  Local3 = 5 ;      // Initialisatie van lokale variabele

  Param1-- ;
  Param2-- ;
  Local3 = Param1 ;         // Toekenning aan lokale variabele

  cout << "\n\nBinnen functie MINUS geldt:" ;
  cout << "\nVariabele 1 = " << Param1 ;
  cout << "\nVariabele 2 = " << Param2 ;
  cout << "\nVariabele 3 = " << Local3 ;

  return Local3 ;         // Teruggave van de lokale variabele
}                         //     via een referentie-overdracht
