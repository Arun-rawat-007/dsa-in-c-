#include<iostream>
using namespace std ;

int main () {

    int* p = NULL ;
    int* q = nullptr ;
    int* r = 0 ;

    if ( p == q and p == r ){
        
        cout << "they are equal" ;

    }
    // you cannot derefrenec a null pointers 
    

    return 0 ; 
}