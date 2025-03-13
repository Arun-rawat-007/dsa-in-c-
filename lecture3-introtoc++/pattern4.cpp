#include<iostream>

using namespace std ;

int main ( ){

    int n ;
    cin >> n ;

    int m = n - n/2;
// upper part 

    for ( int i = 1; i<=m; i++ ){
        // from m - i ;

        for ( int j = 1; j<=m-i; j++ ) {
            cout << " " << " " ;
        }

        //from 1 to i 
        for ( int j = 1; j<= i; j++ ){
            cout << "*" << " ";
        } 
        
        //from i - 1 ;

        for ( int j = 1 ; j<=i-1; j++ ){
            cout << "*" << " ";
        }
        cout << endl;
        
    }

    // for lower part 
    int x = n - m ;

    for ( int i = 1 ; i<=x; i++ ){
        // printing the space  1 to i 
        for ( int j = 1; j<= i ; j++ ){
            cout << " " << " " ;
        } 
        //printing star from 1 to n-i+1

        for ( int j = 1 ; j<= x-i+1; j++ ){
            cout << "*" << " " ;
        }

        //printing the star from x - i 

        for ( int j = 1 ; j<=x-i; j++ ) {
            cout << "*" << " ";
        }

        cout << endl;
        
    }

    return 0 ;
}