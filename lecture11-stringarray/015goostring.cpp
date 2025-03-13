#include<iostream>
#include<string>
#include<algorithm>

using namespace std ;
bool isgoodstring( string str ){

    int n = str.size();

    for ( int i = 0 ; i < n ; i++ ){
        
        char ch = str[i];

        if ( !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u')){
            // str is a consonent 
            return false ; 

        }

    }

    return true ;


}
int main ( ) {

    string str = "uoiea" ;

    isgoodstring(str) ? cout << " good " << endl : cout << "not good" << endl;  


    return 0  ; 
}