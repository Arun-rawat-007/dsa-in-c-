#include<iostream>
using namespace std ;
int main (){

    int x = 10 ;

    cout << " x = " << x << endl;
    cout << " &x = " << &x << endl;
    cout << "sizeof(x) = " << sizeof(x) << "B"<< endl;
    cout << "sizeof(&x) = " << sizeof(&x) << "B" << endl;

    cout << endl;

    double y = 3.14;
    cout << "y = " << y << endl;
    cout << "&y = " << &y << endl;
    cout << "sizeof(y) = " << sizeof(y) << "B" << endl; 
    cout << "sizeof(&y) = " << sizeof(&y) << "B" << endl;

    return 0 ;
}