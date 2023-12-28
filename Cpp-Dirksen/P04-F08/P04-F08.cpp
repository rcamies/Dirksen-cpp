
/************************************************************/
/*    P04-F08     Onderzoeken van de automatische aanroep   */
/*                van de constructor en de destructor door  */
/*                de compiler                               */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch

using namespace std;


class Rekenen                              // Klasse-definitie
{
private:  float  teller;               // declaratie van de
       float  noemer;               // gegevenselementen
       float  result;

public:   Rekenen(float boven, float onder); // constructor
      ~Rekenen(void);                 //  destructor
      void delen(void);             // element-functie
};



void main(void)                 // Begin hoofdfunctie P04-F08
{
    Rekenen  getal(0.3, 0.4); // Declaratie van klasse-object

    cout << "\nDruk op een toets: " << flush;
    getch();

    getal.delen();    // Aanroep van de element-functie 'delen'

    cout << "\nDruk op een toets: " << flush;
    getch();
}                                // Einde hoofdfunctie P04-F08



/************************************************************/
/*    Constructor                                           */
/************************************************************/

Rekenen::Rekenen(float boven, float onder)
{
    if (onder == 0.0)
        onder = 1.0;
    teller = boven;
    noemer = onder;
    result = 0.0;



    cout << "\n\t" << "Aanroep van de constructor:";
    cout << "\n\t" << "Teller = " << teller;
    cout << "\n\t" << "Noemer = " << noemer;
    cout << "\n\t" << "Result = " << result << endl;
}

/************************************************************/
/*    Destructor                                            */
/************************************************************/

Rekenen::~Rekenen(void)
{
    teller = 0.0;
    noemer = 0.0;

    cout << "\n\t" << "Aanroep van de destructor:";
    cout << "\n\t" << "Teller = " << teller;
    cout << "\n\t" << "Noemer = " << noemer;
    cout << "\n\t" << "Result = " << result << endl;
}

/************************************************************/
/*    Element-functie                                       */
/************************************************************/

void Rekenen::delen(void)
{
    result = teller / noemer;

    cout << "\n\t" << "Aanroep van de element-functie:";
    cout << "\n\t" << "Teller = " << teller;
    cout << "\n\t" << "Noemer = " << noemer;
    cout << "\n\t" << "Result = " << result << endl;
}
