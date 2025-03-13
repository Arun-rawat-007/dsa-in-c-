#include<iostream>
using namespace std ;

int partition( int arr[], int s , int e ){
    int j = s ;
    int i = s-1;
    int pivot = arr[e] ;

    while ( j < e ){
         
        if ( arr[j] < pivot ){
            // move towards  the left partition
            i++;
            swap(arr[i],arr[j] );
        }
        j++;

    }
    swap(arr[e],arr[i+1]);
    return i+1;

}
int quickselect( int arr[], int s , int e, int kindx ){

    // partion and find the pivot value of the given array
    int pindx = partition(arr,s,e);

    if( pindx == kindx ){
        // pivot is the kth smallest element in arr[]
        return arr[pindx];
    }else if ( kindx < pindx ){
        return quickselect(arr,s,pindx-1,kindx);
    }else{
        return quickselect(arr,pindx+1,e,kindx);
    }

}
int main () {

    int arr[] = {2,7,5,3,8,4};
    int n = sizeof(arr)/sizeof(int) ;
    int k = 3 ;
    cout << quickselect(arr,0,n-1,k-1) << endl;

    return 0 ;
}