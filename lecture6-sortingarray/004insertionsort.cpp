#include<iostream>

using namespace std ;
void insertionsort( int arr[] , int n ) {

    for ( int i = 1; i<=n-1; i++ ){

        int key = arr[i];

        int j = i-1; 

        while( j>=0 and key < arr[j] ){
           
            arr[j+1] = arr[j] ;
            j--;

        }
        arr[j+1] = key ;

    }

}
int main ( ) {

    int arr[] = {50,40,30,20,10} ;
    int n = sizeof(arr) /sizeof(int) ;

    insertionsort(arr,n); 

    for ( int i = 0; i<=n-1; i++ ){
        cout << arr[i] << " " ;
    }

    return 0 ; 
}