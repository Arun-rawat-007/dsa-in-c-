#include<iostream>
#include<string>

using namespace std ;

int f( string str , int n ){
    //base case 
    if ( n == 0){ // str = "" str.empty() 
        return 0 ;
    }
    // recursive case 
    // ask your freind to convert str[0......n-2] an int 
    string substring = str.substr(0,n-1);
    int integerfrommyfreind= f(substring,n-1);
    return integerfrommyfreind * 10 + ( str[n-1] - '0' );


}
int main ( ) {

    string str = "123";
    int n =  str.size();

    cout << f(str,n) << endl;
    
    return 0 ;


}