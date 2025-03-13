#include<iostream>

using namespace std ;

int main ( ) {

    int n ;
    cin >> n ;

    int m = n - n/2;
    int x = n - m ;

    for ( int i = 1; i<= m; i++ ) {
        // for upper part 
        for (int j = 1; j<=i; j++ ){

            cout << "*" << " " ;

        }
        cout << endl;
    }
    // for lower part 
    for ( int i = 1; i<=x; i++ ){
        for ( int j = 1; j<=x-i+1; j++ ) {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0 ; 
}