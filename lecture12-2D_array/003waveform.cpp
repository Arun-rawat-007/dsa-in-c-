#include<iostream>
using namespace std ;

void waveprint ( int mat[][4], int m , int n ){

    for ( int j = 0 ; j<=n-1; j++ ){
        //check odd even 

        if( j%2 == 0 ) {
            // jth column is even 
                for ( int i = 0 ; i<=m-1 ; i++ ){
                    
                    cout << mat[i][j] << " ";

                }
        }else {
            // jth col  is odd 
            for ( int i = m-1 ; i>=0 ; i-- ){
                
                cout << mat[i][j] << " ";

            }
        }
    }
}
int main ( ){

    int mat[][4] = { 
        {10,15,20,25},
        {30,35,40,45},     
        {50,50,60,65}
    };

    int m = 3 ;
    int n = 4 ;

    waveprint(mat,m,n);


    return 0 ; 
}