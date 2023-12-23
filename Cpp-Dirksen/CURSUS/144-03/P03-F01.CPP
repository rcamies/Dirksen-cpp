
/************************************************************/
/*   P03-F01           Berekenen van het gewicht van een    */
/*                     kogel met behulp van een STRUCTUUR   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators

#define  PI 3.14159

struct kogel                            // Structuur-definitie
{
  float  diameter , soortgew , gewicht ;
} ;

typedef  struct kogel Kogel ;            // Type-definitie

float bereken_gewicht (Kogel *z_kogel) ; // Declaratie van het
                                         //  functie-prototype

using namespace std;

void main (void)                 // Begin hoofdfunctie P03-F01
{
  Kogel  kogel     ;
  Kogel  *z_kogel  ;
  z_kogel = &kogel ;



  cout << "\n\tVoer de diameter van de kogel in: " ;
  cin  >> z_kogel->diameter ;

  cout << "\n\tVoer het soortelijk gewicht van de kogel in: ";
  cin  >> z_kogel->soortgew ;

  z_kogel->gewicht = bereken_gewicht (z_kogel) ;

  cout << "\n\tDe kogel weegt: " << z_kogel->gewicht ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}                                // Einde hoofdfunctie P03-F01



/************************************************************/
/*  Operator-functie, die het gewicht van de kogel berekent */
/************************************************************/

float bereken_gewicht (Kogel *z_kogel)
{
  float  resultaat , d , s ;

  d = z_kogel->diameter ;    // Toegang tot structuurelementen
  s = z_kogel->soortgew ;    // vanuit de functie

  resultaat = PI / 6 * d * d * d * s ;   // Berekening gewicht

  return resultaat ;              // Teruggave van het gewicht
}
