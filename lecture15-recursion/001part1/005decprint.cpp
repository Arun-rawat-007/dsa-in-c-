#include<iostream>
using namespace std ;
void f( int n ) {
    // base case
    if ( n == 0 ) {
        return ;

    }
    // recursive case 
    // n to 1 

    cout << n << " " ;
    f(n-1) ;

}
int main ( ){

    int n ;
    cin >> n ;
    f(n);

    return 0 ;
}