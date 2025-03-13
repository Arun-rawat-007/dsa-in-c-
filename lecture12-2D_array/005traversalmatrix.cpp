#include<iostream>
using namespace std ; 

bool ispresent( int mat[][3], int m , int n , int t ){

    for ( int i = 0 ; i<=m-1; i++ ){
        for ( int j = 0 ; j<=n-1; j++ ){

            if ( mat[i][j] == t ){
                return true ;
            }

        }
    }

    return false ;

}
int main (){

    int mat[][3] = {
        {50,80,20},
        {90,10,70},
        {60,30,40}
    };

    int m = 3 ;
    int n = 3 ;
    
    int t = 100 ;

    ispresent(mat,m,n,t) ? cout << t << " found" << endl : cout << t << " not found" << endl;



    return 0 ;
}