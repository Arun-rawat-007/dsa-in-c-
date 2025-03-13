#include<iostream>
#include<string>

using namespace std;

int main ( ) {

    string s1 = "abc" ;
    string s2 = "xyz" ;

    s1.append(s2);
    cout << s1 << endl;
    cout << s2 << endl;

    string s = "hell" ;

    s.push_back('o');
    cout << s << endl;

    s.pop_back();
    cout << s << endl;

    // geting a oth indx value 
    cout << s.front() << endl;

    // gettin a last indx value 
    cout << s.back() << endl;

    string t = "worl" ;

    char ch = 'd' ;

    t = t + string(1,ch) ;
    // t += ch ;
    cout << t << endl;

    return 0 ;
}