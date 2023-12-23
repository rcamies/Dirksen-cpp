/*************************************************************/
/*   P15-F09     Les 144-15          Uitwerking opdracht 1   */
/*   compiler met /EHa                                      */
/*                                                          */
/************************************************************/
#define _CRT_RAND_S

#include <iostream>       // Bibliotheek met cin, cout, cerr

using namespace std;

int main (void)
{

    unsigned int    number1;
	 errno_t err = rand_s( &number1); 
	 if ( err == 0 )
	 	printf( "getal1 = : %d\n", number1 );

    unsigned int    number2;
	 err = rand_s( &number2); 
	 if ( err == 0 )
	 	printf( "getal1 = : %d\n", number2 );

	 exit(1) ;
}
