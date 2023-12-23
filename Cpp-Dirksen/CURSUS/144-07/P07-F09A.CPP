
/************************************************************/
/*   P07-F09A       Foutieve referentie-overdracht vanuit   */
/*                  een functie, via de functie-parameter   */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators


int& Minus (int Param1 , int Param2) ;   // Functie-prototypes
int& Erbij (int Param1 , int Param2) ;

using namespace std;

int main (void)                 // Begin hoofdfunctie P07-F09A
{
  int  Getal1 = 100 ;              // Declaratie/initialisatie
  int  Getal2 = 200 ;              //  van drie int-variabelen
  int  Getal3 = 3   ;
  int  Getal4 = 4   ;


  cout.setf(ios::fixed) ;

  cout << "\n\nVoor het aanroepen van functie MINUS geldt:" ;
  cout << "\nGetal3 = " << setw(3) << Getal3 ;
  cout << "  Ref: " << &Getal3 ;
  cout << "\nGetal4 = " << setw(3) << Getal4 ;
  cout << "  Ref: " << &Getal4 ;

  Getal3 = Minus (Getal1 , Getal2) ;        // Functie-aanroep

  cout << "\n\nNa terugkeer vanuit functie MINUS geldt:" ;
  cout << "\nGetal3 = " << setw(3) << Getal3 ;
  cout << "  Ref: " << &Getal3 ;
  cout << "\nGetal4 = " << setw(3) << Getal4 ;
  cout << "  Ref: " << &Getal4 ;

  Getal4 = Erbij (Getal1 , Getal2) ;        // Functie-aanroep

  cout << "\n\nNa terugkeer vanuit functie ERBIJ geldt:" ;
  cout << "\nGetal3 = " << setw(3) << Getal3 ;
  cout << "  Ref: " << &Getal3 ;
  cout << "\nGetal4 = " << setw(3) << Getal4 ;
  cout << "  Ref: " << &Getal4 ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch () ;
  return 0 ;
}                               // Einde hoofdfunctie P07-F09A



/************************************************************/
/*    Functies waarvan de functie-parameters via            */
/*    referentie-overdrachten wordt teruggegeven            */
/************************************************************/

int& Minus (int Param1 , int Param2)            // Functie-kop
{
  int  Local3 = 5 ;      // Initialisatie van lokale variabele

  Param1-- ;
  Param2-- ;
  Local3 = Param1 ;         // Toekenning aan lokale variabele

  cout << "\n\nBinnen functie MINUS geldt:"  ;
  cout << "\nLocal3 = " << setw(3) << Local3 ;
  cout << "  Ref: " << &Local3 ;

  return Local3 ;         // Teruggave van de lokale variabele
}                         //     via een referentie-overdracht



int& Erbij (int Param1 , int Param2)            // Functie-kop
{
  int  Local4 = 4 ;      // Initialisatie van lokale variabele

  Param1++ ;
  Param2++ ;
  Local4 = Param2 ;         // Toekenning aan lokale variabele

  cout << "\n\nBinnen functie ERBIJ geldt:" ;
  cout << "\nLocal4 = " << setw(3) << Local4 ;
  cout << "  Ref: " << &Local4 ;

  return Local4 ;         // Teruggave van de lokale variabele
}                         //     via een referentie-overdracht
