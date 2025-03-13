#include<iostream>

using namespace std ;
int f( int  X[], int i) {
    // base case 
        if( i== -1) {
            return 0 ;
        }

    // recursive case 
    // find the sum( x[0 ... i-1] )
    // 1) ask your friend to find the sum(x[0..i-1] )
    int A = f(X,i-1) ;

    return A + X[i] ;

}
int main ( ){

    int X[] = {10,20,30,40,50} ;
    int n = sizeof( X) /sizeof(int );

    cout << f(X,n-1 ) << endl;

    return 0 ; 
}