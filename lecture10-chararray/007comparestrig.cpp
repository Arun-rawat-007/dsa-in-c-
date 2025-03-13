#include<iostream>
#include<cstring>

using namespace std ;
// length of s1 n 
// length of s2 m 

// time = min(n,m)
int comaperestring( char s1[], char s2[] ){

    int i = 0 ;
    int j = 0 ;

    while ( s1[i] != '\0' and s2[j] != '\0' ) {

        if( s1[i] > s2[j] ){
            // s1 > s2 
            return 1 ;

        }else if ( s1[i] < s2[j] ){
            // s1 < s2 
            return -1;
        }
        // s1 = s2 
        i++;
        j++;

    }

    if ( s1[i] == '\0' and s2[j] == '\0' ){
        // s1 = s2 
        return 0;

    }else if ( s2[i] == '\0') {
        // s1 <  s2 
        return -1 ;
    }else {
        //s1 == s2 
        return 1 ;
    }
}
int main( ) {


    char s1[] = "adc";
    char s2[] = "abc";
    // built in function 
    // strcmp(s1 , s2 )..
    int result = comaperestring(s1,s2) ;

    if( result == 0 ){
        // s1 string is equal to s2
        cout << s1 << " is equal to " << s2 << endl;
    }else if ( result > 0 ){
        // s1 string is smaller than stirng s2 
        cout << s1 << " > " << s2 << endl;
    }else {
        // s1 string is bigger than s2 
        cout << s1 << " < " << s2 << endl;
    }
    return 0 ; 
}