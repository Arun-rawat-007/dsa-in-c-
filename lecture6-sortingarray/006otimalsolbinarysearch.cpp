#include<iostream>

using namespace std ;
int binarysearch( int arr[], int n , int t ) {

    if ( t > arr[n-1] ) {
        return - 1 ;
    }else {

        int s = 0 ;
        int e = n-1 ;

    while ( s<=e ) {

        int m = (s + e )/ 2 ;

        if ( arr[m] == t ){
            
            return m ;

        }else if ( t > arr[m] ) {
            
            s =  m + 1 ;

        }else {
            
            e = m-1;

        }

    }


    return -1 ;

    }
}
int main ( ) {
    int arr[] = {10,20,30,40,50,60,70} ;
    int n = sizeof(arr)/sizeof(int);


    int t;
    cin >> t ;


    cout << binarysearch(arr, n ,t) << endl;

    return 0 ;
}