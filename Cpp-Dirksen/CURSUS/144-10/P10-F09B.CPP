
/************************************************************/
/*   P10-F09     Voert enkele afmetingen van een buis in    */
/*               en berekent daaruit doorsnede en volume.   */
/*               Uitvoer verloopt via een friend-functie,   */
/*               die ook de operator '<<' herdefinieert.    */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <dirksen.h>        // Bibliotheek voor Dirksen-cursus
#define  PI 3.14159


class BUIS                                 // Klasse-definitie
{
  private:  float  diameter1 , diameter2 ;
            float  wanddikte , doorsnede ;
            float  lengte    , volume    ;

  public:   void invoer_gegevens (void)  ;         // Element-
            void bereken_gegevens (void) ;         // functies
            friend  ostream& operator << (ostream& , BUIS&)  ;
} ;


using namespace std;

int main (void)                  // Begin hoofdfunctie P10-F09
{
  BUIS  buis ;


  WisBeeld               ;         // Wis beeldscherm en lees
  buis.invoer_gegevens() ;         // de verlangde gegevens in


  buis.bereken_gegevens() ;       // Bereken afmetingen en het
  cout << buis            ;       //   volume en voer deze uit


  PauzeStop ;                    // Einde hoofdfunctie P10-F09
}


