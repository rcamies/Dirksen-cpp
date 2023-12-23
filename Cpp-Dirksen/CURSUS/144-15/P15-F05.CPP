
/************************************************************/
/*   P15-F01     Les 144-15          Uitwerking opdracht 1   */
/*                                                          */
/*                                                          */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <algorithm>			 
#include <vector>			 

using namespace std;

int main (void)
{

	typedef std::vector<int> IntVector;

	IntVector coll;

	coll.push_back( 3  );
	coll.push_back( 1  );
	coll.push_back( 5  );
	coll.push_back( 4  );
	coll.push_back( 1  );
	coll.push_back( 6  );
	coll.push_back( 2  );

	sort( coll.begin(), coll.end() );


	IntVector::iterator pos;
	for ( pos = coll.begin(); pos != coll.end(); ++pos )
		cout << *pos << ' ';

  
	exit(1) ;
}
