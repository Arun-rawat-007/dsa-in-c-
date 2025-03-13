#include<iostream>

using namespace std ;

int main ( ) {
    
    int n ;
    cin >> n ;
    int num = 1;

    for ( int i = 1; i<= n ; i++ ) {

        for ( int j = 1; j <= i ; j ++ ) {
            cout << num << " " ;
            num++;
        }
        cout << endl ; 

    }
// using the while loop 

    // int i = 1 ;

    // while ( i<= n ) {

    //     int j = 1; 

    //     while ( j <= i ) {
    //         cout << num << " " ;
    //         num++;
    //         j++;
    //     }
    //     cout << endl;

    //     i++; 
    // }
    return 0 ; 
}