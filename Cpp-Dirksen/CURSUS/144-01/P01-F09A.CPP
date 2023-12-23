
/************************************************************/
/*   P01-F09A      Invoer van karakters via CIN, uitvoer    */
/*                 van karakters en decimale, hexadecimale  */
/*                 en octale integer-waarden via COUT.      */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators

using namespace std;

void main (void)
{
  unsigned char  teken ;       // ASCII-karakter van type CHAR
  int            i , j ;       // twee integer-hulp-variabelen
  
 
  cout << "Voer drie tekens in en druk op ENTER:   " ;
  cin  >> teken ;          // Voer de karakters in en lees het
                           // eerste karakter uit input-buffer
  cout << "\n-------------------------------" ;
  cout << "-------------------------------\n" ;


  for (j=0 ; j<3 ; j++)
  {
    i = teken ;
    cout << "Teken = " << teken << "  int-waarde:" ;
    cout << "  dec: " << dec << setw(3) << i ;
    cout << "  hex: " << hex << setw(2) << i ;
    cout << "  oct: " << oct << setw(3) << i ;
    cout << "  char: " << teken << endl ;
    if (j<2)                      // Lees een volgend karakter
      cin >> teken ;              //       uit de input-buffer
  } ;


  cout << "-------------------------------" ;
  cout << "-------------------------------" ;

  cout << "\n\nDruk op een toets: " << flush ;
  getch() ;
}
