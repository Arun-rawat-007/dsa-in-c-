#include<iostream>

using namespace std ;

int main ( ) {
    int n ;

    cin >> n ;

    for ( int i = 1; i<=n; i++ ){
        // for printing space  n-i 
        for ( int  j = 1 ; j <= n - i ; j++ ) {
            cout << " " << " ";
        }

        //for printing number from i times 
        int num = i ;
        for ( int j= 1; j<= i ; j++ ) {
            cout << num << " ";
            num++;
        }
        // for printing number again  from  0 to i-1 ;
        int num2 = 2*i-2 ;
        for ( int j = 1; j<= i-1; j++ ){
            cout << num2 << " " ;
            num2--;         
        }

        cout << endl;
    }
    return 0 ; 
}