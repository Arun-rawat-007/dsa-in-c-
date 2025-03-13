#include<iostream>
using namespace std ;
// timr = O(n);
// space = O(1)
int  targetsumoptimsed( int arr[], int n , int t) {
    int i = 0 ;
    int j = n-1 ;
    int count = 0 ;

    while ( i < j ) {

        if(arr[i] + arr[j] == t ){
            count++;
            i++;
            j--;
        }else if ( t > arr[i] + arr[j] ) {
            i++;
        }else {
            j--;
        }

    }

    return count ; 

}
int main ( ) {


    int arr[] = {10,20,30,40,50,60} ;
    int n = sizeof(arr) / sizeof(int) ;
    
    int t ;
    cin >> t ;

    cout << targetsumoptimsed(arr,n,t) << endl ;



    return 0 ; 
}