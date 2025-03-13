#include<iostream>
using namespace std ;


int main ( ) {


    int arr[] = {10,20,10,30,10} ;
    int n = sizeof(arr) / sizeof(int) ;

    int t  ;
    cin >> t ;

    int i;

    for ( i = n-1; i>=0; i--) {
        if ( arr[i] == t ){
            cout << " last occurance of " << t << " found at index " << i << endl;
            break;
        }
    }

    if ( i == - 1) {
        cout << " target is not found " << endl;
    }

    return 0 ; 
}