
/************************************************************/
/*   P15-F01     Les 144-15          Uitwerking opdracht 1   */
/*                                                          */
/*                                                          */
/************************************************************/


#include <iostream>       // Bibliotheek met cin, cout, cerr
#include <set>			 

using namespace std;

int main (void)
{

	typedef std::set<int> IntSet;

	IntSet coll;

	coll.insert( 3  );
	coll.insert( 1  );
	coll.insert( 5  );
	coll.insert( 4  );
	coll.insert( 1  );
	coll.insert( 6  );
	coll.insert( 2  );

	IntSet::iterator pos;
	for ( pos = coll.begin(); pos != coll.end(); ++pos )
		cout << *pos << ' ';

  exit(1) ;
}
