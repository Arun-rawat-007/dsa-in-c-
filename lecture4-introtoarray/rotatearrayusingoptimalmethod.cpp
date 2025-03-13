#include<iostream>

using namespace std ;


int main ( ) {

    int arr[] = {10,20,30,40,50,60,70} ;
    int n = sizeof(arr) / sizeof(int) ;

    int k ; 
    cin >> k ;

    k = k % n ;
    
    int i = 0 ; 
    int j = n-1;

    while( i < j ) {
        swap(arr[i],arr[j]) ;
        i++ ;
        j--;
    }

    // we want to rotate 0 to k -1 

    i = 0 ;
    j = k-1;

    while ( i < j ) {
        swap(arr[i],arr[j]) ;
        i++;
        j--;
    }
    // now rotate from k to n-1 
    
    i = k ;
    j= n-1;

    while ( i < j ) {
        swap(arr[i],arr[j]) ;
        i++;
        j--;
    }
        
    for(int i = 0 ; i<= n-1 ; i++ ) {
        cout << arr[i] << " " ; 
    }

    cout << endl;

    return 0 ;
}