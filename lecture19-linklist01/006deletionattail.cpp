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

void insert( ListNode*& head ,int val ){

    ListNode* n = new ListNode(val);
    n->next = head;
    head = n ;

}

void print ( ListNode* head ){
    while ( head != NULL ){

        cout << head -> val << " ";
        head = head -> next ;

    }
    cout << endl;
}

void deletathead(ListNode*& head ){

    ListNode* temp = head ;
    head = head -> next ;
    delete temp;

}

void deletionattail( ListNode*& head ){
    // corner case 1 if linklist have zero node 

    if ( head == NULL ){
        return ;
    }
    
    // corner case 2 : if linklist have only one node 
    if ( head -> next == NULL ){
        // its like deletion at head 
        deletathead(head);
        return ;
    }
    ListNode* prev = NULL ;
    ListNode* crnt = head ;

    while ( crnt-> next != NULL ){
        
        prev  = crnt ;
        crnt = crnt -> next ;

    }

    prev -> next = NULL ;
    delete crnt ;

}

int main () {

    ListNode* head = NULL;

    insert(head,50);
    insert(head,40);
    insert(head,30);
    insert(head,20);
    insert(head,10);

    print(head);

    deletionattail(head);

    print(head);

    return 0 ;
}