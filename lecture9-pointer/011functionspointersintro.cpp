#include<iostream>
using namespace std ;

void greet( ){
    cout << "namsete" << endl;
}
int add( int a , int b ) {
    return a + b;
}

int main ( ){

    cout << (void*)&greet << endl;
    cout << (void*)greet << endl;
    void(*gptr)() = &greet ;
    cout << (void*)gptr << endl;

    greet();
    (*greet)();
    (*gptr)();
    gptr();

    cout << (void*)&add << endl;
    cout << (void*)add << endl << endl;
    int (*aptr)(int, int ) = &add ;
    cout << (void*)aptr << endl;

    cout << add(2, 3) << endl;
	cout << (*add)(2, 3) << endl;
	cout << (*aptr)(2, 3) << endl;
	cout << aptr(2, 3) << endl << endl;

    return 0 ;
}