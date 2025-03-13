#include<iostream>
using namespace std ;
int genratepair( int arr[] , int n ) {
    int count = 0 ;
    for (int i=0; i<n-1; i++ ){

        for( int j = i+1; j<=n-1; j++ ){
                count++;    
                cout << "("<< arr[i] << ","<< arr[j] << ")" << " " ;
        }
        cout << endl;

    }
    return count ;
}
int main ( ) {

    int arr[] = { 10,20,30,40,50,60} ;
    int n = sizeof(arr) /sizeof(int) ;

    cout << genratepair( arr , n ) << endl ;

    return 0 ; 
}