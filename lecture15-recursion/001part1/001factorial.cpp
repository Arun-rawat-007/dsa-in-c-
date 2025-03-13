#include<iostream>
using namespace std ;

int f( int n ) {
    //1) base case 
        if ( n == 0  ) {
           // zero factorial 
            return 1 ;
        }
    //2) recursive case 

    // fixed n!

    //1) ask your friend to find n-1!
    int A = f(n-1);

    return n * A;

}
int main ( ){

    int n ;
    cin >> n ; 

    cout << f(n) << endl;

    return 0 ;
}