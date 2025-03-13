#include<iostream>
#include<cstring>
// length of s1 is  m 
// length of 2 is n 
//step  =  n ~ o(n)
// built in function is strcat(s1,s2) in <string>
using namespace std ;
void concatstring( char s1[], char s2[]){
    int i = strlen(s1) ;
    int j = 0 ;

    while( s2[j] != '\0'){
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0' ;

}
int main () {

    char s1[] = "abc";
    char s2[] = "def" ;

    cout << "before the concanate : " << s1 << endl;
    
    concatstring(s1, s2);

    cout << "after the concanate : " << s1 << endl;

    return 0 ; 
} 