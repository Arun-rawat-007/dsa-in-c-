#include<iostream>
#include<string>
#include<algorithm>


using namespace std ;

int main (){

    string s1 = "abcdef";

    reverse(s1.begin(),s1.end());

    cout << s1 << endl;

    reverse(s1.begin()+1,s1.begin()+4); // reverse s[1,4)
    cout << s1 << endl;

    return 0 ; 
}