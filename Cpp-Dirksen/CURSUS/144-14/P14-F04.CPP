
/************************************************************/
/*   P14-F04     Les 144-14         Uitwerking opdracht 2   */
/*                                                          */
/*               Geeft de code, prijs en omschrijving van   */
/*               maximaal 15 delen van een servies.         */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators
#include <dirksen.h>        // Bibliotheek voor Dirksen-cursus
#include <stdlib.h>         // Standaard-bibliotheek voor text
#include <string.h>         // Bibliotheek met string-functies
#include <stdio.h>          // Bibliotheek met file-functies

#define  MaxArt  15


typedef  char text[20] ;    // Definitie van gegevenstype text



class ARTIKEL                  // Definitie van de basisklasse
{
  private: int   ArtCode  ;
           float ArtPrijs ;
           text  ArtNaam  ;

  public:  ARTIKEL (void) ;               // Extra constructor
           void  Uitvoer_Artikel (void) ; //   Element-functie
} ;



class SERVIES             // Definitie van de afgeleide klasse
{
  private: ARTIKEL  artikel[MaxArt] ;

  public:  void  Uitvoer_Servies (void) ;   // Element-functie

  friend   void  Init_Servies    (SERVIES&) ;      // Friend-
  friend   void  Schrijf_Servies (SERVIES&) ;      // functies
  friend   void  Voegtoe_Artikel (SERVIES&) ;
  friend   void  Verwijd_Artikel (SERVIES&) ;
} ;



void  Disk_Fout  (void)  ;      // Prototypes externe functies 
char  KeuzeMenu  (void)  ;





using namespace std;

int main (void)                  // Begin hoofdfunctie P14-F04
{
  SERVIES  Servies  ;
  char     Opdracht ;

  Init_Servies (Servies) ;

  do
  {
    Opdracht = KeuzeMenu() ;
    if      (Opdracht == '1')  Servies.Uitvoer_Servies() ;
    else if (Opdracht == '2')  Voegtoe_Artikel (Servies) ;
    else if (Opdracht == '3')  Verwijd_Artikel (Servies) ;
    else if (Opdracht == '4')  Init_Servies (Servies)    ;
  }
  while (Opdracht != '0') ;

  Schrijf_Servies (Servies) ;

  cout << "\n\n\nProgramma wordt gestopt"    ;
  PauzeStop ;
}                                // Einde hoofdfunctie P14-F04




/************************************************************/
/*   Element-functies van de klassen  ARTIKEL  en SERVIES   */
/************************************************************/


ARTIKEL::ARTIKEL (void)           // Extra constructor i.v.m.
{                                 // automatisch gebruik van
  ArtCode  = 0           ;        // referenties door compiler
  ArtPrijs = 0.0         ;
  strcpy (ArtNaam , "-") ;
}



void ARTIKEL::Uitvoer_Artikel (void)
{
  cout.setf(ios::fixed)                          ;
  cout << setw(4) << ArtCode                     ;
  cout << setw(7) << setprecision(2) << ArtPrijs ;
  cout << "  " << ArtNaam <<"\n"                 ;
}



void SERVIES::Uitvoer_Servies (void)
{
  int  i  ;

  WisBeeld ;
  cout << "Code  Prijs  Naam\n" ;
  cout << "----  -----  --------------------\n\n" ;

  for (i=0 ; i<MaxArt ; i++)         // Geef de codes, prijzen
    artikel[i].Uitvoer_Artikel() ;   // en namen van alle
                                     // artikelen weer

  cout << "\n\n\nDruk op een toets:" << flush ;
  getch() ;
}




/************************************************************/
/*   Externe functies                           (P14-F04)   */
/************************************************************/


void Init_Servies (SERVIES &Servies)  // Vult de lijst met 15
{                                     // artikelen vanuit het
  FILE  *Bestand ;                    // bestand A:SERVIES.ART

  Bestand = fopen ("A:SERVIES.ART" , "r") ;    // Open bestand
  if (Bestand == NULL)                         // SERVIES.ART
    Disk_Fout() ;                              // voor lezen

  fread (&Servies , sizeof(Servies) , 1 , Bestand) ;

  if (fclose(Bestand) == -1)                  // Sluit bestand
    Disk_Fout() ;                             // SERVIES.ART
}



void Schrijf_Servies (SERVIES &Servies)  // Schrijft lijst met
{                                        // 15 artikelen naar
  FILE  *Bestand ;                       // file A:SERVIES.ART

  Bestand = fopen ("A:SERVIES.ART" , "w") ;  // Open bestand
  if (Bestand == NULL)                       // SERVIES.ART
    Disk_Fout() ;                            // voor schrijven

  fwrite (&Servies , sizeof(Servies) , 1 , Bestand) ;

  if (fclose(Bestand) == -1)                  // Sluit bestand
    Disk_Fout() ;                             // SERVIES.ART
}



void Voegtoe_Artikel (SERVIES &Servies)
{
  cout << "\n\n\nFunctie Voegtoe_Artikel is nog niet gereed" ;
  cout << "\n\n\nDruk op een toets:" << flush ;
  getch() ;
}



void Verwijd_Artikel (SERVIES &Servies)
{
  cout << "\n\n\nFunctie Verwijd_Artikel is nog niet gereed" ;
  cout << "\n\n\nDruk op een toets:" << flush ;
  getch() ;
}



void Disk_Fout (void)
{
  WisBeeld ;
  cout << "\n\nFout bij toegang tot de disk(ette)." ;
  cout << "\n\nProgramma-uitvoering wordt gestopt." ;
  cout << "\n\n\n\nDruk op een toets:" << flush     ;
  getch() ;
  exit(1) ;
}



char KeuzeMenu (void)     // Zet keuze-menu op het beeldscherm
{                         //   en leest de keuze (opdracht) in
  char Keuze ;

  WisBeeld ;
  cout << "\n\t\tKEUZE-MENU                       SERVIES\n" ;
  cout << "\t\t========================================\n\n" ;
  cout << "\t\t1 = Weergeven van de lijst met artikelen\n"   ;
  cout << "\t\t2 = Toevoegen nieuw artikel aan de lijst\n"   ;
  cout << "\t\t3 = Verwijderen van artikel uit de lijst\n"   ;
  cout << "\t\t4 = Inlezen van de lijst van de diskette\n\n" ;
  cout << "\t\t0 = Einde programma (= bewaar lijst)\n\n\n\n" ;

  cout << "Maak uw keuze   (en druk op <Enter>):  " << flush ;
  cin  >> Keuze ;

  return Keuze ;
}
