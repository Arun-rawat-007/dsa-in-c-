#include<iostream>
#include<cmath>

using namespace std ;

int main () {
    int n ;
    cin >> n;

    int count  = 0 ;
    
    for ( int i = 0 ; i < ceil(log2(n+1)); i++ ) {
        
        if ( ( n >> i ) & 1 ) {
            count++;
        }

    }

    cout << count << endl;

    return 0 ; 

}