#include<iostream>
using namespace std ;

int main ( ) {

    int * xptr =  new int ;
    cout << xptr << endl; 
    *xptr = 10 ;
    cout  << *xptr << endl;

    delete xptr ;

    xptr  = new int ;
    cout << xptr << endl;
    *xptr = 20 ;
    cout << *xptr << endl;

    char *chptr = new char ;
    *chptr = 'A';
    cout << *chptr << endl;



    return 0 ; 
}