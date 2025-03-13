#include<iostream>

using namespace std;
int main ( ) {

    int arr[ ] = { 1,0,3,2,3,1,2,0,2} ;
    int n = sizeof(arr)/sizeof(int) ;

    int k = 3 ;
    int freq[10] = {0} ;


    for ( int i = 0; i<=n-1 ; i++ ){
        
        int x = arr[i] ;
        freq[x]++;

    }

    for ( int i = 0; i<=k; i++ ){
        cout << freq[i] << " ";
    }
    cout << endl;

    for ( int i = 1; i<n; i++ ){
        
        freq[i] = freq[i] + freq[i-1] ;

    }
    for ( int i = 0 ;i<=k; i++ ){
        cout << freq[i] << " ";
    }

    cout << endl;

    for ( int i = k ; i>=1 ; i-- ){
        
        freq[i]= freq[i-1] ;

    }
    freq[0] = 0 ;

   for ( int i = 0 ; i<=k; i++ ){
        cout << freq[i] << " ";
    }
    cout << endl;

    int out[100] ;

    for( int i = 0; i<=n-1; i++ ){
        int x = arr[i];
        out[freq[x]] = x ;
        freq[x]++;
    }
    for (int i = 0 ; i<= n-1; i++ ){
        cout << out[i] << " " ; 
    }
    cout << endl;

    return 0 ;
     
}