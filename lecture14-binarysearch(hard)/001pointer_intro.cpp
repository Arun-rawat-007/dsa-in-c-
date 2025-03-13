#include<iostream>

using namespace std ;

int main () {
    
    int x = 10 ;
    int *xptr ;
    xptr = &x ;

    cout << " x = " << x << endl;
    cout << "sizeof(x) = " << sizeof(x) << endl;
    cout << "&x = " << &x << endl;
    cout << "xptr = " << xptr << endl;
    cout << "sizeof(&x) = " << sizeof(&x) << endl;
    cout << "sizeof(xptr) = " << sizeof(xptr) << endl;

    cout << endl;

    double y = 3.14 ;
    double *yptr;
    yptr = &y ;

    cout << "y = " << y << endl;
    cout << "sizeof(y) = " << sizeof(y) << endl;
    cout << "&y = " << &y  << endl;
    cout << "yptr =" << yptr << endl;
    cout << "sizeof(&y) = " << sizeof(&y) << "B" << endl;
    cout << "sizeof(yptr) = "<< sizeof(yptr) << "B" << endl;

    return 0 ;
}