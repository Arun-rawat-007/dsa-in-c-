#include<iostream>

using namespace std ;

int main () {


    int n ;

    cin >> n ;

    int cnt = 0 ;

    while ( n > 0 ) {
        cnt++ ;

        int mask = n - 1 ;
        n = ( n & mask ) ;


    }
    cout << cnt << endl;


    return 0 ;
}