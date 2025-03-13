#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std ;
vector<int> asteroidcollision( vector<int>& asteroids ) {

    stack<int> s ;
     
    for ( int ast : asteroids ) {
         if ( ast < 0 and !s.empty() and s.top() > 0 ) {
            // collison will happen 
            bool flag = true ; 

            while ( !s.empty() and s.top() > 0 ) {
                if ( abs(ast) > s.top()) {
                    // ast at the top of the stack 
                    s.pop() ;
                }else if ( abs(ast) < s.top()){
                    // ast will destroy 
                    flag = false ;
                    break ;
                }else {
                    // ast is equal to s.top 
                    s.pop();
                    flag = false ;
                    break;
                }

            }
            if ( flag ) {
                s.push(ast) ;
            }

         }else {
            // collision willl not happpen 
            s.push(ast ) ;
             
         }
    }


    vector<int> finalstate ;

    while ( !s.empty() ) {
        finalstate.push_back(s.top());
         s.pop() ;
    }

    reverse(finalstate.begin() , finalstate.end() ) ;
    return  finalstate ;

}
int main () {

    vector<int> asteroids = {7,3,-4,5,2,-8,2,4,1,-4} ;
    vector<int> finalstate = asteroidcollision(asteroids) ;

    for ( int i = 0 ; i < finalstate.size() ; i++ ){
        cout << finalstate[i] << " " ; 
    }
    
    cout << endl;

    return 0 ; 

}