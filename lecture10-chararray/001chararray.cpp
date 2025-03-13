#include<iostream>
using namespace std ;

int main ( ) {

    char str[] = {'a','b','c','d','e','\0'};
    cout << str << endl;

    char str2[6] = {'a','b','c','d','e','\0'};
    cout << str2 << endl;

    char str3[] = "hello";// "\0 is already added automatically"
    cout << str3 << endl;
    cout << sizeof(str3) << endl;
    
    return 0 ; 
}