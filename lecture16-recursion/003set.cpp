#include<iostream>
#include<set>

using namespace std ;

int main () {

    set<int> s ;

    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(0);
    cout << "size : " << s.size() << endl;
    s.erase(5);
    cout << "size : " << s.size() << endl; 

    for ( auto it=s.begin(), end=s.end(); it !=end; it++ ){
        cout << *it << " " ;
    }
    cout << endl;
    for( auto x : s ){
        cout << x << " ";
    }
    if ( s.find(3) != s.end()){
        cout << "s is present " << endl;
    }else {
        cout << "s is absent " << endl;
    }

    s.clear();
    cout << "size : " << s.size() << endl;

    s.empty() ? cout << "s is empty" << endl : cout << "s is not empty " << endl;
    
    return 0 ; 
}