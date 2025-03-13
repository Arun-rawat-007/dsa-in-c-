#include<iostream>
using namespace std ;

// Time compexity : O(n) 


int f( int x ,int y ){

    // base case 
    if ( y == 0 ) {
        return 1 ; 
    }
    // recursive case 

    int A = f(x , y-1 ) ;


    return x*A;           


}
int main () {   
    int x ;
    cin >> x ;

    int y ; 
    cin >> y ;

    cout << f(x,y) << endl;

    return 0 ;
}