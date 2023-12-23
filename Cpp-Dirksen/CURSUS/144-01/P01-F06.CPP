
/************************************************************/
/*   P01-F06   In- en uitvoer van strings via CIN en COUT   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

using namespace std;

void main (void)
{
  char  voornaam[25] ;        // Declaratie van twee string-
  char  achternaam[25] ;      // variabelen van 25 karakters



  cout << "\n\nVoer uw voornaam in: " ;     // String-invoer
  cin  >> voornaam ;                        //         via CIN

  cout << "\n\nVoer uw achternaam in: " ;   // String-invoer
  cin  >> achternaam ;                      //         via CIN

  cout << "\n\n\nU heet " << voornaam << " " << achternaam ;


  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}
