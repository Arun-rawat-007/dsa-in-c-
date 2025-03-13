#include<iostream>
using namespace std ;

void printdiagonalnum( int mat[][10] , int m , int n , int i , int j ) {
    
    int diagonallength = min(m-i,n-j);

    for ( int k = 0 ; k <diagonallength ; k++ ){
        cout << mat[i+k][j+k] << " " ;
    }
    cout << endl;

}
void printdiagonal( int mat[][10] ,int m , int n ) {

    // print the value that start from  0 to j 

    for ( int j = 0 ; j <= n-1; j++ ){

        printdiagonalnum(mat,m,n,0,j) ;
    }

    // print the number that start from i to 0 

    for ( int i = 1 ; i <= m-1 ; i++ ){

        printdiagonalnum( mat,m,n,i,0);

    }
}
int main ( ){


    int mat[][10] = {
        {11,12,13,14},
        {15,16,17,18},
        {19,20,21,22}
    };
    int m = 3; 
    int n = 4 ;

    printdiagonal(mat,m,n) ;

    return 0 ;
}