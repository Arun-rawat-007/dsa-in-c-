#include<iostream>
using namespace std ;
// time : n + n + 26 ;
// space : 26 + 26 ;
bool isanagram( char s1[], char s2[]){

    // build a fmap for s1 

    int f1[26] = {0};

    for( int i = 0 ; s1[i] != '\0' ; i++ ){
        char ch = s1[i];
        int indx = ch - 'a';
        f1[indx]++;
    }

    // build a fmap for s2 

    int f2[26] = {0} ;

    for ( int i = 0 ; s2[i] != '\0'; i++ ){
        char ch = s2[i] ;
        int indx = ch - 'a';
        f2[indx]++;
    }

    // compare the f1 map with f2 map
    for ( int i = 0 ; i<26; i++ ){

        if ( f1[i] != f2[i]){
            //s1 and s2 are not anagram 
            return false;
        }

    }
    
    // s1 is equal to s2 

    return true; 


}
int main ( ) {

    char s1[] = "state" ;
    char s2[] = "taste" ;

    isanagram(s1,s2) ? cout << " anagram " << endl : cout << "not anagram " << endl;

    return 0 ;

}