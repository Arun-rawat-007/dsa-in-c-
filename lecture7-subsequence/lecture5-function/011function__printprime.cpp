#include<iostream>
#include<cmath>

using namespace std;

bool isprime( int  n ) {
    
    int sqroot = sqrt(n) ;
    
    for ( int i = 2 ; i<=sqroot ; i++ ) {

        if ( n % i == 0 ){

            return false ;

        }

    }

    return true ;

}
void printprimes( int m ) {

    for ( int n = 2 ; n<= m ; n++ ){
        
        if ( isprime(n) ) {

            cout << n << " " ;

        }

    }
}

int main ( ) {

    int m ;
    cin >> m ;

    printprimes(m) ;


    return 0 ;
}