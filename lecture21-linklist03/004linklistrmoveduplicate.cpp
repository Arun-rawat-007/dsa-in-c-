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

void removeduplicate( listnode* head ) {

    listnode* prev = head ;
    listnode* cur = head -> next;

    while ( cur != NULL ){

        if ( cur ->val != prev -> val )  {

            prev -> next = cur ;
            prev = cur ;
            cur = cur -> next ;

        }else {
            // dont track cur node
            cur = cur -> next ;
        }

        prev -> next = NULL  ;
    } 

} 
int main () {

    listnode* head = NULL ;

    insertion(head,40);
    insertion(head,30);
    insertion(head,30);
    insertion(head,20);
    insertion(head,10);
    insertion(head,10);

    print(head) ;
    cout << endl; 

    removeduplicate(head);
    print(head) ;

    return 0 ; 
}