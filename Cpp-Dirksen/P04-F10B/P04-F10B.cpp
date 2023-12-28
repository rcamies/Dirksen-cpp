
/************************************************************/
/*   P04-F010B                   Uitwerking oefenopgave 2   */
/*                                                          */
/*                  Testen van de constructor, destructor   */
/*                  en element-functies van klasse Emmer    */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators

#define  PI  3.14159

using namespace std;


class Emmer
{
private:  float  factor_dh, factor_dd, hoogte;
       float  diameter_1, diameter_2, inhoud;

public:   Emmer(float DH, float DD)
{
    factor_dh = DH;         //   inline-definitie
    factor_dd = DD;         // van de constructor
}

      void Invoer_Hoogte(void);  // declaratie van de
      void Bereken_Inhoud(void);  //  element-functies
      ~Emmer(void);  //  en de destructor
};



void main(void)               // Begin hoofdfunctie P04-F010B
{
    Emmer  Aker(1.1, 0.7);     // Declaratie en initialisatie
    Emmer  Puts(1.0, 0.5);     // van de 4 klasse objecten
    Emmer  Svat(0.9, 0.6);
    Emmer  Vaas(0.7, 0.6);



    cout << "\nModel Aker:";
    Aker.Invoer_Hoogte();    // Aanroep van element-functies
    Aker.Bereken_Inhoud();

    cout << "\nModel Puts:";
    Puts.Invoer_Hoogte();    // Aanroep van element-functies
    Puts.Bereken_Inhoud();

    cout << "\nModel Svat:";
    Svat.Invoer_Hoogte();    // Aanroep van element-functies
    Svat.Bereken_Inhoud();

    cout << "\nModel Vaas:";
    Vaas.Invoer_Hoogte();    // Aanroep van element-functies
    Vaas.Bereken_Inhoud();

    cout << "\n\n\nDruk op een toets: " << flush;
    getch();
}                               // Einde hoofdfunctie P04-F10B



/************************************************************/
/*    Element-functie voor het inlezen van de hoogte        */
/************************************************************/

void Emmer::Invoer_Hoogte(void)
{
    cout << "\n\tVoer de hoogte in: " << flush;
    cin >> hoogte;
}


/************************************************************/
/*    Element-functie voor het berekenen van de inhoud      */
/************************************************************/

void Emmer::Bereken_Inhoud(void)
{
    float diameter_gem_m2;

    diameter_1 = factor_dh * hoogte;
    diameter_2 = factor_dd * diameter_1;
    diameter_gem_m2 = (diameter_1 * diameter_1 +
        diameter_2 * diameter_2) / 2;

    inhoud = PI / 4 * diameter_gem_m2 * hoogte;


    inhoud = inhoud / 1000;    // omrekenen cm3 naar liters
}


/************************************************************/
/*    Destructor voor het weergeven van de resultaten       */
/************************************************************/

Emmer::~Emmer(void)
{
    cout.setf(ios::fixed);
    cout << setprecision(1);

    cout << "\nDH/DD = " << setw(3) << factor_dh;
    cout << "/" << setw(3) << factor_dd << "    ";
    cout << "hoogte = " << setw(4) << hoogte << " cm    ";
    cout << "inhoud = " << setw(4) << inhoud << " liter ";
}
