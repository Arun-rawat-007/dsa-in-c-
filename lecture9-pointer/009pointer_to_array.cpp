#include<iostream>
using namespace std ;

int computesum( int arr[], int n ) {
    int sum = 0 ;
    
    for ( int i =0; i<=n-1; i++ ){
        sum += arr[i] ;
    }
    return sum ;

}
int main ( ) {  
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int) ;

    cout << computesum(arr,n) << endl;

    return 0 ; 
}