#include<iostream>
#include<string>
#include<algorithm>

using namespace std ;

bool isgoodsubstring ( string str ) {
    
    int n = str.size();

    for ( int i =0 ; i<n ; i++ ){
        char ch = str[i] ;

        if ( !( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')){
            return false ;
        }

    }
    
    return true; 

}

int longestgoodsubstring( string str ){

    int maxsofar = 0 ;
    int n = str.size();

    for ( int i = 0 ; i<n ; i++ ){

        for ( int j = i ; j<=n-1; j++ ){

            string substring = str.substr(i,j-i+1) ;

           if (  isgoodsubstring(substring) ) {
                
                maxsofar = max(maxsofar,j - i + 1);

           }    

        }
    }
    return maxsofar ;

}
int main ( ){

    string str = "cdaeicdeiou";
    cout << longestgoodsubstring(str) << endl ; 

    return 0 ; 
}