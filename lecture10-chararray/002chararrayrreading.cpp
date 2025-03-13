#include<iostream>
using namespace std ;
int main ( ) {

    char str[101] ;
    //cin >> str;
    cin.getline(str,101,'$');
    cout << " you have entered : " << str << endl;
    
    
    return 0 ;
}