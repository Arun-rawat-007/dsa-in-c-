#include<iostream> 
#include<algorithm>

using namespace std ;
bool ispresent( int mat[][3], int m , int n , int t ){

    for ( int i = 0 ; i<=m-1; i++ ){

        if ( binary_search(mat[i],mat[i+1],t)){
            // we find the target value and we return the true 
            return true ;

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

    ispresent( mat,m,n,t ) ? cout << t << " found" << endl : cout << t << " not found" << endl;

    return 0 ; 
}