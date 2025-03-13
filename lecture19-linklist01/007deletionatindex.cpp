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

void deleteathead( ListNode*& head ){
    ListNode* temp = head ;
    head = head -> next ;
    delete temp ;
}

ListNode* getnode( ListNode* head , int j ){

    int k = 1 ;

    while ( head != NULL and k <= j ){
        head = head -> next ;
        k++;
    }

    return head ;
}
void deletionatindx( ListNode* head , int i ){
    
    if ( i == 0 ){
        deleteathead(head);
        return ;
    }
    
    // corner case 
    ListNode* prev = getnode(head,i-1);
    if ( prev == NULL ){
        return ;
    }
    ListNode* crnt = getnode(head,i);
    if ( crnt == NULL ){
        return ;
    }
    prev -> next = crnt -> next ;
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
    
    deletionatindx(head,2);
    print(head);

    return 0 ; 
}