#include<iostream>
#include<climits>

using namespace std ;

int maximumsubarraysum( int arr[] ,int n ) {
    int maxsofar = INT_MIN;


    for ( int i = 0; i<=n -1; i++ ){

        for ( int j = i ; j <= n-1 ; j++ ){

            int sum = 0 ;

            for ( int k = i ; k<= j ; k++ ) {

                sum += arr[k] ;

            }

            maxsofar = max(maxsofar,sum) ;

        }

    }

    return maxsofar;
}
int main ( ) {
    int arr[ ] = { -2,1,-3,4,-1,2,1,-5,4} ;
    int n = sizeof(arr) / sizeof(int) ;

    cout << maximumsubarraysum(arr,n) << endl;
    return 0  ; 
}