#include<iostream>
using namespace std ;
class ListNode {

    public :
    int val;
    ListNode* next ;

    ListNode(int val ){
        
        this -> val = val ;
        this -> next = NULL ;

    }


};
void insert( ListNode*& head , int val ){

    ListNode* n = new ListNode(val);
    n->next = head ;
    head = n ;

}
void print ( ListNode* head ){

    while ( head != NULL ){

        cout << head -> val << " ";
        head = head -> next ;
    }
    cout << endl;
}
int f(ListNode* head ){

    // base case 
    if ( head == NULL ){
        return 0 ;
    }
    // recursive case 
    int x = f(head->next);
    return x+1;
}
int main () {


        ListNode* head = NULL;
    
        insert(head,50);
        insert(head,40);
        insert(head,30);
        insert(head,20);
        insert(head,10);
    
        print(head);

        cout << f(head) << endl;

    return 0 ; 
}