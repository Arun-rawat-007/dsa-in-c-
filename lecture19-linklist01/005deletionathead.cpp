#include<iostream>
using namespace std ;

class ListNode {

    public :
    int val ;
    ListNode* next ;

    ListNode( int val ){
        this -> val = val ;
        this -> next = NULL ;
    }
};

void insertathead( ListNode*& head , int val ){

    ListNode* n = new ListNode(val);
    n -> next = head; 
    head = n ; 
}

void print ( ListNode* head ){

    while ( head != NULL ){
        cout << head -> val << " ";
        head = head -> next ;
    }
    cout << endl;
}

void deletion( ListNode*& head ) {
    ListNode* temp = head;
    head = head -> next ;
    delete temp ;
}

int main () {


    ListNode* head = NULL ;
    insertathead(head,50);
    insertathead(head,40);
    insertathead(head,30);
    insertathead(head,20);
    insertathead(head,10);
    
    print(head);
    deletion(head);
    print(head);

    return 0 ; 
}