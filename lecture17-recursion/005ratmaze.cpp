#include<iostream>

using namespace std ;
bool f( char maze[][10], int m , int n , int i , int j ){
    // base case 
    if ( maze[i][j] == 'X' ){
        return false ;
    }
    if ( i == m-1 and j == n-1 ){
        return true ;
    }
    // recursive case 
    // check if there is  a path to go from i,jth cell to m-1,n-1 cell :
    // decide the next step
    if ( i == m-1 ){
        // move right 
        return f(maze,m,n,i,j+1);
    }
    if ( j == n-1 ){
        // move down 
        return f(maze,m,n,i+1,j);
    }
    // option 1 : move right


    // option 2 : move down 
    return f( maze,m,n,i,j+1) or f(maze,m,n,i+1,j);

}
int main ( ){

    char maze[][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00"
    };
    int m = 4 ;
    int n = 4; 

    f( maze,m , n , 0, 0 ) ? cout << "path found" << endl : cout << "not found " << endl ;

    return 0 ; 
}