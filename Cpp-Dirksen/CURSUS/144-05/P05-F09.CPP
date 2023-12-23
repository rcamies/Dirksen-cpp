
/************************************************************/
/*   P05-F09           Dynamische toewijzing van geheugen   */
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

  public:  Regel (void) ;                 // constructor
           ~Regel (void) ;                // destructor
           void weergeven (void) ;        // weergeef-functie
           void toekennen (char *tekst) ; // waarde-toekenning
} ;



void main (void)                 // Begin hoofdfunctie P05-F09
{
  Regel  r1 ;               // Declaratie van klasse-object r1
  int    nr ;               //  hulp-variabele voor de for-lus



  r1.weergeven () ;          // regel op beeldscherm weergeven

  for (nr=0 ; nr<10000000 ; nr++)
  {
    for (int z= 0; z< 10000; z++ )
		r1.toekennen ("Deze string bestaat uit 39 karakters. \n");
    cout << nr ;
    r1.weergeven () ;
  }

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}                                // Einde hoofdfunctie P05-F09



/************************************************************/
/*   Constructor van de klasse Regel                        */
/************************************************************/

Regel::Regel (void)
{
  lengte = 1 ;                        // Dynamisch reserveren
  regel  = new char [lengte] ;        // van 1 geheugenplaats
  if (regel == NULL)                  // voor een lege string
  {
    cout << "\nHet geheugen " ;       // Geef foutmelding bij
    cout << "is vol" << flush ;       // onvoldoende geheugen
    getch() ;                         // en breek programma af
    exit(1) ;
  }
                                // Kopieer de lege string naar
  strcpy (regel , "") ;         // het gereserveerde geheugen
}


/************************************************************/
/*   Destructor van de klasse Regel                         */
/************************************************************/

Regel::~Regel (void)
{
  delete [] regel ;        // Gereserveerde geheugen vrijgeven
}


/************************************************************/
/*   Weergeef-functie van de klasse Regel                   */
/************************************************************/

void Regel::weergeven (void)
{
  cout << regel ;       // Tekstregel weergeven op beeldscherm
}


/************************************************************/
/*   Toekennings-functie van de klasse Regel                */
/************************************************************/

void Regel::toekennen (char *tekst)
{
  // delete [] regel ;  // NIET meer wissen van de oude string

  lengte = strlen(tekst) + 1 ;  // Bepalen van benodigd aantal
  regel  = new char [lengte] ;  // geheugenplaatsen, dynamisch
  if (regel == NULL)            // reserveren van dit geheugen
  {
    cout << "\nHet geheugen " ;       // Geef foutmelding bij
    cout << "is vol" << flush ;       // onvoldoende geheugen
    getch() ;                         // en breek programma af
    exit(1) ;
  }
                                 // Kopieer nieuwe string naar
  strcpy (regel , tekst) ;       // het gereserveerde geheugen
}
