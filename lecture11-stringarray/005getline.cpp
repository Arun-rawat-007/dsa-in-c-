#include<iostream>
#include<string>
#include<iomanip>

using namespace std ;

int main () {
// it stop reading value as soon as it encounters '\n';
// it also read the leaidng whitespace 
// to ignore the leading white space we can use iomanip headeer file 

    string str ;

   getline(cin >> ws , str);
    // getline(cin,str,'$');
    cout << str << endl;

    return 0 ; 
}