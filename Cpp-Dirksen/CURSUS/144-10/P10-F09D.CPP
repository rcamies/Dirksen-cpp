
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


/************************************************************/
/*   Element-functies van klasse BUIS           (P10-F09)   */
/************************************************************/


void BUIS::invoer_gegevens (void)
{
  cout << "Voer de buitendiameter van de buis in: " ;
  cin  >> diameter1 ;
  cout << "Voer de wanddikte van de buis in:      " ;
  cin  >> wanddikte ;
  cout << "Voer de lengte van de buis in:         " ;
  cin  >> lengte ;
}

/************************************************************/


void BUIS::bereken_gegevens (void)
{
  diameter2 = diameter1 - wanddikte - wanddikte ;
  doorsnede = PI * diameter2 * diameter2 / 4    ;
  volume    = doorsnede * lengte ;
}



/************************************************************/
/*  Friend-functie met toegang tot klassen BUIS en ostream  */
/************************************************************/


ostream& operator << (ostream &OS , BUIS &BB)
{
  OS << "\nDeze buis heeft de volgende afmetingen:" ;
  OS << "\n---------------------------------------" ;
  OS << "\nBuitendiameter:\t" << BB.diameter1 ;
  OS << "\nBinnendiameter:\t" << BB.diameter2 ;
  OS << "\nWanddikte:\t"      << BB.wanddikte ;
  OS << "\nDoorsnede:\t"      << BB.doorsnede ;
  OS << "\nLengte:\t\t"       << BB.lengte    ;
  OS << "\n---------------------------------------" ;
  OS << "\nVolume:\t\t"       << BB.volume    ;

  return OS ;
}
