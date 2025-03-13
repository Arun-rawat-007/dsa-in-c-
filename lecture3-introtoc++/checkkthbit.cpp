#include<iostream>

using namespace std ;

int main ( ) {

    int n ;
    cin >> n ;

    int k ;
    cin >> k ;

    int mask = 1 << k ;

    if ( (n&mask) == 0 ){
        cout << "kth bit is not set " << endl;
    }else{
        cout << " kth bit is set " << endl;
    }


    return 0 ;
     
}