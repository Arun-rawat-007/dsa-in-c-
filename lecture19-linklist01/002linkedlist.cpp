#include<iostream>
using namespace std ;

class ListNode {

    public :

    int val ;
    ListNode* next ;

    ListNode(int val ){
        
        this -> val = val ;
        this -> next = NULL ;

    }

};

void insertnode( ListNode*& head , int val ){

    ListNode* n = new ListNode(val);
    n -> next =  head ;
    head = n ;

}       

void print ( ListNode* head ){

    while ( head != NULL ){

        cout << head->val << " ";
        head = head -> next;
    }
    cout << endl;

}

int main () {

    ListNode* head = NULL ;

    insertnode(head,50);
    insertnode(head,40);
    insertnode(head,30);
    insertnode(head,20);
    insertnode(head,10);

    print(head);

    return 0 ;
}