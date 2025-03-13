#include<iostream>
using namespace std ;
void f( int n ) {

    // base case 
    if ( n == 1 ) {
        //return ;
        cout << n << " " ;
    }
    // recursive case 
    f(n-1) ;

     cout << n << " " ;

}
int main ( ){

    int n ;
    cin >> n ;

    f(n);

    return 0 ;
} 