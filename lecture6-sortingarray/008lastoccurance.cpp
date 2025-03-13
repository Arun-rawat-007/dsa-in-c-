#include<iostream>
using namespace std ;
int lastoccurance( int arr[], int n , int t ) {
    int s = 0 ;
    int e = n-1 ;
    int ans = -1 ;

    while ( s<= e) {
        int m = s + (e - s )/ 2 ;
        if ( arr[m] == t ) {
            
            ans = m ;
            s = m+1;

        }else if ( t > arr[m] ){
            s = m+1 ;
        }else {
            e = m-1;
        }
    }

    return ans ;
}
int main ( ) {

    int arr[] = {10,20,30,30,30,30,40,50} ;
    int n = sizeof(arr)/sizeof(int) ;

    int t ;
    cin >> t ;

    cout << lastoccurance(arr,n,t) << endl ;
    return 0 ; 
}