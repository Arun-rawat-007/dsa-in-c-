#include<iostream>

using namespace std ;


bool iseven( int x ) {
    
    return  x % 2 == 0 ;
    
}

int main () {

    bool ans = iseven(2) ;
    cout << ans << endl;
    cout << iseven(3) << endl;

}