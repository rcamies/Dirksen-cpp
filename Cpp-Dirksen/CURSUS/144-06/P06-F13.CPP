
/************************************************************/
/*   P06-F13                     Uitwerking oefenopgave 2   */
/*                         Overdracht van array-elementen   */
/*                            via referentie-overdrachten   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

#define  MAX 100
                                    // 3 functie-prototypes:
void Nullen (int Tabel[MAX]) ;      //   Array's als parameter
void Vullen (int Tabel[MAX]) ;      // worden door de compiler
int  Zoeken (int Tabel[MAX]) ;      //  automatisch omgezet in
                                    // referentie-overdrachten

using namespace std; 

int main (void)                  // Begin hoofdfunctie P06-F13
{
  int   Tabel[MAX] ;
  int   maxim      ;



  Nullen (Tabel) ;                      // 3 functie-aanroepen
  Vullen (Tabel) ;
  maxim = Zoeken (Tabel) ;

  cout << "\n\nHet grootste getal in de tabel is: " << maxim ;

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch () ;
  return 0 ;
}                                // Einde hoofdfunctie P06-F13



/************************************************************/
/*    Functies van programma P06-F13                        */
/************************************************************/



void Nullen (int Tabel[MAX])       // Vul alle tabel-elementen
{                                  //          met de waarde 0
  int  i ;

  for (i=0 ; i<MAX ; i++)
    Tabel[i] = 0 ;
}



void Vullen (int Tabel[MAX])     // Vul de via het toetsenbord
{                                //  opgegeven tabel-elementen
  int  i ;                       //  met de ingevoerde waarden

  cout << "\nNummer: " ;
  cin  >> i ;

  while (i < MAX)                // Herhaal het invoeren van
  {                              // waarden en nummers, totdat
    cout << "\tWaarde: " ;       // een nummer 100 of hoger is
    cin  >> Tabel[i] ;           // ingevoerd
    cout << "\nNummer: " ;
    cin  >> i ;
  }
}



int Zoeken (int Tabel[MAX])         // Zoek de grootste waarde
{                                   //          in de tabel op
  int  i , grootste = 0 ;

  for (i=0 ; i<MAX ; i++)
  {
    if (Tabel[i] > grootste)        // Wordt een hogere waarde
      grootste = Tabel[i] ;         // gevonden, ken deze dan
  }                                 // toe aan 'grootste'

  return grootste ;
}
