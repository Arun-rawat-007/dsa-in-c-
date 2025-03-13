#include<iostream>

using namespace std ;
void bubblesort( int arr[], int n ) {
    int numcomparsion = 0 ;


    // iterate over ith pass from 0 to n -1 

    for ( int i = 1; i<= n-1; i++ ) {
        bool flag = false ; // 

        for ( int j = 0 ; j < n-i; j++ ) {
                
            numcomparsion++;

            if( arr[j] > arr[j+1]){
                flag = true;
                swap(arr[j],arr[j+1]) ;

            }

        }
        if ( flag == false ) {
            break;
        }
    }

    cout << "numcomaparison = " << numcomparsion << endl;

}
int main ( ) {

    int arr[] = {10,20,30,40,50} ;
    int n = sizeof(arr) /sizeof(int ) ;

    bubblesort(arr, n ) ;

    for ( int i = 0 ; i<=n-1; i++) {
        cout << arr[i] << " " ;
    }

    return 0 ;  
}