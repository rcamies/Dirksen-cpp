
/************************************************************/
/*   P15-F09     Les 144-15          Uitwerking opdracht 1   */
/*   compiler met /EHa                                      */
/*                                                          */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr

using namespace std;

int main (void)
{

	int a = rand(); 
	char pLine1[20];
	char pLine2[20];
	gets_s( pLine1,19 );
	gets_s( pLine2,19 );

	printf( "Line1 entered was: %s\n", pLine1 );
	printf( "Line2 entered was: %s\n", pLine2 );
	exit(1) ;
}
