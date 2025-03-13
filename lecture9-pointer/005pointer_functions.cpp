#include<iostream>
using namespace std ;

void increment1( int* ptr ){
    
    (*ptr)++ ;

}
void increment2( int*& ptrref ){
    (*ptrref)++;
}
int main ( ){

    int a = 10 ;

    cout << "inside main(), before increment() a = " << a << endl;
    increment1(&a) ;
    cout << "inside main() , after inrement() a = " << a << endl;


    
    int b = 20 ;
    cout << "inside main(),after increment() a = " << b << endl;
    int* ptr = &b;

    increment2(ptr);
    cout << "inside main(),before increment2() b = " << b << endl;


    return 0 ; 
}