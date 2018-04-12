#include <iostream>

using namespace std;

int main()
{
   // double for loop to draw a triangle of  <*>
   for( int i=0; i<10; i++ )
   {
      for ( int j=0; j < i; j++ )
      {
        cout << " * ";
      }
      cout << endl;
   }


   // single for loop to draw a line of <*>
   cout << " CHLOE "<<endl;
   for ( int j=0; j < 20; j++ )
   {
      cout << " * ";
   } 
   cout << endl;

   cout << " OWLIVER "<<endl;
   int a=0 ;
   while ( a<10 )
   {
      cout <<" * " ;
      a++ ;
   }
   cout << endl ;


   return 0;
}
