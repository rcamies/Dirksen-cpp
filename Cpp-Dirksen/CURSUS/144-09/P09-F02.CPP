
/************************************************************/
/*   P09-F02     Optellen van twee breuken via een element- */
/*               functie. Beide breuken worden via een      */
/*               referentie-overdracht doorgegeven.         */
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
            void Telop (Breuk& , Breuk&) ;    // Element-
            void Print () ;                   //      functies
} ;


using namespace std; 

int main (void)                  // Begin hoofdfunctie P09-F02
{
  Breuk  getal1 (5,7) ;     // Eerste breuk: beginwaarde = 5/7
  Breuk  getal2 (3,2) ;     // Tweede breuk: beginwaarde = 3/2
  Breuk  result       ;     // Derde breuk:  geen beginwaarde


  WisBeeld ;


  cout << "Voor de optelling geldt:" ;      // Weergeven van 3
  cout << "\n\t\tEerste breuk = "    ;      // waarden voor de
  getal1.Print()                     ;      // aanroep van de
  cout << "\n\t\tTweede breuk = "    ;      // element-functie
  getal2.Print()                     ;      // Telop
  cout << "\n\t\tResult (som) = "    ;
  result.Print()                     ;


  result.Telop (getal1 , getal2) ;          // Functie-aanroep


  cout << "\n\nNa de optelling geldt:" ;    // Weergeven van 3
  cout << "\n\t\tEerste breuk = "      ;    // waarden na de
  getal1.Print()                       ;    // terugkeer uit
  cout << "\n\t\tTweede breuk = "      ;    // element-functie
  getal2.Print()                       ;    // Telop
  cout << "\n\t\tResult (som) = "      ;
  result.Print()                       ;


  PauzeStop ;
}                                // Einde hoofdfunctie P09-F02



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

void Breuk::Telop (Breuk &B1 , Breuk &B2)
{
  teller = B1.teller * B2.noemer + B2.teller * B1.noemer ;
  noemer = B1.noemer * B2.noemer ;

  if (noemer == 0)  noemer = 1 ;
}


/************************************************************/
/*   Weergeven van een breuk van klasse Breuk               */
/************************************************************/

void Breuk::Print (void)
{
     cout << teller << "/" << noemer ;
}


/************************************************************/
/*   Einde van bronprogramma P09-F02                        */
/************************************************************/
