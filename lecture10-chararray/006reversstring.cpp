#include<iostream>
#include<cstring>
#include<algorithm>


using namespace std ;
void reversstring( char str[] ){
    int i = 0 ;
    int j = strlen(str) - 1 ;

    while( i < j ) {
        swap( str[i],str[j]);
        i++;
        j--;
    }
 
}
int main ( ) {

    char str[] = " hello arun" ;

    cout << " original string : " << str << endl;

    reversstring(str) ;

    cout << " after reversing the string : " << str << endl;

    // built in function 
    strrev(str);
    cout << str << endl;
    
    reverse(str,str + strlen(str) ); // reverseing from arr , arr + n 
    cout << str << endl;
    return 0 ; 
}