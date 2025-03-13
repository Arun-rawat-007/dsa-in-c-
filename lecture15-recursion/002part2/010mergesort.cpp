#include<iostream>
using namespace std ;

void mergearray( int arr[], int s, int m , int e ){

    int i = s ;
    int j = m+1;
    int k = s ;
    int temp[100] ;

    while( i<=m and j<=e ){

        if ( arr[i] < arr[j] ){
            temp[k] = arr[i];
            i++;
            k++;
        }else{
            temp[k] = arr[j];
            j++;
            k++;
        }
        
    }

    // we can come outside the loop and i could have some values that we can transfer to temp
    while ( i<=m ){
        temp[k] = arr[i];
        i++;
        k++;
    }

    // it can also happend that the value of j array is left we can past this into the temp array 
    while ( j <= e ){

        temp[k] = arr[j] ;
        j++;
        k++;
    }

    // now i have to copy all the value from temp to array 

    for ( int l = s ; l <= e ; l++ ){
        arr[l] = temp[l] ;
    }

}

void mergesort( int arr[], int s , int e ){
    // base case 

    if( s == e ){
        return ; 
    }

    // recursive case 

    //1) divide the given arr[s...e] from midpoint 
    int m = s + (e-s)/2 ;
    //2) sort the arr from [s....m] anmd [m+1....e ]
    mergesort(arr,s,m);

    mergesort(arr,m+1,e);

    // 3) you have to store this value in array in a way that array will we sorted
    mergearray(arr,s,m,e);
}
int main () {

    int arr[] = {50,40,30,20,10} ;
    int n  = sizeof(arr)/sizeof(int);

    mergesort(arr,0,n-1);

    for ( int i = 0; i<= n-1; i++ ){
        cout << arr[i] << " ";
    }



    return 0 ;
}