
/************************************************************/
/*   P13-F05     Les 144-13     Programma voor opdracht 3   */
/*                                                          */
/*               Geeft de code, prijs en omschrijving van   */
/*               maximaal 15 delen van een servies.         */
/*                                                          */
/*   OPMERKING:  Dit programma moet nog worden aangepast,   */
/*               voordat een compiler het kan vertalen.     */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators
#include <dirksen.h>        // Bibliotheek voor Dirksen-cursus

#define  MaxArt  15


class ARTIKEL               // Definitie van de klasse ARTIKEL
{
  private: int   ArtCode     ;
           float ArtPrijs    ;
           char  ArtNaam[20] ;

  public:  ARTIKEL (void)               ; // Extra constructor
           void  Init_Artikel (int , float , ????) ;
           void  Uitvoer_Artikel (void) ;  // Element-functies
} ;



using namespace std;

int main (void)                  // Begin hoofdfunctie P13-F05
{
  ARTIKEL  artikel[MaxArt] ;      // Lijst met klasse-objecten
  int      i               ;      // Hulp-variabele   (teller)


  artikel[0].Init_Artikel (1201 ,  8.95 , "Klein bord"    ) ;
  artikel[1].Init_Artikel (1202 ,  9.95 , "Groot bord"    ) ;
  artikel[2].Init_Artikel (1203 ,  9.95 , "Soepbord"      ) ;
  artikel[3].Init_Artikel (1210 , 12.55 , "Kop en schotel") ;
  artikel[4].Init_Artikel (1211 ,  7.75 , "Koffiemok"     ) ;
  artikel[5].Init_Artikel (1230 , 14.85 , "Vleesschaaltje") ;


  WisBeeld              ;
  cout.setf(ios::fixed) ;

  cout << "Code  Prijs  Naam\n" ;
  cout << "----  -----  --------------------\n\n" ;


  for (i=0 ; i<MaxArt ; i++)         // Geef de codes, prijzen
    artikel[i].Uitvoer_Artikel() ;   // en namen van alle
                                     // artikelen weer

  PauzeStop ;                    // Einde hoofdfunctie P13-F05
}



/************************************************************/
/*   Element-functies van klasse  ARTIKEL       (P13-F05)   */
/************************************************************/


ARTIKEL::ARTIKEL (void)           // Extra constructor i.v.m.
{                                 // automatisch gebruik van
  ArtCode = 0 ;                   // referenties door compiler
}


void ARTIKEL::Init_Artikel (int Code , float Prys , ???? Naam)
{
  ArtCode  = Code ;                   // Initialiseert de
  ArtPrijs = Prys ;                   // 3 gegevenselementen
  ArtNaam  = Naam ;                   // van een klasse-object
}


void ARTIKEL::Uitvoer_Artikel (void)
{
  cout << setw(4) << ArtCode                     ;
  cout << setw(7) << setprecision(2) << ArtPrijs ;
  cout << "  " << ArtNaam <<"\n"                 ;
}
