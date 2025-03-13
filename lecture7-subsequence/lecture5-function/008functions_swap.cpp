#include<iostream>

using namespace std ;
void swap(int a , int b ) {
    
    int temp = a ;
    a = b ;
    b = temp;
    cout << "a = " << a << " b = " << b << endl;

}
int main ( ) {

    // i want to swap a and b ..

    int a = 10 ;
    int b = 20 ;

    swap(a,b); 

    return 0 ;
}