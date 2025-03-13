#include<iostream>
using namespace std ;

int  maximumsubarraysum( int arr[] ,int n ) {

    int x[101] ;
    x[0] = arr[0] ;

    int maxsofar = x[0] ;

    for ( int i = 1 ; i<=n-1; i++ ){
        
        x[i] = max(x[i-1] + arr[i], arr[i]);
        maxsofar = max(maxsofar,x[i]) ;


    }
return maxsofar ;

}
int main ( ) {

    int arr[] = {-3,2,-1,4,-5};
    int n = sizeof(arr) / sizeof(int) ;

    cout << maximumsubarraysum(arr, n ) << endl ;

    return 0 ; 
}