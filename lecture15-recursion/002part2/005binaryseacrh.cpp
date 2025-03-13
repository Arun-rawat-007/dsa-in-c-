#include<iostream>
using namespace std ;

bool f( int arr[], int t , int s , int e ) {
    //base case

    if ( s > e ) {
        return -1 ;
    }

    // recursicve case 
    // search for t in sorted arr[s .... e ] using binary search 
    int m = s + (e-s) / 2 ;

    if( arr[m] == t ){
        return m ; 
    }else if ( t > arr[m] ){
        //search for t in soretd arr[m+1 .. e ]
        return f(arr,t,m+1,e) ;
    }else {
        // t < arr[m]
        // recursively , serach for t in sorted arr[s .... m-1 ] 
        return f(arr,t ,s, m-1);
    }

}
int main ( ) {
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int) ;

    int t = 20 ; 

    cout << f(arr,t,0,n-1) << endl;


    return 0 ; 
}