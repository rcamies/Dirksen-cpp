
/************************************************************/
/*   P05-F07           Dynamische toewijzing van geheugen   */
/*                     aan een klasse                       */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <stdlib.h>         // Standaard-bibliotheek (C / C++)
#include <string.h>         // Bibliotheek met string-functies

using namespace std;

class Regel                                // Klasse-definitie
{
  private: int   lengte ;        //   lengte van de tekstregel
           char  *regel ;        // pointer naar de tekstregel

  public:  Regel (char *tekst) ;           // constructor
           ~Regel (void) ;                 // destructor
           void weergeven (void) ;         // weergeef-functie
} ;



void main (void)                 // Begin hoofdfunctie P05-F07

{
  Regel  r1("Hallo mensen!\n") ;   // Declaratie/initialisatie
                                   //     van klasse-object r1



  r1.weergeven() ;           // regel op beeldscherm weergeven

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}                                // Einde hoofdfunctie P05-F07



/************************************************************/
/*   Constructor van de klasse Regel                        */
/************************************************************/

Regel::Regel (char *tekst)
{
  lengte = strlen(tekst) + 1 ;  // Bepalen van benodigd aantal
  regel  = new char [lengte] ;  // geheugenplaatsen, dynamisch
  if (regel == NULL)            // reserveren van dit geheugen
  {
    cout << "\nHet geheugen " ;       // Geef foutmelding bij
    cout << "is vol" << flush ;       // onvoldoende geheugen
    getch() ;                         // en breek programma af
    exit(1) ;
  }
                                 // Kopieer de string vanuit
  strcpy (regel , tekst) ;       // constructor-argument naar
                                 // het gereserveerde geheugen
}


/************************************************************/
/*   Destructor van de klasse Regel                         */
/************************************************************/

Regel::~Regel (void)
{
  delete [] regel ;        // Gereserveerde geheugen vrijgeven
}


/************************************************************/
/*   Element-functie van de klasse Regel                    */
/************************************************************/

void Regel::weergeven (void)
{
  cout << regel ;       // Tekstregel weergeven op beeldscherm
}
