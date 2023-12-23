
/************************************************************/
/*   P04-F09B                    Uitwerking oefenopgave 1   */
/*                                                          */
/*                      Testen van de constructor en de     */
/*                      element-functies van klasse Emmer   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

#define  PI  3.14159

using namespace std;

class Emmer
{
  private:  float  factor_dh  , factor_dd  , hoogte ;
            float  diameter_1 , diameter_2 , inhoud ;

  public:   Emmer (void)
              {
                factor_dh = 0.9 ;        //   inline-definitie
                factor_dd = 0.6 ;        // van de constructor
              }

            void Invoer_Hoogte  (void) ;  // declaratie van de
            void Bereken_Inhoud (void) ;  //  element-functies
            void Uitvoer_Emmer  (void) ;
} ;



void main (void)                // Begin hoofdfunctie P04-F09B
{
  Emmer  Svat ;



  Svat.Invoer_Hoogte()  ;      // Aanroep van element-functies
  Svat.Bereken_Inhoud() ;
  Svat.Uitvoer_Emmer()  ;      // Controle via het beeldscherm

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}                               // Einde hoofdfunctie P04-F09B


/************************************************************/
/*    Element-functie voor het inlezen van de hoogte        */
/************************************************************/

void Emmer::Invoer_Hoogte (void)
{
  cout << "\n\tVoer de hoogte in: " << flush ;
  cin  >> hoogte ;
}


/************************************************************/
/*    Element-functie voor het berekenen van de inhoud      */
/************************************************************/

void Emmer::Bereken_Inhoud (void)
{
  float diameter_gem_m2;

  diameter_1 = factor_dh * hoogte ;
  diameter_2 = factor_dd * diameter_1 ;
  diameter_gem_m2 = (diameter_1 * diameter_1 +  
		     diameter_2 * diameter_2) / 2;

  inhoud          = PI / 4 * diameter_gem_m2 * hoogte;


  inhoud          = inhoud / 1000 ;    // omrekenen cm3 naar liters
}


/************************************************************/
/*    Extra element-functie voor controle via beeldscherm   */
/************************************************************/

void Emmer::Uitvoer_Emmer (void)
{
  cout << "\nDiameter 1 = " << diameter_1 << " cm" ;
  cout << "\nDiameter 2 = " << diameter_2 << " cm" ;
  cout << "\nDe hoogte  = " << hoogte     << " cm" ;
  cout << "\nDe inhoud  = " << inhoud  << " liter" ;
}
