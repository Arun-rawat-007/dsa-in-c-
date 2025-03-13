#include<iostream>
using namespace std ;

int f( int X[] , int n , int i ) {
    // base case 
    if ( i == n-1 ) {
        return X[n-1] ;
    }
    // recursive case 

    // to find the sum of x[i ....n-1]
    // 1) ask your friend to find the sum of x[ i+1 , .... n-1 ] 
     int A = f(X,n,i+1) ;

     return X[i] + A ;


}
int main ( ) {

    int X[] = {1,2,3,4,5} ;
    int n = sizeof(X)/sizeof(n) ;

    cout << f( X , n , 0 ) << endl;     


    return 0 ; 
}