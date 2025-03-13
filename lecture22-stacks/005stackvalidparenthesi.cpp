#include<iostream>
#include<stack>
#include<string> 

using namespace std ;


bool isbalanced( const string& str ) {

    stack<char> s ;

    for (char ch : str) {
        switch(ch) {
        case '(':
        case '[':
        case '{': s.push(ch) ; break;
        case ')': if( !s.empty() || s.top() == ')') s.pop(); else return false ; break ;
        case ']': if( !s.empty() and s.top() == '[') s.pop(); else return false ; break;
        case '}': if ( !s.empty() and s.top() == '{') s.pop(); else return false ; break;
    
        }
    
    }

    return s.empty();
    
}


int main() {

    string str = "([{}])" ;
    
    isbalanced(str) ? cout << "balanced" << endl : cout << "not balanced" << endl;
    

    return 0 ;
}