
/************************************************************/
/*   P06-F07     Verschillende terugkeerwaarden voor de     */
/*               functie-parameter van hoofdfunctie main    */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch


using namespace std;

int main (void)                  // Begin hoofdfunctie P06-F07
{
  int   Teller , Noemer , Result ;



  cout << "\nVoer de teller in: " ;
  cin  >> Teller ;
  cout << "\nVoer de noemer in: " ;
  cin  >> Noemer ;

  if (Noemer == 0)
  {
    cout << "\n\nDelen door nul mag niet" << flush ;
    return 1 ;
  }

  Result = Teller / Noemer ;
  cout << "\n" << Teller << " : " << Noemer << " = " ;
  cout << Result ; 

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch () ;
  return 0 ;
}                                // Einde hoofdfunctie P06-F07
