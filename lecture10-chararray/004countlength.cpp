#include<iostream>

using namespace std ;
int findlength( char str[] ){
    int count = 0 ;
    
    for( int i = 0 ; str[i]!='\0'; i++ ){
        count++;
    }

    return count;

}
int main() {


    char str[]="coding blocks" ;
    cout << findlength(str) << endl;

    return 0;
}