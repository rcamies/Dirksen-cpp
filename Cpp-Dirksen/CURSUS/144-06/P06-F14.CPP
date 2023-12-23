
/************************************************************/
/*   P06-F14                 Uitwerking van oefenopgave 3   */
/*                      Type-conversie van int naar float   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators

using namespace std; 

int main (void)                  // Begin hoofdfunctie P06-F14
{
  int   Teller , Noemer ;
  float Result          ;



  cout << "\nVoer Teller in: " ;
  cin  >> Teller ;
  cout << "\nVoer Noemer in: " ;
  cin  >> Noemer ;

  if (Noemer == 0)
  {
    cout << "\n\nDelen door nul mag niet" << flush ;
    return 1 ;
  }

  Result = Teller / Noemer ;
  cout.setf(ios::fixed) ;
  cout << "\n\n" << Teller << " : " << Noemer ;
  cout << " = " << setw(6) << setprecision(3) << Result ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch () ;
  return 0 ;
}                                // Einde hoofdfunctie P06-F14
