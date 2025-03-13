#include<iostream>
#include<algorithm>

using namespace std ;

void mergesort( int arr[], int n , int brr[] , int m){

    int i = n-m;
    int j = 0 ;

    while ( i <= n-1 ){
        arr[i] = brr[j] ;
        i++;
        j++;
    }

    sort(arr , arr + n);


    for( int x = 0 ; x <= n-1; x++ ){
       
        cout << arr[x] << " ";

    }

    cout << endl;
}

int main ( ) {

    int arr[7] = {10,30,50,70} ;
    int n = sizeof(arr)/sizeof(int);


    int brr[] = {20,40,60};
    int m = sizeof(brr)/sizeof(int) ;

    mergesort(arr,n,brr,m) ;

    return 0 ;

}