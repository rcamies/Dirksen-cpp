
/************************************************************/
/*  P04-F05           Default-waarden van een constructor   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

using namespace std;

class Test                               //   Klasse-definitie
{
  private:  int getal_1 , getal_2 ;      //  gegevenselementen

  public:   Test (int bw_1 = 1 , int bw_2 = 2)
              {                                 //     inline-
                getal_1 = bw_1 ;                //   definitie
                getal_2 = bw_2 ;                // constructor
              } ;

            void print (void)            //    element-functie
              { cout << getal_1 << "  " << getal_2 ; } ;
} ;

void main (void)
{
  Test  proef ;               // Klasse-object van type 'Test'



  proef.print() ;             // Controle van de initialisatie

  cout << "\n\n\nDruk op een toets: " << flush ;
  getch() ;
}
