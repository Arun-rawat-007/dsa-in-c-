#include<iostream>
using namespace std ;
// time = O(n^2);
//space = O(1);

int targetsum( int arr[],int n , int t ) {
    int count = 0 ;

    for(int i = 0; i<n-1; i++){
        for(int j=i+1; j<=n-1; j++) {
            int sum = arr[i] + arr[j] ;
            if( sum == t ){
                count++;
            }        
        }
    }

    return count;
}

int main () {

    int arr[] = { 10,20,30,40,50,60};
    int n = sizeof(arr) / sizeof(int) ;


    int t ;
    cin >> t ;

    cout << targetsum(arr,n,t) << endl;




    return 0 ;
}