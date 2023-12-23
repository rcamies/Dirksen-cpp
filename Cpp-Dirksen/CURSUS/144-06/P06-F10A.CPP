
/************************************************************/
/*   P06-F10A      Door de overdracht van een referentie    */
/*                 aan een functie kunnen ook waarden       */
/*                 buiten die functie worden gewijzigd      */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch


void Omruilen (int &Param1 , int &Param2) ; // Funct-prototype


using namespace std;

int main (void)                 // Begin hoofdfunctie P06-F10A
{
  int  Getal1 = 100 ;
  int  Getal2 = 200 ;



  cout << "\n\nVoor het aanroepen van de functie geldt:" ;
  cout << "\nVariabele 1 = " << Getal1 ;
  cout << "\nVariabele 2 = " << Getal2 ;

  Omruilen (Getal1 , Getal2) ;              // Functie-aanroep

  cout << "\n\nNa terugkeer vanuit de functie geldt:" ;
  cout << "\nVariabele 1 = " << Getal1 ;
  cout << "\nVariabele 2 = " << Getal2 ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch () ;
  return 0 ;
}                               // Einde hoofdfunctie P06-F10A



void Omruilen (int &Param1 , int &Param2)       // Functie-kop
{
  int  Tussen ;

  cout << "\n\nBinnen de functie geldt VOOR het ruilen:" ;
  cout << "\nVariabele 1 = " << Param1 ;
  cout << "\nVariabele 2 = " << Param2 ;

  Tussen = Param1 ;                 // Hier vindt het omruilen
  Param1 = Param2 ;                 // plaats via referenties
  Param2 = Tussen ;

  cout << "\n\nBinnen de functie geldt NA het ruilen:" ;
  cout << "\nVariabele 1 = " << Param1 ;
  cout << "\nVariabele 2 = " << Param2 ;
}
