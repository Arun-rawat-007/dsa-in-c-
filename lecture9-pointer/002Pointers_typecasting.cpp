#include<iostream>
using namespace std; 

int main () {


    int y = 12 ;
    char *yptr = (char*)&y;

    cout << "y = " << y << endl;
    cout << "*yptr = " << (int)*yptr << endl;
    
    int x = 10 ;
    char *xptr = (char*)&x ;

    cout << " x = " << x << endl;
    cout << "xptr = " << (int)*xptr << endl;
    
    return 0 ; 
}