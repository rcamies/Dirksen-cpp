
/************************************************************/
/*   P13-F09     Les 144-13         Uitwerking opdracht 5   */
/*                                                          */
/*               Geeft de code, prijs en omschrijving van   */
/*               maximaal 15 delen van een servies. Leest   */
/*               deze gegevens uit bestand A:SERVIES.ART.   */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators
#include <dirksen.h>        // Bibliotheek voor Dirksen-cursus
#include <string.h>         // Bibliotheek met string-functies
#include <stdlib.h>         // Standaard-bibliotheek voor exit
#include <stdio.h>          // Bibliotheek met file-functies


#define  MaxArt  15         // Maximaal aantal artikelen in de
                            // lijst met de servies-onderdelen


typedef  char text[20] ;    // Definitie van gegevenstype text


class ARTIKEL               // Definitie van de klasse ARTIKEL
{
  private: int   ArtCode  ;
           float ArtPrijs ;
           text  ArtNaam  ;

  public:  ARTIKEL (void)               ; // Extra constructor
           void  Init_Artikel (int , float , text) ;
           void  Uitvoer_Artikel (void) ;  // Element-functies
} ;



using namespace std; 

int main (void)                  // Begin hoofdfunctie P13-F09
{

  ARTIKEL  artikel[MaxArt] ;      // Lijst met klasse-objecten
  FILE     *Bestand        ;      // File-pointer SERVIES.ART
  int      i               ;      // Hulp-variabele   (teller)


  void  Disk_Fout  (void)  ;      // Prototype externe functie 


  Bestand = fopen ("A:SERVIES.ART" , "r") ;    // Open bestand
  if (Bestand == NULL)                         // SERVIES.ART
    Disk_Fout() ;                              // voor lezen

  for (i=0 ; i<MaxArt ; i++)
    fread (&artikel[i] , sizeof(artikel[i]) , 1 , Bestand) ;

  if (fclose(Bestand) == -1)                  // Sluit bestand
    Disk_Fout() ;                             // SERVIES.ART


  WisBeeld              ;
  cout.setf(ios::fixed) ;

  cout << "Code  Prijs  Naam\n" ;
  cout << "----  -----  --------------------\n\n" ;


  for (i=0 ; i<MaxArt ; i++)         // Geef de codes, prijzen
    artikel[i].Uitvoer_Artikel() ;   // en namen van alle
                                     // artikelen weer


  Bestand = fopen ("A:SERVIES.ART" , "w") ;  // Open bestand
  if (Bestand == NULL)                       // SERVIES.ART
    Disk_Fout() ;                            // voor schrijven

  for (i=0 ; i<MaxArt ; i++)
    fwrite (&artikel[i] , sizeof(artikel[i]) , 1 , Bestand) ;

  if (fclose(Bestand) == -1)                  // Sluit bestand
    Disk_Fout() ;                             // SERVIES.ART


  PauzeStop ;                    // Einde hoofdfunctie P13-F09
}



/************************************************************/
/*   Element-functies van klasse  ARTIKEL       (P13-F09)   */
/************************************************************/


ARTIKEL::ARTIKEL (void)           // Extra constructor i.v.m.
{                                 // automatisch gebruik van
  ArtCode  = 0           ;        // referenties door compiler
  ArtPrijs = 0.0         ;
  strcpy (ArtNaam , "-") ;
}


void ARTIKEL::Init_Artikel (int Code , float Prys , text Naam)
{
  ArtCode  = Code ;                   // Initialiseert de
  ArtPrijs = Prys ;                   // 3 gegevenselementen
  strcpy (ArtNaam , Naam) ;           // van een klasse-object
}


void ARTIKEL::Uitvoer_Artikel (void)
{
  cout << setw(4) << ArtCode                     ;
  cout << setw(7) << setprecision(2) << ArtPrijs ;
  cout << "  " << ArtNaam <<"\n"                 ;
}



/************************************************************/
/*   Externe functie                            (P13-F09)   */
/************************************************************/


void Disk_Fout (void)
{
  WisBeeld ;
  cout << "\n\nFout bij toegang tot de disk(ette)." ;
  cout << "\n\nProgramma-uitvoering wordt gestopt." ;
  cout << "\n\n\n\nDruk op een toets:" << flush     ;
  getch () ;
  exit (1) ;
}
