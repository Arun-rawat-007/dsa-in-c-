#include<iostream>
#include<cstring>

using namespace std ;
void reversestring( char str[] , int n ){
    int i = 0 ;
    int j = n-1 ;

    while( i < j ){

        swap( str[i],str[j]);
        i++;
        j--;

    }

    // for ( int i = 0 ; str[i]!= '\0'; i++ ){
    //     cout << str[i] << " " ;
    // }
    // cout << endl;

}
int main ( ) {

    char str[] = "hello";
    int n = strlen(str) ;

    cout << "original string : " << str << endl;

    reversestring(str,n);

    cout << "reversing string after 1st reverse : " << str << endl; 

    return 0 ; 
}