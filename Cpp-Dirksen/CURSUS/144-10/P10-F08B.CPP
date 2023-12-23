
/************************************************************/
/*   P10-F08B    Toegang tot twee verschillende klassen     */
/*               via een friend-functie                     */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch


class Prijzen                              // Klasse-definitie
{
  private: float Artikel[3] ;

  public:  Prijzen (float , float , float) ;    // Constructor
           friend  void Factuur (Prijzen& , Aantal&) ;
} ;


class Aantal                               // Klasse-definitie
{
  private: int  Artikel[3] ;

  public:  Aantal (int , int , int) ;           // Constructor
           friend void Factuur (Prijzen& , Aantal&) ;
} ;


using namespace std; 

int main (void)                 // Begin hoofdfunctie P10-F08B
{

  Prijzen  Prijs   (33.15 , 27.45 , 48.79) ;  // Declaratie en
  Aantal   Besteld (5 , 9 , 3)             ;  // initialisatie



  Factuur (Prijs , Besteld)  ;              // Druk factuur af


  cout << endl << endl << endl         ;
  cout << "Druk op een toets:" << flush ;
  getch()  ;
  return 0 ;
}                               // Einde hoofdfunctie P10-F08B


/************************************************************/
/*   Element-functies voor de klassen  Prijzen  en  Aantal  */
/************************************************************/


Prijzen::Prijzen (float a0, float a1, float a2) // Constructor
{                                               // voor klasse
  Artikel[0] = a0 ;                             // Prijzen
  Artikel[1] = a1 ;
  Artikel[2] = a2 ;
}


Aantal::Aantal (int a0, int a1, int a2)         // Constructor
{                                               // voor klasse
  Artikel[0] = a0 ;                             // Aantal
  Artikel[1] = a1 ;
  Artikel[2] = a2 ;
}


/************************************************************/
/*   Friend-functie                            (P10-F08B)   */
/************************************************************/


void Factuur (Prijzen &Prijs , Aantal &Besteld)
{
  float Bedrag , Totaal=0 ;
  int   i ;

  for (i=0 ; i<3 ; i++)
  {
    cout << "\nArtikel(" << i << "):\t" ;
    cout << Besteld.Artikel[i] << " * " ;
    cout << Prijs.Artikel[i]   << " = " ;

    Bedrag = Besteld.Artikel[i] * Prijs.Artikel[i] ;
    Totaal += Bedrag ;
    cout << "\t" << Bedrag ;
  } ;

  cout << "\n\nTotaalbedrag:\t\t\t" << Totaal ;
}


/************************************************************/
/*   Einde bronprogramma                       (P10-F08B)   */
/************************************************************/
