
/************************************************************/
/*   P07-F07C   Dit programma gebruikt drie verschillende   */
/*              manieren om waarden aan variabelen toe te   */
/*              kennen, namelijk via de variabele-naam,     */
/*              via een referentie en via een pointer       */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch


using namespace std;

int main (void)                 // Begin hoofdfunctie P07-F07C
{
  int  IntegerVar ;
  int &RefrentVar =  IntegerVar ;
  int *PointerVar = &IntegerVar ;




  cout << "\nAdres van IntegerVar: " << &IntegerVar ;
  cout << "\nAdres van RefrentVar: " << &RefrentVar ;
  cout << "\nAdres van PointerVar: " <<  PointerVar ;
  cout << endl ;


  IntegerVar = 11 ;  // Waardetoekenning via de variabele-naam

  cout << "\n IntegerVar = " <<  IntegerVar ;
  cout << "\n RefrentVar = " <<  RefrentVar ;
  cout << "\n*PointerVar = " << *PointerVar ;
  cout << endl ;


  RefrentVar = 22 ;      // Waardetoekenning via de referentie

  cout << "\n IntegerVar = " <<  IntegerVar ;
  cout << "\n RefrentVar = " <<  RefrentVar ;
  cout << "\n*PointerVar = " << *PointerVar ;
  cout << endl ;


  *PointerVar = 33 ;        // Waardetoekenning via de pointer

  cout << "\n IntegerVar = " <<  IntegerVar ;
  cout << "\n RefrentVar = " <<  RefrentVar ;
  cout << "\n*PointerVar = " << *PointerVar ;
  cout << endl ;


  cout << "\n\nDruk op een toets:" << flush ;
  getch () ;
  return 0 ;
}                               // Einde hoofdfunctie P07-F07C
