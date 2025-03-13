#include<iostream>
using namespace std ;
bool isgoodstring( string str ) {

    for ( char ch  : str ){
        if ( !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')){
            return false ;
        } 
    }

    return true ;

}
int main ( ){

    string str = "uoieax";

    isgoodstring(str) ? cout << " good " << endl : cout << " not good " << endl;

    return 0 ; 
}