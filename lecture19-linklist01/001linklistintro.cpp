#include<iostream>
using namespace std ;
class ListNode {
    public :

    int val;
    ListNode* next ;

    ListNode(int val) {
        this -> val = val ;
        this -> next = NULL;
    }
};
int main () {
    ListNode* n = new ListNode(10);
    cout << (*n).val << endl;
    cout << n->val << endl;
    if ( n->next == NULL ){
        cout << "null" << endl;
    }

    if ( (*n).next == NULL){
        cout << "null" << endl;
    }
    return 0 ;
}