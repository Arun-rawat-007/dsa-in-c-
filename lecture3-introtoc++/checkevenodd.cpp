#include<iostream>
#include<climits>


using namespace std ;


int main () {
    int n ;
    cin >> n ;


    if ( n&1 == 1 ) {
        cout<< n << " is as odd number " << endl;
    }else{

        cout << n << " is a even number " << endl;
    }       
    

    return 0; 
}