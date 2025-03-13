#include<iostream>
#include<string>
#include<algorithm>

using namespace std ;

void genratesubstring( string s , int n ){

    for ( int i = 0 ; i<=n-1; i++ ){
        for ( int j = 0; j<n-i; j++ ){
            for ( int k = i; k<=j; k++ ){
                
               // cout << i << ":" << j << ":" << k <<  endl;
                cout << s[k] ;
            }
            cout << endl;
        }
        cout << endl;
    }
}

int main ( ){


    string s = "abcde";
    int n = s.size();


    genratesubstring(s,n);

    return 0 ; 
}
