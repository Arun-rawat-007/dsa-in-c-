#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;
bool lengthcompare( string a , string b ) {
    int len_a = a.size();
    int len_b = b.size();

    if ( len_a < len_b ){
        return true ;
    }

    return false ;
}

int main ( ) {

    string arr[] = {"xyz","ab","cdef"};
    sort(arr,arr+3,lengthcompare);

    for ( int i = 0 ; i < 3 ; i++ ){
        cout << arr[i] << " " ;
    }

    return 0 ;
}