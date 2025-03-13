#include<iostream>
using namespace std ;
int f( int x , int y ){

    // 1 base case 
        if ( y == 0 ) {
            return 0 ;
        }
    // 2 revcursive case 

    // ask your friend to find the find the f(x,y-1) 

    int A = f(x,y-1) ;

    return x + A ;
}
int main () {

    int x , y ;
    cin >> x >> y ;

    cout << f( x , y ) << endl;

    return 0 ;
}