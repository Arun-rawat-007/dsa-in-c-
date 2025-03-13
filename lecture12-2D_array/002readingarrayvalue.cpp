#include<iostream>
using namespace std ;

int main ( ) {

    int arr[10][10] ;

    int m ;
    // cin >> m;
    cin >> m ;
    int n ;
    cin >> n ;

    for ( int i = 0 ; i<=m-1; i++ ){
        for ( int j=0 ; j<= n-1; j++ ){
            cin >> arr[i][j] ;
        }
    }

    for ( int i = 0 ; i<=m-1; i++ ){
        for ( int j=0 ; j<= n-1; j++ ){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0 ;
}