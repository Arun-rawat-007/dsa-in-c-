#include<iostream>
#include<string>

using namespace std ;


int main ( ){

    string s1 = "abcdcdcdef" ;
    string t = "cd" ;

    cout << s1.find(t) << endl;// retuns the first occurance of starting indx 
    cout << s1.rfind(t) << endl;// last occurance 

    string u = "zz" ;
    cout << s1.find(u) << endl;

    if( s1.find(u) != string::npos) {
         // u is present in s1 
    }else {
        // u is not present in s1 

    }


    return 0 ; 
}