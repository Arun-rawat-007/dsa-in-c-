#include<iostream>
using namespace std ;

int main ( ) {

    int n ;
    cin >> n ;

    for (int i = 1 ; i<= n ; i++ ) {
        //for printing space from 1 to n-i
        for ( int j = 1; j<= n-i ; j++ ) {
            cout << " " << " " ;
        }
        //for printing star  from 1 to i 

        for ( int j =1 ; j<= i ; j++ ) {
            cout << "*" << " " ;
        }
        cout << endl;

    }

    return 0 ; 
}