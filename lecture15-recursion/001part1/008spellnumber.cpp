#include<iostream>

using namespace std ;
string spellingmap[] = {  "zero","one","two","three","four"
                           "five", " six" , "seven", "eight", "nine" };

void f( int n ) {
    // base case 
        if( n == 0 ) {
            return ;
        }
    // recursivecase 
    // 1) ask your friend 
    f(n/10);

    //2 print the spelling 
    int d = n % 10 ;
    cout << spellingmap[d] << " " ;

}
int main () {

    int n = 123 ;
    f(n) ;

    return 0 ; 
}