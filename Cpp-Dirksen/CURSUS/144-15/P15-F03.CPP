
/************************************************************/
/*   P15-F01     Les 144-15          Uitwerking opdracht 1   */
/*                                                          */
/*                                                          */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <vector>			 

using namespace std;

int main (void)
{

	
	vector< char > coll;

	for( int i = 1; i <= 6; i++ )
		coll.push_back( 'A'+i );

	vector<char>::iterator pos;
	for ( pos = coll.begin(); pos != coll.end(); ++pos )
		cout << *pos << ' ';

  exit(1) ;
}
