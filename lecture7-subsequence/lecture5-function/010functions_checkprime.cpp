#include<iostream>
using namespace std ;

bool isPrime( int n ) {

    // iterate from 2 to n-1 ...
    for ( int i = 2; i<=n-1 ; i++ ) {

        if( n % i == 0 ) {
            
            // it is not prime ..
            return false ;

        }

    }

    return true ;

}

int main ( ) {
// to checkprime we iterate from 2 to n - 1 and check that n % i == 0  is yes then it is notprime if fasle it means is is prime 
    int n ;
    cin >> n ;

    isPrime(n) ? cout << " prime " << endl : cout << " not prime " << endl ;

    return 0; 
}