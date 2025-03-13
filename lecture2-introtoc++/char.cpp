#include<iostream>
using namespace std ;

int main ( ) {
    char ch = 'A';

    cout << ch << endl;
    cout << (int)ch << endl ;

    cout << static_cast<int>(ch) << endl << endl;

    ch = 'c' ;

    cout << ch << endl;  
    cout << (int)ch << endl;
    cout << static_cast<int>(ch) << endl;

    return 0 ; 
}