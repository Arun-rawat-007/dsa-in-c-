#include<iostream>
#include<string>
#include<algorithm>

using namespace std ;

void genratesubstring( string str , int n ){

    for( int i = 0 ; i<= n-1; i++ ){

        for( int j = i ; j<=n-1; j++ ){

            // for ( int k = i ; k<=j; k++ ){

            //     cout << str[k] << " " ;
                
            // }
            cout << str.substr(i,j-i+1) << endl ;

        }
        cout << endl;
    }

}
int main ( ) {
    
    string str = "abcde";
    int n = str.size();

    genratesubstring(str,n);

    return 0 ;
}