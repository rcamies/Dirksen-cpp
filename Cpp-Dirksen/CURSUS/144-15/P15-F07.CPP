
/************************************************************/
/*   P15-F07     Les 144-15          Uitwerking opdracht 1   */
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
	
		int c = a / b;
	}
	catch (...)
	{
	}
  
	exit(1) ;
}
