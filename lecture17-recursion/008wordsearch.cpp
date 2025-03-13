#include<iostream>
#include<vector>
#include<string>
// hard question 

using namespace std ;

bool seacrhnext( vector<vector<char>>& maze, string word , int m , int n , int i , int j , int indx ){
    // base case 

    if ( indx == word.length()){
        return true ;
    }

    if ( i < 0 || j < 0 || i == m || j == n || maze[i][j] != word[indx] || maze[i][j]  == '!'){
        return false ;
    }

    // to stop the use of single word multiple time
    char c = maze[i][j];
    maze[i][j] = '!' ;

    bool top = seacrhnext(maze,word,m,n,i+1,j,indx+1);
    bool right = seacrhnext(maze,word,m,n,i,j+1,indx+1);
    bool down = seacrhnext(maze,word,m,n,i-1,j,indx+1);
    bool left = seacrhnext(maze,word,m,n,i,j-1,indx+1);

    maze[i][j] = c ;

    return top || down || right || left ;


}

bool f( vector<vector<char>> maze, string word , int m , int n , int i , int j ){
    // base case 

    // recursie case
    // we want to check if first box we are at is equal to word oth indx value 
    int indx = 0 ; // word indx

    for ( int i = 0 ; i < m ; i++ ){
        for ( int k = 0; j < n ; j++ ){
            
            if ( maze[i][j] == word[indx]){
                // if it is matches then we have to decide to move for another value that will also be equal to the word value 
                if ( seacrhnext(maze,word,m,n,i,j,indx) ){
                    // if it is return true then we have to retunr true 
                    return true ;
                }
            }

        }
    }

    return false ;
}
int main() {

    vector<vector<char>> maze = {
        {'A','B','C','E'},
        {'S','F','C','S'},
        {'A','D','E','E'}
    };
    int m = 3 ; // row
    int n = 4 ; // col 

    string word = "ABCCED";

    f(maze,word,m,n,0,0) ? cout << " word is found " << endl : cout << " word is not found " << endl;

    return 0 ;
}