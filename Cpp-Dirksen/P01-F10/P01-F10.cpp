
/************************************************************/
/*   P01-F10A               Uitwerking van oefenopgave 2    */
/*                                                          */
/*   Afwisselen van de formaten fixed en scientific bij     */
/*   het weergeven van varabelen van het type double.       */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <iomanip>        // Bibliotheek met IO-manipulators

using namespace std;

void main(void)
{
    double  v1, v2, v3, v4, v5;      // declaratie van 5 variabelen
    //       van het type "double"

    cout << (char)033 << "[2J";              // Wis beeldscherm


    cout << "Uitvoer formatteren van floating-point-waarden";
    cout << "   (type double)";

    cout << "\n\nInvoer (5 maal):";
    cout << "\t\t";  cin >> v1;
    cout << "\t\t";  cin >> v2;
    cout << "\t\t";  cin >> v3;
    cout << "\t\t";  cin >> v4;
    cout << "\t\t";  cin >> v5;


    cout.setf(ios::scientific);   // formaat = scientific voor
    // weergeven van twee waarden
    cout << "\n\nUitvoer:";
    cout << "\t" << setw(9) << setprecision(6) << v1;
    cout << "\n\t\t" << setw(7) << setprecision(6) << v2;


    cout.unsetf(ios::scientific); // formaat = fixed voor het
    cout.setf(ios::fixed);        // weergeven van twee waarden

    cout << "\n\t\t" << setw(21) << setprecision(10) << v3;
    cout << "\n\t\t" << setw(12) << setprecision(10) << v4;


    cout.unsetf(ios::fixed);     // formaat = scientific voor
    cout.setf(ios::scientific);  // weergeven van vijfde waarde

    cout << "\n\t\t" << setw(5) << setprecision(3) << v5;


    cout << "\n\nDruk op een toets: " << flush;
    getch();
}
