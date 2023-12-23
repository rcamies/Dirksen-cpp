
/************************************************************/
/*   P15-F08     Les 144-15          Uitwerking opdracht 1   */
/*   compiler met /EHa                                      */
/*                                                          */
/************************************************************/

#include <iostream>       // Bibliotheek met cin, cout, cerr

using namespace std;

int main (void)
{

	try 
	{

		int  a = 4;
		int  b = 0;
	
		throw 1;
		int c = a+b;
	}
	catch (...)
	{
		printf("Er is een fout opgetreden");
	}
  
	exit(1) ;
}
