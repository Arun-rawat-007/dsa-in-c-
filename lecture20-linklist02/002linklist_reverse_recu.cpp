#include<iostream>
using namespace std ;


class listnode {

    public :
    
    int val ;
    listnode* next ;

    listnode ( int val ) {
        this -> val  = val ;
        this -> next = NULL; 
    }


};

void insertion( listnode*& head , int val ) {

    listnode* n = new listnode(val) ;
    n->next = head ;
    head = n ; 

}


void print ( listnode* head ) {

    while ( head != NULL ){
        cout << head -> val << " ";
        head = head-> next ; 
    }


}
listnode* reverselinklist( listnode* head ) {

    // base case 
    if ( head == NULL ) {
        return head ;
    }

    if ( head -> next == NULL ) {
        // linklist has only one node
        return head; 
    }


    // step 1 : pass the value from  second node
    listnode* headfrommyfrnd = reverselinklist(head -> next ) ;
    head -> next -> next = head ;
    head->next = NULL ;

    return headfrommyfrnd ;
}
int main () {

    listnode* head = NULL ;

    insertion(head, 50 );
    insertion(head, 40 );
    insertion(head, 30 );
    insertion(head, 20 );
    insertion(head, 10 );

    print(head) ;

    cout << endl;
    head = reverselinklist( head );

    print(head) ;
    return 0 ; 
}