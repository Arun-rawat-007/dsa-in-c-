#include<iostream>
#include<string>

using namespace std ;

int main ( ) {

    string str = "cbaeicdeiou";
    int maxsofar = 0 ;// it will store the lenght of the logest substring length 

    int cnt = 0 ;

    for ( char ch : str) {

        if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
            // the substring is vowel so 
            cnt++;
            maxsofar = max(maxsofar,cnt);

        }else {
            // the substring is consonent then 
            cnt = 0 ;
        }

    }

    cout << maxsofar << endl;

    return 0 ; 
}