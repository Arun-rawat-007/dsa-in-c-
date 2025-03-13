#include<iostream>
#include<string>

using namespace std ;

int main ( ) {

    string s1 = "abcdef" ;

    string ss = s1.substr(2,3) ; // cde 
    cout << ss << endl;

    string sss = s1.substr(1) ; // bcdef
    cout << sss << endl; 



    return 0 ; 
}