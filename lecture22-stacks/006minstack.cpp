#include<iostream> 
#include<stack>

using namespace std ;
class custom_stack {


    stack<int> main_stack; 
    stack<int> min_stack;

    public :


    void push(int val) {
        main_stack.push(val) ;
        if ( min_stack.empty() || val < min_stack.top() ){
            min_stack.push(val);    
        }
    }
    void pop() {
        
        int temp = main_stack.top() ;  

        main_stack.pop() ;
        if( min_stack.top() == temp ) {
            min_stack.pop();
        }

    }
    int size() {
        return main_stack.size();

    }
    int top () {
        return main_stack.top();
    }
    bool empty() {
        
        return main_stack.empty() ;
    }
    int getmin() {
        return min_stack.top();
    }
};
int main () {

    custom_stack cs ;

    cs.push(10);
    cs.push(20);

    cout << cs.getmin() << endl ;

    cs.push(5);
    cs.push(30);

    cout << cs.getmin() << endl;

    return 0 ; 
}   