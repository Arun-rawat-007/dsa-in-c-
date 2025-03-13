#include<iostream>
#include<set>
using namespace std ;
set<string> s ;

void f(char inp[], char out[], int i , int j ){
    // base case
    if( inp[i] == '\0'){
        
        out[j] = '\0';
        // cout << out << endl;
        // string outstr(out) ;
        s.insert(string(out));
        return ;

    }
    // recursive case 
    // option-1 
    out[j] = inp[i];
    f(inp,out,i+1,j+1);

    // option-2 
    f(inp,out,i+1,j);


}
int main () {

    char inp[] = "abc";
    char out[20] ;

    f(inp,out,0,0);

    for ( auto subseq : s ){
        cout << subseq << endl;
    }

    return 0 ; 
}