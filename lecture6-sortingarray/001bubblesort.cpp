#include<iostream>
using namespace std ;

void bubblesort( int arr[], int n ) {

    int numcomparison = 0 ;
    // iterate over the n-1 passes on the bubble sort algorithm 
    for ( int i = 1; i<= n-1; i++ ) {

        // for the ith pass place the the largest value of the array to the unsorted part of the array to sorted part

        for ( int j = 0 ; j< n-i; j++ ) {
            numcomparison++ ;

            if ( arr[j] > arr[j+1]) {
                
                swap(arr[j],arr[j+1]) ;

            }
        }



    }


    cout << "numcomparison = " << numcomparison << endl;
}

int main ( ) {

    int arr[] = {50,40,30,20,10} ;
    int n = sizeof(arr) / sizeof(int) ;

    bubblesort( arr , n ) ;

    for ( int i = 0 ; i<=n-1; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0 ;
}