
/************************************************************/
/*  P04-F04B         Inline-definitie van een constructor   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

using namespace std;

class Test                               //   Klasse-definitie
{
private:  int getal_1, getal_2;      //  gegevenselementen

public:   Test(void)                  //   inline-definitie
{                          // van de constructor
    getal_1 = 1;
    getal_2 = 2;
};

      void print(void)            //    element-functie
      {
          cout << getal_1 << "  " << getal_2;
      };
};


void main(void)
{
    Test  proef;               // Klasse-object van type 'Test'



    proef.print();             // Controle van de initialisatie

    cout << "\n\n\nDruk op een toets: " << flush;
    getch();
}
