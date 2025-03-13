#include<iostream>
using namespace std ;
void f( int n ,char out[], int i ){
    // base case 
    if (  i == n ){
        
        out[i] = '\0';
        cout << out << endl;
        return ;

    }

    // recursive case 
    // option 1 to put the h on the first place on the ith place 
    out[i] = 'H';
    f(n,out,i+1);

    // option 2 
    out[i] = 'T';
    f(n,out,i+1);

}
int main () {

    char out[20] ;
    int n = 3;

    f(n,out,0);


    return 0 ; 
}