#include<iostream>

using namespace std ;


class listnode {

    public : 

    int val ;
    listnode* next ;

    listnode ( int val ) {

        this->val = val ;
        this -> next = NULL ;
    }
};

void insertion( listnode*& head , int val ) {
    listnode* n = new listnode(val) ;
    n->next = head;
    head = n ;
}

void print( listnode* head ){
    while ( head != NULL ){
        cout << head->val << " ";
        head = head-> next;
    }
}

listnode* f( listnode* head , int k ) {

    // base case 
    if ( head == NULL ) {
        return head ;
    }
    // recursive case 
    listnode* cur = head ;
    listnode* prev = NULL ;

    int i = 1 ; 
// reverse first k node 
    while ( i <= k  and cur != NULL  ){
        
        listnode* temp = cur -> next ;
        cur -> next = prev ;
        prev = cur ;
        cur = temp ;
        i++;

    }
    listnode* headfrommyfrnd = f(cur,k);

    head -> next =  headfrommyfrnd  ;

    return prev;
}

int main () {

    listnode* head = NULL ;

    insertion(head, 60 );
    insertion(head, 50 );
    insertion(head, 40 );
    insertion(head, 30 );
    insertion(head, 20 );
    insertion(head, 10 );


    print(head) ;
    cout << endl; 
    int k = 2 ;
    head = f(head, k );
    print(head) ;
    return 0 ; 
}