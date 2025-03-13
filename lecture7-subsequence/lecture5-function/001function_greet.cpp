#include<iostream>

using namespace std ;
void greet() {
    cout << "hello world" << endl;
}
int main ( ) {

    cout << "inside the main" << endl;

    greet() ;

    cout << "outside the function " << endl;


    return 0 ; 
}