#include<iostream>
using namespace std ;

int parition(int arr[], int s, int e) {
    
    int j = s ;
    int i = s-1; // i = j-1;
    int pivot = arr[e];


    while ( j < e ) {

        if( arr[j] < pivot ){
            // it should have to be in left partion 
            i++;
            swap(arr[i],arr[j]);
            j++;
        }else {
            // it should have to be in right partition 
            j++;
        }

    }

    // now we have to swap the pivot value with arr[i+1]
    swap( arr[e], arr[i+1]);
    return i+1;

}
void quicksort( int arr[], int s , int e ){

    // base case 
    if( s > e ){
        
        return ;

    }
    // if( s == e ) {
    //     return ; 
    // }

    // recursive case 

    // 1) partition thr givr array into two part and se
    int pindx = parition(arr,s,e);
    
    // 2) sort the array 

    quicksort(arr,s,pindx-1);
    quicksort(arr,pindx+1,e);

    // 3) put the pindx into right place 

}
int main (){

    int arr[] = {60,50,20,10,40,30};
    int n  = sizeof(arr)/sizeof(int);

    quicksort(arr,0,n-1) ;

    for ( int i = 0; i<=n-1; i++ ){

        cout << arr[i] << " " ;

    } 

    return 0 ;
}