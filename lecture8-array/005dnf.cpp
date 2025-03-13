#include<iostream>
using namespace std ;
// time = O(n);
//space = O(1);

int main ( ) {  

    int arr[] = { 1,0,1,2,0,1,2,0,1};
    int n = sizeof(arr) /sizeof(int) ;

    int low = -1;
    int mid = 0;
    int high = n; 

    while( mid < high ) {

        if ( arr[mid] == 0 ){
            low++;
            swap(arr[mid],arr[low]);
            mid++;
        }else if( arr[mid] == 1 ){
            mid++;
        }else {
            high--;
            swap( arr[mid],arr[high]);
        }
    }

    for ( int i = 0 ; i<= n-1 ; i++ ) {
        cout << arr[i] << " ";
    }

    return 0 ; 
}