#include<iostream>
#include<string>

using namespace std ;

bool ispalindrome( string s ){
    int i = 0 ;
    int j = s.size() - 1 ;

    while ( i < j ) {

        if ( s[i] != s[j]){
            // not palindorme 
            return false ;
        }
            i++;
            j--;
    }

    return true ;

}

int countpalindrome( string s ){
    int cnt = 0 ; // to track the no of palindrome in the given string

    int n = s.size();

    for( int i =0 ; i<n ; i++ ){
        for ( int j = i ; j< n; j++ ){
            string substring = s.substr(i,j-i+1);
            if ( ispalindrome(substring) ){
                cnt++;
            }
        }
    }

    return cnt ;

}
int main ( ){

    string s = "abaaba";

    cout << countpalindrome(s) << endl;

    return 0 ;
}