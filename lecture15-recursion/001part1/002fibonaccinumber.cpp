#include<iostream>
using namespace std ;
int f( int n) {

    // 1) base case

        if( n == 0 || n == 1 ) {
            return n ;
        }

    // 2) recursive case 

    // a) ask your freind to find the n-1 th fibonacci number 
        int A = f(n-1) ; // ask friend to do solve this 
    
    // b ) ask you freind to find the n-2 th fiboncci number 
        int B = f(n-2) ;

        return  A + B  ;

}
int main () {

    int n = 6 ;

    cout << f(n) << endl;

    return 0 ; 
}