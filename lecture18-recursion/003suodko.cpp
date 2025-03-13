#include<iostream>
#include<cmath>

using namespace std ;
bool canplacedigit(int grid[][9], int n , int i , int j , int d ){
    // assign if you can assign d to i,jth cell 

    
    // we have to make sure that d does not presnt in the same row 
    // we have to make sure that d does not presnt in the same col 
    for ( int k =0 ; k < n ; k++ ){
        if ( grid[i][k] == d || grid[k][j] == d ){
            // return false
            return false; 
        }
    }
    // we have make sure that d does not present in the subgrid 
    int rn = sqrt(n);//dimensions of the subgrid    
    // iterate over the subgrid 

    int sr = (i/rn)*rn;
    int sc =(j/rn)*rn;

    for( int x = sr ; x < sr + rn ; x++ ){
        for ( int y = sc ; y < sc + rn ; y++ ){
            if(grid[x][y] == d ){
                return false ;
            }
        }

    }
    return true ;

    
}
void solvesudoku( int grid[][9], int n , int i , int j ){
    // base case 
c
    // recusrive case 
    if ( j == n ) {
        // we fill the ith row now we have to move to the next row  
        solvesudoku(grid,n,i+1,0);
        return ;
    }
    if ( grid[i][j] != 0){
        // the box is filled we can move 
        solvesudoku(grid,n,i,j+1);
        return ;
    }

    for ( int  d = 1; d <= 9 ; d ++ ){
        if ( canplacedigit(grid,n,i,j,d) ) {
            // return true 
            grid[i][j] = d ;
            solvesudoku(grid,n,i,j+1);
            grid[i][j] = 0; // backtrack
        }
    }

}
int main () {

    int n = 9 ;
    int grid[][9] = {
        {3,0,6,5,0,8,4,0,0},
        {5,2,0,0,0,0,0,0,0},
        {0,8,7,0,0,0,0,3,1},
        {0,0,3,0,1,0,0,8,0},
        {9,0,0,8,6,3,0,0,5},
        {0,5,0,0,9,0,6,0,0},
        {1,3,0,0,0,0,2,5,0},
        {0,0,0,0,0,0,0,7,4},
        {0,0,5,2,0,6,3,0,0}
    };

    solvesudoku(grid,n,0,0); 

    return 0; 
}