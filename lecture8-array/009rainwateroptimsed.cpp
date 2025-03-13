#include<iostream>
using namespace std ;

int rainwateroptimised( int h[] , int n ) {

    int l[100] ;
    l[0] = h[0];
    for (int i = 1 ; i<=n-1 ; i++ ){
        
        l[i] = max(l[i-1],h[i]) ;

    }

    int r[100];
    r[n-1] = h[n-1];

    for( int i = n-2; i>=0 ; i-- ){
        r[i] = max(r[i+1],h[i] ) ;
    }


        int total = 0 ;

    for ( int i = 0 ; i<= n-1; i++ ){

        
        int wi = min(l[i],r[i]) - h[i];
        total += wi ;

    }

    return total ;


}
int main ( ) {

    int h[] = { 0,1,0,2,1,0,1,3,2,1,2,1};
    int n  = sizeof(h)/sizeof(int);

    cout << rainwateroptimised(h,n) << endl;


    return 0 ;

}