#include<iostream>
using namespace std; 

int f( int x ,int y ){
    // base  case 
    if( y == 0 ) {
        return 1 ;
    }

    // recursive case 
    int A = f( x ,y/2 );

    if(  y % 2 == 0) {
        return A*A*x;
    }

    return A*A*x;   
}
int main ( ){

    int x; 
    cin >> x ;
    int y ;
    cin >> y ;

    cout << f(x,y )<< endl;


    return 0 ; 
}