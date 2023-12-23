
/************************************************************/
/*   P02-F03    Toekennen van waarden aan de afzonderlijke  */
/*              gegevenselementen van een structuur en aan  */
/*              een gehele structuur                        */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators
#include <string.h>         // Bibliotheek met string-functies
#include <stdio.h>          // Bibliotheek met printf-functie

struct verjaardag                          // Definitie van de
{                                          //        structuur
  char dag[9]   ;
  char maand[10];
  char jaar[5]  ;
} ;

typedef struct verjaardag Verj_dag ;  // Definitie van de naam
                                      //   van dit nieuwe type
using namespace std;

void main (void)
{
  Verj_dag  var1 , var2 , var3 ;
  Verj_dag  *z_var3 ;

  z_var3 = &var3 ;                    // Adres toewijzen

  strcpy(var1.dag,   "maandag") ;     // Toekennen van waarden
  strcpy(var1.maand, "januari") ;     //  aan de afzonderlijke
  strcpy(var1.jaar,  "1991") ;        //     gegevenselementen

  var2 = var1 ;                    // Toekennen van een waarde
  var3 = var1 ;                    // aan een gehele structuur

  cout << (char)033 << "[2J" << endl ;      // Wis beeldscherm

  printf("\n\t Afdrukken van structuurvariabele 'var2', ") ;
  printf("\n\t die is geadresseerd via de punt-operator.") ;
  printf("\n\t Dag:   %8s",var2.dag)   ;
  printf("\n\t Maand: %9s",var2.maand) ;
  printf("\n\t Jaar:  %4s",var2.jaar)  ;

  printf("\n\n") ;
  printf("\n\t Afdrukken van structuurvariabele 'var3',") ;
  printf("\n\t geadresseerd via de verwijzing-operator.") ;
  printf("\n\t Dag:   %8s",z_var3->dag)   ;
  printf("\n\t Maand: %9s",z_var3->maand) ;
  printf("\n\t Jaar:  %4s",z_var3->jaar)  ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}
