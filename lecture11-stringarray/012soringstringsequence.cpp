#include<iostream>
#include<string>
#include<algorithm>

using namespace std ;
int main ( ) {

    string arr[]= {"xyz","ab","cdef"};
    sort(arr,arr+3);

    for( int i = 0 ; i< 3 ; i++ ){
        cout << arr[i] << " " ;
    }
    cout << endl;

    return 0 ;
}