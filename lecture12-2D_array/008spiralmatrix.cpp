#include<iostream>
using namespace std ;

int main ( ){

    int mat[10][10] = {
        {11,12,13,14},
        {22,23,24,15},
        {21,26,25,16},
        {20,19,18,17}
    };

    int m = 4 ;
    int n = 4 ;
    
    int sr = 0 ;
    int sc = 0 ;

    int er = m-1 ;
    int ec = n-1 ;

    while ( sr <= er and sc <= ec  ){
        //1) print the value from left to right 

        for ( int j = sc ; j<=ec ; j++ ){
            cout << mat[sr][j] << " ";
        }
        sr++;

        //2) print the value from top to bottom 
        
        for ( int j = sr ; j <= er ; j++ ){
            cout << mat[j][ec] << " " ;
        }
        ec--;

        // 3) print the value from right to left 

        if ( sr <= er ){

        for ( int j = ec ; j >= sc ; j-- ){
            cout  << mat[er][j] << " ";
        }
        er--;


        }

        // 4) print the value from bottom to top 

        for( int j = er; j >= sr; j-- ){
            cout << mat[j][sc] << " " ;
        }
        sc++;
    }


    return 0 ;
}