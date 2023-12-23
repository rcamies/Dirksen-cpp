
// Header-file  dirksen.h  t.b.v. cursus "Programmeren in C++"


#ifndef  dirksen_INCLUDED

  using namespace std;

  #define  dirksen_INCLUDED

  #define WisBeeld   for( int n =0 ; n<20; n++ ) { std::cout <<  "\n" ;}

  #define PauzeStop  std::cout << "\n\nDruk op een toets: " ; \
   std::cout << flush ; getch () ; return 0

#endif                          // Einde header-file dirksen.h
