#include<iostream>
using namespace std ;

int main ( ){
    int *ptr = new int[5];

    *ptr = 10 ;
    *(ptr +  1 ) = 20 ;
    *( ptr + 2 ) = 30 ; 
    *(ptr + 3 ) = 40 ; 
    *(ptr + 4 ) = 50 ; 
    // cout << *(ptr + 3 ) << endl; 
    for ( int i = 0 ; i < 5 ; i++ ){
        cout << *(ptr  + i ) << endl;
    }
    delete [] ptr ; // deallocate the entire memory 

    return 0 ;
}