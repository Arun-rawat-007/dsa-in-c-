#include<iostream>
using namespace std ;
// built in function strcpy(s1,s2);

void copystring ( char s1[], char s2[]){
    int i = 0 ;
    int j = 0 ;

    while( s2[j] != '\0' ){
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}
int main ( ){

    char s1[101] = "abcde";
    char s2[] = "xyz";

    copystring(s1,s2) ;

    cout << "after copy : " << s1 << endl;

    return 0 ; 
}