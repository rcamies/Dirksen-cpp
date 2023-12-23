
/************************************************************/
/*   P10-F08A    Toegang tot twee verschillende klassen     */
/*               via twee verschillende element-functies    */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch


class Prijzen                              // Klasse-definitie
{
  private: float Artikel[3] ;

  public:  Prijzen (float , float , float) ;    // Constructor
           float Geef_Prijs (int) ;         // Element-functie
} ;


class Aantal                               // Klasse-definitie
{
  private: int  Artikel[3] ;

  public:  Aantal (int , int , int) ;           // Constructor
           int  Geef_Aantal (int)   ;       // Element-functie
} ;


using namespace std;

int main (void)                 // Begin hoofdfunctie P10-F08A
{

  Prijzen  Prijs   (33.15 , 27.45 , 48.79) ;  // Declaratie en
  Aantal   Besteld (5 , 9 , 3)             ;  // initialisatie


  void Factuur (Prijzen& , Aantal&)  ;    // Functie-prototype



  Factuur (Prijs , Besteld)  ;              // Druk factuur af


  cout << endl << endl << endl         ;
  cout << "Druk op een toets:" << flush ;
  getch()  ;
  return 0 ;
}                               // Einde hoofdfunctie P10-F08A


/************************************************************/
/*   Element-functies voor de klassen  Prijzen  en  Aantal  */
/************************************************************/


Prijzen::Prijzen (float a0, float a1, float a2) // Constructor
{                                               // voor klasse
  Artikel[0] = a0 ;                             // Prijzen
  Artikel[1] = a1 ;
  Artikel[2] = a2 ;
}


float Prijzen::Geef_Prijs (int artnr)  // Deze element-functie
{                                      // maakt de toegang tot
  return  Artikel [artnr] ;            // de klasse mogelijk
}                                      // vanuit ext. functies


Aantal::Aantal (int a0, int a1, int a2)         // Constructor
{                                               // voor klasse
  Artikel[0] = a0 ;                             // Aantal
  Artikel[1] = a1 ;
  Artikel[2] = a2 ;
}


int Aantal::Geef_Aantal (int artnr)    // Deze element-functie
{                                      // maakt de toegang tot
  return  Artikel [artnr] ;            // de klasse mogelijk
}                                      // vanuit ext. functies


/************************************************************/
/*   Externe functie                           (P10-F08A)   */
/************************************************************/


void Factuur (Prijzen &Prijs , Aantal &Besteld)
{
  float Bedrag , Totaal=0 ;
  int   i ;

  for (i=0 ; i<3 ; i++)
  {
    cout << "\nArtikel(" << i << "):\t"     ;
    cout << Besteld.Geef_Aantal(i) << " * " ;
    cout << Prijs.Geef_Prijs(i)    << " = " ;

    Bedrag = Besteld.Geef_Aantal(i) * Prijs.Geef_Prijs(i) ;
    Totaal += Bedrag ;
    cout << "\t" << Bedrag ;
  } ;

  cout << "\n\nTotaalbedrag:\t\t\t" << Totaal ;
}


/************************************************************/
/*   Einde bronprogramma                       (P10-F08A)   */
/************************************************************/
