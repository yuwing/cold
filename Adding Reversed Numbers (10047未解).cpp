#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    char a[ 50 ], b[ 50 ];
    
    for( int i = 0; i < n; i++ )
    {
       cin >> a >> b;
    
       char c[ 50 ] = "";     
       int carry = 0;
       
       if( strlen( a ) <= strlen ( b ) )
       {
          for( int j = 0; j < strlen( a ); j++ )
          {
           c[ j ] = carry + a[ j ] + b[ j ] - '0';
           if( c[ j ] > '9' )
           {
              carry = 1;
              c[ j ] -= 10;  
           }
           else
           {
              carry = 0; 
           }
          }
          
          for( int k = strlen( a ); k < strlen( b ); k++ ) //可能如下情况305 794最后的数为四位 
         {
          c[ k ] = b[ k ] + carry - '0';
          if( c[ k ] > '9' )
           {
              carry = 1;
              c[ k ] -= 10;  
           }
           else
           {
              carry = 0; 
           }
          }
          
          if( carry == 1 )
          {
           c[ strlen( b ) ] = '1';
           for( int l = 0; l <= strlen( b ); l++ )
           if( c[ l ] != '0' )
           cout << c[ l ]; 
          }
          else 
          {
           for( int l = 0; l < strlen( b ); l++ )
           if( c[ l ] != '0' )
           cout << c[ l ];
          }
          
          cout << endl;
       }
       
       else
       {
          for( int j = 0; j < strlen( b ); j++ )
          {
           c[ j ] = carry + a[ j ] + b[ j ] -'0';
           if( c[ j ] > '9' )
           {
              carry = 1;
              c[ j ] -= 10;  
           }
           else
           {
              carry = 0; 
           }
          }
          
        for( int k = strlen( b ); k < strlen( a ); k++ )
         {
          c[ k ] = a[ k ] + carry;
          if( c[ k ] > '9' )
           {
              carry = 1;
              c[ k ] -= 10;  
           }
           else
           {
              carry = 0; 
           }
         }
          
          if( carry == 1 )
          {
           c[ strlen( a ) ] = '1';
           for( int l = 0; l <= strlen( a ); l++ )
           if( c[ l ] != '0' )
           cout << c[ l ]; 
          }
          else 
          {
           for( int l = 0; l < strlen( a ); l++ )
           if( c[ l ] != '0' )
           cout << int( c[ l ] - '0' );
          }
          
          cout << endl;
       }
      
    }
    
    system( "pause" );
    return 0;
}
