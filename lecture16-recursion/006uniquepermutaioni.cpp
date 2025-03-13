#include<iostream>
#include<cstring>
#include<set>
using namespace std ;
set<string> s ;

void f( char inp[], int n , int i    ){
    // base case 
    if ( i == n ) {
        s.insert(string(inp));
        return ;
    }
    // recursive case 

    for ( int j = i ; j <= n-1; j++ ){
        swap( inp[i],inp[j]);
        f(inp,n,i+1);
        swap( inp[i],inp[j]);
    }
}
int main () {

    char inp[] = "aabc";
    int n = strlen(inp);

    f(inp,n,0) ;
    for( string unique : s ){
        cout << unique << endl;
    }
    return 0; 

}