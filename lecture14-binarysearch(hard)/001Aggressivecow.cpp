#include<iostream>
using namespace std ;
bool canplacecows( int c , int n , int pos[] , int m) {
    // i have to check that can i placed c cow in the stalls such that it is eqal to m or greate than this
    // 1 . placed the 1st cow on the 1st place 
    int numofcowsplaced = 1 ;
    int previouscow = pos[0] ;
    // 2 check if can place c -1 cow in remaining n-1 stalls 
    for ( int i = 2 ; i< n ; i++ ){


        if ( pos[i] - previouscow >= m  ){
            // if it is true than 
            numofcowsplaced++;
            previouscow = pos[i] ; 

            if ( numofcowsplaced == c ){
                return true ;
            }

        }
    }

    return false ;

}
int largestmindist(int n , int c , int pos[] ){

    // lower bound 
    int s = INT16_MAX; // S = WE DEFINE S AS MAX VALUE  
    // uppper bound 
    int e = pos[n-1] - pos[0] ;

    // calculating the lower bound value 

    for( int i = 1; i<n ; i++ ) {
        
        //s = pos[i] - pos[i-1] ;
        if ( pos[i] - pos[i-1] < s ){
            s = pos[i] - pos[i-1] ;
        }
    }
    
    int ans ;

    while ( s <= e ){
        
        int m = s + ( e - s ) / 2 ;

        if ( canplacecows( c , n , pos, m ) ){
            ans = m ;

            s = m+1 ;
        }else{

            e = m-1 ;
        }

    }

    return ans ;

}
int main () {

    int n = 5 ;
    int c = 3 ;

    int pos[] = {1,2,4,8,9};

    cout << largestmindist(n,c,pos);


    return 0 ;
}