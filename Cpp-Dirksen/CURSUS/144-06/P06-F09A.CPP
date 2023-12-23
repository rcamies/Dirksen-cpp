
/************************************************************/
/*   P06-F09A    Door de waarde-overdracht van pointers     */
/*               kunnen ook waarden van variabelen buiten   */
/*               de functie worden gewijzigd                */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch


void Omruilen (int *Param1 , int *Param2) ; // Funct-prototype


using namespace std; 

int main (void)                 // Begin hoofdfunctie P06-F09A
{
  int  Getal1 = 100 ;
  int  Getal2 = 200 ;



  cout << "\n\nVoor het aanroepen van de functie geldt:" ;
  cout << "\nVariabele 1 = " << Getal1 ;
  cout << "\nVariabele 2 = " << Getal2 ;

  Omruilen (&Getal1 , &Getal2) ;            // Functie-aanroep

  cout << "\n\nNa terugkeer vanuit de functie geldt:" ;
  cout << "\nVariabele 1 = " << Getal1 ;
  cout << "\nVariabele 2 = " << Getal2 ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch () ;
  return 0 ;
}                               // Einde hoofdfunctie P06-F09A



void Omruilen (int *Param1 , int *Param2)       // Functie-kop
{
  int  Tussen ;

  cout << "\n\nBinnen de functie geldt VOOR het ruilen:" ;
  cout << "\nVariabele 1 = " << *Param1 ;
  cout << "\nVariabele 2 = " << *Param2 ;

  Tussen  = *Param1 ;                // Hier worden de waarden
  *Param1 = *Param2 ;                //   van beide variabelen
  *Param2 = Tussen  ;                //   geruild (verwisseld)

  cout << "\n\nBinnen de functie geldt NA het ruilen:" ;
  cout << "\nVariabele 1 = " << *Param1 ;
  cout << "\nVariabele 2 = " << *Param2 ;
}
