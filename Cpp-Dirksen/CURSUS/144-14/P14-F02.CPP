
/************************************************************/
/*   P14-F02     Les 144-14         Uitwerking opdracht 1   */
/*                                                          */
/*               Geeft de code, prijs en omschrijving van   */
/*               maximaal 15 delen van een servies.         */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators
#include <dirksen.h>        // Bibliotheek voor Dirksen-cursus
#include <stdlib.h>         // Standaard-bibliotheek voor exit
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
} ;


void  Disk_Fout  (void)  ;        // Prototype externe functie 



using namespace std;

int main (void)                  // Begin hoofdfunctie P14-F02
{
  SERVIES  Servies ;

  Init_Servies (Servies)    ;
  Servies.Uitvoer_Servies() ;
  Schrijf_Servies (Servies) ;

  PauzeStop ;                    // Einde hoofdfunctie P14-F02
}



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
/*   Externe functies                           (P14-F02)   */
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


void Disk_Fout (void)
{
  WisBeeld ;
  cout << "\n\nFout bij toegang tot de disk(ette)." ;
  cout << "\n\nProgramma-uitvoering wordt gestopt." ;
  cout << "\n\n\n\nDruk op een toets:" << flush     ;
  getch() ;
  exit(1) ;
}
