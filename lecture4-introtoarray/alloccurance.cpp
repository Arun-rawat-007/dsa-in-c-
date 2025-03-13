#include<iostream>
using namespace std ;


int main ( ) {

    int arr[ ] = {10,20,30,10,20} ;

    int n = sizeof(arr) / sizeof(int) ;

    int t = 20 ;

    int i ;
    bool flag = false ; // assuming that target is not found 

    for ( i = 0 ; i<= n -1 ; i++ ) {

        if ( arr[i] == t ) {
            flag = true ;
            cout << i << " " ;
        }
    }

    if ( flag == false ) {
        cout << " target is not found " << endl;
    }

    // int cnt = 0 ;

    // for ( i = 0 ; i<= n-1 ; i++ ) {

    //     if ( arr[i] == t ) {
    //         cout << i << " " ;
    //         cnt++;
    //     }
    // }

    // if( cnt == 0  ) {
    //     cout << "target is not found " << endl;
    // }

    return 0;
}