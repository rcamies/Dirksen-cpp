
/************************************************************/
/*   P06-F12C                Uitwerking van oefenopgave 1   */
/*                         Sorteren van 3 integer-waarden   */
/*                     via waarde-overdracht van pointers   */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch


void Sorteren (int *G1 , int *G2 , int *G3) ;    //   Functie-
void Wisselen (int *Hoogste , int *Laagste) ;    // prototypes


using namespace std; 

int main (void)                 // Begin hoofdfunctie P06-F12C
{
  int  Getal1 , Getal2 , Getal3 ;



  cout << "\n\nVoer 3 integer-waarden in: \nGetal 1 = " ;
  cin  >> Getal1         ;
  cout << "\nGetal 2 = " ;
  cin  >> Getal2         ;
  cout << "\nGetal 3 = " ;
  cin  >> Getal3         ;

  Sorteren (&Getal1 , &Getal2 , &Getal3) ;  // Functie-aanroep

  cout << "\nHet kleinste getal is:  " << Getal1 ;
  cout << "\nHet middelste getal is: " << Getal2 ;
  cout << "\nHet grootste getal is:  " << Getal3 ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch () ;
  return 0 ;
}                               // Einde hoofdfunctie P06-F12C



void Sorteren (int *G1 , int *G2 , int *G3)
{
  if (*G1 > *G2) Wisselen (G1 , G2) ;
  if (*G1 > *G3) Wisselen (G1 , G3) ;
  if (*G2 > *G3) Wisselen (G2 , G3) ;
}



void Wisselen (int *Hoogste , int *Laagste)
{
  int  Tussen ;

  Tussen   = *Hoogste ;
  *Hoogste = *Laagste ;
  *Laagste = Tussen   ;
}
