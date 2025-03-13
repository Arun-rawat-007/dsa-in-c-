// constrain : n < = 100 , k<= 9 
// time = n.c + n. = 2n,c ~ O(n)
#include<iostream>

using namespace std ;

int main ( ){   
    int arr[ ] = { 1,0,3,2,3,1,2,0,2} ;
    int n = sizeof(arr)/sizeof(int) ;

    int k = 3 ;
    int freq[10] = {0};

    for( int i = 0 ; i<=n-1; i++ ){
        
        int x = arr[i];
        freq[x]++;

    }

    for( int i = 0; i<=k; i++ ){
        int y = freq[i];
        // print i y times
        for( int j = 1 ; j<=y ; j++ ){
            cout << i << " ";
        }
    }
    cout << endl;

    return 0 ; 
}