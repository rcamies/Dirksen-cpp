
/************************************************************/
/*   P15-F01     Les 144-15          Uitwerking opdracht 1   */
/*                                                          */
/*                                                          */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <vector>       // Bibliotheek met cin, cout, cerr

using namespace std;

int main (void)
{

	vector< int > coll;

	for( int i = 1; i <= 6; i++ )
		coll.push_back( i );

	for ( int i = 0; i < coll.size(); i++  )
		cout << coll[i] << ' ';

  exit(1) ;
}
