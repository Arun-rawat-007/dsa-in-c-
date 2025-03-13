#include<iostream>
using namespace std;

void reading( char str[],char delimiter = '\n'){
    char ch;
    int i = 0 ;

    while( true ){

        ch = cin.get() ;
        if ( ch == delimiter ){
            break;
        }
        str[i] = ch ;

        i = i + 1 ;
    }

    str[i] = '\0';

}
int main ( ){

    char str[101]; 

    reading(str,'$') ;
    cout << "you have entered : " << str << endl;
    return 0 ;
}