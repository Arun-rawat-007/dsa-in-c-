#include<iostream>

using namespace std ;

void iseven(int x){

    if( x%2== 0 ) {
        cout << x << " is even " << endl;
    }else{
        cout << x << " is odd" << endl;
    }

}

int main () {

    iseven(2);
    iseven(3);
    iseven(4);


    return 0 ; 
}