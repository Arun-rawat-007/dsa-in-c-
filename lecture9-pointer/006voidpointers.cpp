#include<iostream>
using namespace std ;

void increment(void*pvoid , int size ) {

    if( size == sizeof(int)) {
        //pvoid points to an integer 
        int* pint = (int*)pvoid;
        (*pint)++;// precedence(*) < precedence(++)

    }else if ( size == sizeof(char)){
        char* pchar = (char*)pvoid;
        (*pchar)++;
    }else if( size == sizeof(double)){
        double* pdouble = (double*)pvoid;
        (*pdouble)++;
    }
    
}
int main ( ) {


    int x = 0 ;
    char y = 'a' ;
    double z = 3.14;

    increment(&x,sizeof(x));
    increment(&y,sizeof(y));
    increment(&z,sizeof(z));

    cout << x << endl << y << endl << z << endl;

    return 0 ;
     
}