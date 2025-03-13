#include<iostream>
#include<string>
#include<algorithm>

using namespace std ;

int main ( ) {

    string s = "axbycz";
    // sorting in increase order
    sort(s.begin(),s.end());// using algoirthm header file 
    cout << s << endl;
    
    // sorting in derceasing order 
    sort(s.rbegin(),s.rend());
    cout << s << endl;
    // sorting in increaing oreder 
    sort(s.begin(),s.end());
    cout << s << endl;
    //sorting in decreaing order
    sort(s.begin(),s.end(),greater<char>());
    cout << s << endl;



    return 0 ; 
}