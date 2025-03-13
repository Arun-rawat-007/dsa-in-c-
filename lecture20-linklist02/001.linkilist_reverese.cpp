#include<iostream>

using namespace std ;

class listnode {

    public :

    int val ;
    listnode* next ;

    listnode( int val ) {
        this->val = val;
        this->next = NULL ;
    }

};

void insertionatheaed( listnode*& head,  int val ) {

    listnode* n = new listnode(val);
    n->next = head ;
    head  = n ;

}

void print ( listnode* head ){

    while ( head != NULL ) {
        cout << head -> val << " ";
        head = head -> next ;
    }

}
listnode* reverselinklist( listnode* head ){

    listnode* prev = NULL ;
    listnode* cur = head;

    while ( cur != NULL ){

        listnode* temp = cur->next;
        cur->next = prev ;
        prev = cur ;
        cur = temp ;

    }

    return prev ; 

}
int main ( ){

    listnode* head = NULL ;

    insertionatheaed(head,50);
    insertionatheaed(head,40);
    insertionatheaed(head,30);
    insertionatheaed(head,20);
    insertionatheaed(head,10);

    print(head) ;
    cout << endl;
    head = reverselinklist(head) ;

    print(head) ;

    return 0 ; 
}