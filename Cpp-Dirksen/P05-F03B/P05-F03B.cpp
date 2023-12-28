
/************************************************************/
/*   P05-F03B     Test van de functies malloc() en free()   */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <stdlib.h>         // Bibliotheek met malloc en free

#define  AANTAL 100         // Aantal elementen van de
                            // dynamische array
#define  START 70           // Beginwaarde voor het eerste
                            // element van de dynamische array
using namespace std;

void main(void)
{
    int i, * wijzer = NULL; // *wijzer = pointer naar elementen
    //       binnen de dynamische array



    wijzer = (int*)malloc(AANTAL * sizeof(int));
    if (wijzer == NULL)
    {                                  // Toewijzen van geheugen
        cout << "\nHet geheugen ";      // voor 100 int-elementen
        cout << "is vol" << flush;      // in de dynamische array
        getch();                        //   geef foutmelding bij
        exit(1);                        //   onvoldoende geheugen
    }                                  //  en breek programma af

    for (i = 0; i < AANTAL; i++)         // Gegevens naar de array
    {                                  // schrijven:
        wijzer[i] = i + START;          //        100 int-waarden 
    }                                  //        van 70 t/m 169

    for (i = 0; i < AANTAL; i++)         // Gegevens uit de array
    {                                  // op het beeldscherm
        cout << "\n element " << i;    // weergeven
        cout << " is " << wijzer[i];
    }

    free(wijzer);       // Vrijgeven van het geheugen, dat aan
    // de pointer '*wijzer' was toegewezen

    cout << "\n\n\nDruk op een toets: " << flush;
    getch();
}