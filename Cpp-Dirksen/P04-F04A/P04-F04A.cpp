
/************************************************************/
/*  P04-F04A         Inline-definitie van een constructor   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

class Test                               //   Klasse-definitie
{
private:  int getal_1, getal_2;      //  gegevenselementen

public:   Test(void)                  //   inline-definitie
{                          // van de constructor
    getal_1 = 1;
    getal_2 = 2;
};

      void print(void);          //    element-functie
};

using namespace std;

void main(void)
{
    Test  proef;               // Klasse-object van type 'Test'



    proef.print();             // Controle van de initialisatie

    cout << "\n\n\nDruk op een toets: " << flush;
    getch();
}

/************************************************************/
/*  Element-functie voor de controle van de initialisatie   */
/************************************************************/

void Test::print(void)
{
    cout << getal_1 << "  " << getal_2;
}
