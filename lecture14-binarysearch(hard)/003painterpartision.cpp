#include<iostream>
using namespace std ;
// time = log ( e -s )*n = O(nlog(e-s))
int numpaintersrequest( int n , int b[], int timelimit ){
    int numpainters = 1 ;
    int time = 0 ;

    int i = 0 ;

    while ( i < n ) {

        time += b[i];
        if ( time > timelimit ){
            numpainters++;
            time = 0 ;
            continue ;
        }
        i++;
    }

    return numpainters;

}
int getmintime( int k , int n , int b[] ){
    
    int s = INT8_MIN ;
    int e = 0 ;
    for ( int i = 0 ; i < n ; i++ ){
        s = max(s,b[i]);
        e += b[i];
    }
    int ans ;
    while ( s <= e) {
        int m = s + (e-s) / 2 ;
        int x = numpaintersrequest( n,b,m ) ;

        if ( x <= k ){
         ans = m ; 
         e = m-1;   
        }else {
            s = m +1 ;
        }
    }
    return ans ;
}
int main ( ) {

    int k ; 
    cin >> k ;

    int n ;
    cin >> n ;
    
    int* b = new int[n] ;

    for( int i = 0; i < n ; i++ ){
        cin >> b[i] ;
    }

    cout << getmintime(k,n,b) << endl;

    return 0 ; 
}