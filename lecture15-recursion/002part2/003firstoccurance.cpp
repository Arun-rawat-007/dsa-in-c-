#include<iostream>
using namespace std ;

int f( int X[], int n,int t,int i){
    // base case 
    // if( i == n-1){
    //     X[n-1] == t ? n-1 : -1 ;
    // }
    if( i== n ){
        return -1 ;
    }
    // recursive case 

    // find the index of the 1st occ of the t in X[i ... n-1 ]
    if ( X[i] == t ){
        // you have found the t at ith index 
        return i ;

    }
    f(X,n,t,i+1);
}
int main () {

    int X[] = {10,20,30,20,30};
    int n = sizeof(X)/sizeof(int) ;

    int t = 30 ;
    cout << f(X,n,t,0) << endl ;


    return 0 ; 
}