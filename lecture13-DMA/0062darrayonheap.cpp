#include<iostream>
using namespace std ;

int main ( ){

    int  m ;
    cin >> m ;

    int n ;
    cin >> n ;

    // create a 2d array of dimensions mXn  on the heap memory 

    int** ptr = new int*[m] ;
    for ( int i = 0 ; i < m ; i++ ){

        ptr[i] = new int[n] ;

    }
    // read the value into the 2d arry 

    for ( int i = 0 ; i < m ; i++ ){
        for ( int j = 0 ; j < n ; j++ ){
            cin >> ptr[i][j] ;
        }
    }

    // print the value of the 2d array 

    for ( int i = 0 ; i < m ; i++ ){
        for ( int j = 0 ; j < n ; j++ ){
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // deallocate memory for 2d array 

    for ( int i = 0 ; i < m ; i++ ){
        delete [] ptr[i];
    }
    delete [] ptr ;

    return 0 ; 
}