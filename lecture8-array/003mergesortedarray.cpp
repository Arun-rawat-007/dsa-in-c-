#include<iostream>
using namespace std ;
void mergesort( int arr[], int m , int brr[], int n ){
    int crr[20];
    int i = 0 ;
    int j = 0 ;
    int k = 0 ;

    while ( i<= m-1 and j<=n-1){

        if( arr[i] < brr[j] ){
            crr[k] = arr[i];
            i++;
            k++;
        }else{
            crr[k] = brr[j];
            j++;
            k++;
        }
    }
    while ( i <= m-1 ) {
        crr[k] = arr[i];
        i++;
        k++;
    }
    while( j<=n-1){
        crr[k] = brr[j];
        j++;
        k++;
    }

    for ( int x = 0; x<=m + n - 1; x++ ){
        cout << crr[x] << " " ; 
    }
    cout << endl;

}
int main ( ) {

    int arr[] = {10,30,50,70} ;
    int m = sizeof(arr)/sizeof(int) ;

    int brr[] = {20,40,60};
    int n = sizeof(brr) /sizeof(int) ;
    

    mergesort(arr,m,brr,n) ;


    return 0 ;
}