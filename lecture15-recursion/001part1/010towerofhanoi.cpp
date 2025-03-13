#include<iostream>
using namespace std ;
void f( int n , char src , char dst , char hlp ){
    // base case 
    if( n == 0 ){
        
        return;

    }
    // recursive case 

    // move n disks from src(a) to dst using hlp
    // 1) move n-1 disks from src(A) to hlp(B) uisng dst(c) 
    f(n-1,src,hlp,dst);
    // 2) move the largest disk from src(A) to dst(c)
    cout << "move disk from " << src << " to " << dst << endl;

    // 3) move n-1 disks from hlp(b) to dst(c) using src(A)
    f(n-1,hlp,dst,src) ; 
}
int main ( ) {

    int n = 3; 
    f( n, 'A','C','B');

    return 0 ;
}