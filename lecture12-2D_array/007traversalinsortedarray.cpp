#include<iostream>
using namespace std ;

bool ispresent( int mat[][3], int m , int n , int t ){
    int i = 0 ;
    int j = n-1 ;

    while ( i <= m-1 and j >= 0 ) {

        if ( mat[i][j] == t ){
            
            return true;

        }else if ( t > mat[i][j] ){
            // we have to move on ith row 
            i++;
        }else {
            // t < mat[i][j] we have to move in left side of row 
            j--;
        }
    }

    return false ;
}
int main ( ){

        
    int mat[][3] = {
        {40,50,60},
        {20,20,30},
        {70,80,90}
    };

    int m = 3 ;
    int n = 3 ;
    
    int t = 50 ;

    ispresent(mat,m,n,t) ? cout << t << " found" << endl : cout << t << " not found" << endl;


    
    return 0 ; 
}