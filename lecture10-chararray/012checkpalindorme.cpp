#include<iostream>
#include<cstring>
// time : n/2 step
//space : O(1) 
using namespace std ;

bool ispalindrome( char s1[]){

    int i = 0 ;
    int j = strlen(s1) - 1 ;

    while( i < j ){

        if ( s1[i] != s1[j] ){
            
            return false;
        
        }
        i++;
        j--;

    }

    // s1 is palindrome

    return true ;

}
int main ( ) {

    char s1[] = "racecar";

    ispalindrome(s1) ? cout << s1 << " is palindrom " << endl : cout << "not a palindrome" << endl;

    return 0 ; 
}