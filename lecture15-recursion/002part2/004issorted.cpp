#include<iostream>
using namespace std ;

bool issorted( int X[], int n , int i ){
    // base case 
    if( i == n-1 ) {
        // check if X[ i ... n-1 ]  = {X[N-1 ]}
        return true ;
    }
    // recursive case 

    // check if the X[I ... N-1] is sorted 
    return X[i] < X[i+1] and issorted(X,n,i+1 ) ;


}
int main () {

    int X[] = {1,2,3,4,5};
    int n = sizeof(X) /sizeof(int) ;

    issorted(X,n,0 ) ? cout << " true " << endl : cout << "false " << endl;


    return 0 ;
}