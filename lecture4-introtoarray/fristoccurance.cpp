#include<iostream>

using namespace std ;

int main ( ) {

    int arr[] = {10,20,30,40,50} ;

    int n = sizeof(arr) / sizeof(int) ;

    int t = 20 ;

    int i ;

    for ( i = 0; i<= n-1; i++ ){

        if( arr[i] == t ) {
            cout << t << " is found at index " << i << endl; 
            break ;
        }

    }

    if ( i == n ) {
        cout << t << " is not found " << endl;
    }


}