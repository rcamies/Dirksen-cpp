
/************************************************************/
/*                                                          */
/*    P08-F07              Huiswerkopgave van les 144-08    */
/*                                                          */
/*    Programmeur: naam:                                    */
/*                 cursistnr:                               */
/*                 datum:                                   */
/*                                                          */
/*    Compiler:    naam:                                    */
/*                 fabrikaat:                               */
/*                 versie:                                  */
/*                                                          */
/*    Bijzonderheden:  Revisie 20000502                     */
/*                                                          */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

 ...                        // ! Uw include statements

#define  GROOTTE 60         // Aantal elementen van elke tabel
#define  MAXRAND 200        // Maximale random-waarde


class Tabellen                             // Klasse-definitie
{
  private:  int  KlasTabel [GROOTTE];

  public:                   // Prototypes van element-functies
            ...             // ! Uw functie prototypes
};

...                         // ! Uw declaraties en definities

using namespace std; 

int main (void)                  // Begin hoofdfunctie P08-F07
{
  Tabellen  SortTabel;           // Klasse-object (statisch)
  ...                            // ! declaratie voor dynamisch
                                 //   klasse-object
  Tabellen  &RandTabel = ... ;   // Referentie naar dynamische
                                 // klasse-object.

  ...                            // ! Uw eigen code regels

}                                // Einde hoofdfunctie P08-F07


...                              // ! Uw functies


