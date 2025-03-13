#include<iostream>

using namespace std ;

int main() {
    
    int x = 10;
    int *xptr = &x ;

    cout << "x = " << x << endl;
    cout << "*xptr = " << *xptr << endl << endl;

    double d = 3.14 ;
    double* dptr = &d ;

    cout << "d = " << d << endl;
    cout << "*dptr = " << *dptr << endl << endl;


    return 0 ;
}