#include<iostream>
using namespace std ;

void inc(int&a) {
    a++;
}

int main ( ) {

    int a = 10 ;
    cout << "inside main before increment a = " << a <<  endl; 

    inc(a) ;

    cout << "inside main after increment a = " << a << endl ;



    return 0 ;
}