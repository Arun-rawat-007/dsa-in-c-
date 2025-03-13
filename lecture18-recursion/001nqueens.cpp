#include<iostream>

using namespace std ;

void f( int out[10], int n , int r ){
    // base case 
    if ( r == n ){

        for ( int i =0 ; i<n; i++ ){
            for ( int j = 0; j<n ; j++ ){
                if ( out[i] == j ){
                    cout << "Q " << " ";
                }else{
                    cout << "_ " << " ";
                }
            }
            cout << endl;
        }
        cout << endl;

        return ;
    }

    // recursive case = make a decisions for qr 
    for ( int j = 0; j <= n-1; j++ ){

        bool flag = true ; // assume you can place qr in the jth col 

        for ( int i = 0; i<=r-1; i++){
            
            if ( out[i] == j || out[i] == j + (r-i) || out[i] == j - (r-i) ){
                flag = false ;
                break;
            }
        }

        if ( flag ){
            out[r] = j ;
            f(out,n,r+1);
        }

    }
}
int main () {

    int n ;
    cin >> n ;

    int out[10] ;

    f(out,n,0) ;

    return 0 ; 
}