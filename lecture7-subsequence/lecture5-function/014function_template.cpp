#include<iostream>

template <typename T > 
T max( T a , T b ) {
    std :: cout << "inside max<t>(t,t) " ;
    return a < b ? b : a ;
} 
int main ( ) {

    std :: cout << max<int>(2,3) << std :: endl;



    return 0 ;
}