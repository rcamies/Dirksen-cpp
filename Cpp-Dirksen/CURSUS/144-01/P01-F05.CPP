
/************************************************************/
/*   P01-F05    In- en uitvoer van floating-point-waarden   */
/************************************************************/

#include <iostream>         // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

using namespace std;

void main (void)
{
  float  getal_1, getal_2 ;                // Declaratie van 3
  float  resultaat ;                       // float-variabelen

  cout << (char)033 << "[2J" ;              // Wis beeldscherm

  cout << "\n\n\n\t Voer twee floating-point-getallen in: \n";

  cout << "\n\t Getal 1: " ;          // Invoer van de eerste
  cin  >> getal_1 ;                   // floating-point-waarde

  cout << "\n\t Getal 2: " ;          // Invoer van de tweede
  cin  >> getal_2 ;                   // floating-point-waarde

  resultaat = getal_1 * getal_2 ;     // Berekening produkt

  cout << "\n\n\t" ;
  cout << getal_1 << " * " << getal_2 << " = " << resultaat ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}
