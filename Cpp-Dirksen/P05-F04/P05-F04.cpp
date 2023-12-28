
/************************************************************/
/*   P05-F04   Vervangen van de functies malloc() en free() */
/*                      door de operators 'new' en 'delete' */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <stdlib.h>         // Standaard-bibliotheek (C / C++)

#define  AANTAL 100         // Aantal elementen van de
                            // dynamische array
#define  START 70           // Beginwaarde voor het eerste
                            // element van de dynamische array
using namespace std;

void main(void)
{
    int i, * wijzer = NULL; // *wijzer = pointer naar elementen
    //       binnen de dynamische array



    wijzer = new int[AANTAL];        // Toewijzen van geheugen
    if (wijzer == NULL)                // voor 100 int-elementen
    {                                  // in de dynamische array
        cout << "\nHet geheugen ";
        cout << "is vol" << flush;      //   geef foutmelding bij
        getch();                        //   onvoldoende geheugen
        exit(1);                        //  en breek programma af
    }

    for (i = 0; i < AANTAL; i++)         // Gegevens naar de array
    {                                  // schrijven:
        wijzer[i] = i + START;          //        100 int-waarden 
    }                                  //        van 70 t/m 169

    for (i = 0; i < AANTAL; i++)         // Gegevens uit de array
    {                                  // op het beeldscherm
        cout << "\n element " << i;    // weergeven
        cout << " is " << wijzer[i];
    }

    delete[] wijzer;    // Vrijgeven van het geheugen, dat aan
    // de pointer '*wijzer' was toegewezen

    cout << "\n\n\nDruk op een toets: " << flush;
    getch();
}