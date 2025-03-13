#include<iostream>

using namespace std ;

int main ( ) {

    int n ;
    cin >> n ;

    int k ;
    cin >> k ;

    if ( (n>>k)&1 == 1 ){
        
        cout << "kth bit is set  " << endl; 

    }else {
        cout << "kth bit is not set " << endl;
    }


    return 0 ;
}