#include <iostream>

using namespace std;

int main()
{
   for( int i=0; i<10; i++ )
   {
      for ( int j=0; j < i; j++ )
      {
        cout << " * ";
      }
      cout << endl;
   }


   cout << " CHLOE "<<endl;
   for ( int j=0; j < 20; j++ )
   {
      cout << " * ";
   } 
   cout << endl;

   return 0;
}
