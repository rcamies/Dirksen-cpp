
/************************************************************/
/*   P09-F06                  Uitwerking van oefenopgave 1  */
/*              Optellen en aftrekken van twee breuken via  */
/*              herdefiniering van de operators '+' en '-'  */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <conio.h>          // Bibliotheek met putch en getch
#include <dirksen.h>        // Bibliotheek voor Dirksen-cursus


class Breuk                                // Klasse-definitie
{
  private:  int  teller ;              // Van een breuk mag de
            int  noemer ;              // noemer nooit 0 zijn

  public:   Breuk () ;                        // Constructor 1
            Breuk (int T , int N=1) ;         // Constructor 2
            Breuk operator + (Breuk&) ;       // Element-
            Breuk operator - (Breuk&) ;       //      functies
            void  Print () ;
} ;


using namespace std; 

int main (void)                  // Begin hoofdfunctie P09-F06
{
  Breuk  getal1 (5,7) ;     // Eerste breuk: beginwaarde = 5/7
  Breuk  getal2 (3,2) ;     // Tweede breuk: beginwaarde = 3/2
  Breuk  result       ;     // Derde breuk:  geen beginwaarde


  WisBeeld ;

                                          // "Functie-aanroep"
  result = getal1 + getal2 ;              // hergedefinieerde
                                          // operator '+'

  cout << "\n\nNa de optelling geldt:" ;    // Weergeven van 3
  cout << "\n\t\tEerste breuk = "      ;    // waarden na de
  getal1.Print()                       ;    // terugkeer uit
  cout << "\n\t\tTweede breuk = "      ;    // element-functie
  getal2.Print()                       ;    // 'operator +'
  cout << "\n\t\tResult (som) = "      ;
  result.Print()                       ;

                                          // "Functie-aanroep"
  result = getal1 - getal2 ;              // hergedefinieerde
                                          // operator '-'

  cout << "\n\nNa de aftrekking geldt:" ;   // Weergeven van 3
  cout << "\n\t\tEerste breuk = "       ;   // waarden voor de
  getal1.Print()                        ;   // aanroep van de
  cout << "\n\t\tTweede breuk = "       ;   // element-functie
  getal2.Print()                        ;   // 'operator -'
  cout << "\n\t\tResult (min) = "       ;
  result.Print()                        ;


  PauzeStop ;
}                                // Einde hoofdfunctie P09-F06



/************************************************************/
/*   Constructor 1 voor klasse Breuk                        */
/************************************************************/

Breuk::Breuk (void)               // Deze constructor geeft de
{                                 // elementen van een klasse-
  teller = 0 ;                    // object vaste beginwaarden 
  noemer = 1 ;                    // (zonder de overdracht van
}                                 //               parameters)


/************************************************************/
/*   Constructor 2 voor klasse Breuk                        */
/************************************************************/

Breuk::Breuk (int T , int N)      // Deze constructor geeft de
{                                 // elementen van een klasse-
  teller = T ;                    // object beginwaarden  (via
  noemer = N ;                    //     het functie-argument)
}


/************************************************************/
/*   Optellen van twee breuken van klasse Breuk             */
/************************************************************/

Breuk  Breuk::operator + (Breuk &B2)
{
  Breuk  som ;                  // Declaratie lokale variabele

  som.teller = teller * B2.noemer + B2.teller * noemer ;
  som.noemer = noemer * B2.noemer ;

  if (som.noemer == 0)  som.noemer = 1 ;

  return som ;              // Teruggave van de functie-waarde
}


/************************************************************/
/*   Aftrekken van twee breuken van klasse Breuk            */
/************************************************************/

Breuk  Breuk::operator - (Breuk &B2)
{
  Breuk  min ;                  // Declaratie lokale variabele

  min.teller = teller * B2.noemer - B2.teller * noemer ;
  min.noemer = noemer * B2.noemer ;

  if (min.noemer == 0)  min.noemer = 1 ;

  return min ;              // Teruggave van de functie-waarde
}


/************************************************************/
/*   Weergeven van een breuk van klasse Breuk               */
/************************************************************/

void Breuk::Print (void)
{
     cout << teller << "/" << noemer ;
}
