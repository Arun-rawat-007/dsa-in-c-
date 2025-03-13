#include<iostream>

using namespace std ;


class listnode {

    public :

    int val ;
    listnode* next ;

    listnode( int val ) {

        this -> val = val;
        this -> next = NULL ;


    }
};

void insertion ( listnode*& head , int val ) { 

    listnode* n = new listnode(val);
    n->next = head;
    head = n ;

}

void print ( listnode* head ){
    while ( head != NULL ){
        cout << head -> val << " " ;
        head = head -> next; 
    }
}
listnode* rotatelinklist( listnode* head , int k ) {

    // step 1 : from  a loop by connecting the tail node with the head node
    listnode* tail = head ;
    int n = 1 ;
    while ( tail -> next != NULL ){
        tail = tail -> next ;
        n++;
    }
    tail -> next = head;

    // step 2 : find the new tailnode from a givn linklist
    
    listnode* newtail = head ;

    for ( int i = 0 ; i < n -(k%n) - 1 ; i++ ) {

    }
    // step 3 : find the new head of the given linklist
    listnode* newhead = newtail -> next ;

    // step 4 : berak the linklist from the new tail node 
    newtail -> next = NULL ;

    return newhead ;
}

int main () {

    listnode* head = NULL ;

    insertion( head , 50 ) ;
    insertion( head , 40 ) ;
    insertion( head , 30 ) ;
    insertion( head , 20 ) ;
    insertion( head , 10 ) ;


    print(head );
    cout << endl;
    int k = 2 ;

    head = rotatelinklist(head, k ) ;
    print(head) ;

    return 0 ; 
}