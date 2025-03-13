#include<iostream>
using namespace std ;

int merge( int arr[], int s , int m , int e ){

    int i = s; 
    int j = m+1;
    int k = s ;
    int cnt = 0 ;
    int temp[100] ;

    while ( i<= m and j <= e ){

        if ( arr[i] <= arr[j] ){
            temp[k] = arr[i] ;
            i++;
            k++;
        }else{
            //arr[i] > arr[j]
            cnt += m-i+1;
            temp[k] = arr[j] ;
            j++;
            k++;
        }

    }
    while( i <= m ){
        temp[k] = arr[i];
        i++;
        k++;
    }

    while( j<= e ){
        temp[k] = arr[j];
        j++;
        k++;
    }

    // now past the all value of temp in array 

    for( int l = s ; l <=e ; l++ ){
        arr[l] = temp[l];
    }

    return cnt ;

}
int inversioncount( int arr[], int s , int e ) {

    // base case 
    if ( s == e ){
        return 0 ;
    }
    // recusrsive case 
    // 1) break the given array from mid 
    int m = s + (e-s) /2 ;

    // 2) ask your frnd to find inv count and sort the array from [s....m] and [m+1. .... e ] 
    int x = inversioncount(arr,s,m);
    int y = inversioncount(arr,m+1,e);

    // 3) merge both sub arrray in sorted way and also finf the cross inversion count
    int z = merge(arr,s,m,e) ;

    return x + y + z ;

}
int main () {

    int arr[] ={2,7,5,8,3,4};

    int n = sizeof(arr)/sizeof(int) ;


    cout << inversioncount(arr,0,n-1) << endl;


    return 0 ;
}