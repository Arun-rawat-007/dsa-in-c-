#include<iostream>
using namespace std ;
class ListNode {

    public :
    int val ;
    ListNode* next ;

    ListNode(int val ){
        this -> val = val ;
        this -> next = NULL;
    }

};
ListNode* gettail( ListNode* head) {
    
    while ( head -> next != NULL ){
        head = head->next;
    }

    return head ;

}
void  insertattail( ListNode*& head, int val ){

    if( head == NULL ){
        
        insertathead(head,val);
        return;

    }

    ListNode* n = new ListNode(val);
    ListNode* tail = gettail(head);
    tail->next = n;

}
void print ( ListNode* head ){
    while ( head != NULL ){
        
        cout << head->val << " ";
        head = head -> next ;

    }
    cout << endl;
}
void insertathead( ListNode*& head , int val ){
    ListNode* n = new ListNode(val);
    n->next=head;
    head = n ;
}
int main () {

    ListNode* head = NULL ;
    insertathead(head,50);
    insertathead(head,40);
    insertathead(head,30);
    insertathead(head,20);
    insertathead(head,10);
    
    print(head);

    insertattail(head,60);
    
    print(head);



    return 0 ;
}