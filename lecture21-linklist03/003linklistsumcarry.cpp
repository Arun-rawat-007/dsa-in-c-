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

listnode* sumoflinklist( listnode* head1, listnode* head2 ){


    listnode* head = NULL ;
    int carry = 0 ;

    while ( head1 != NULL and head2 != NULL ) {
        int d1 = head1 -> val; 
        int d2 = head2 -> val ;

        int sum = d1 + d2 + carry  ;
        carry = sum / 10 ; 

        listnode* n = new listnode(sum%10); 
        n->next = head ;
        head = n ; 

        head1 = head1 -> next ;
        head2 = head2 -> next ; 

    }


    while ( head1 != NULL ) {
        int d1 = head1 -> val; 

        int sum = d1 + carry  ;
        carry = sum / 10 ; 

        listnode* n = new listnode(sum%10); 
        n->next = head ;
        head = n ; 

        head1 = head1 -> next ;
    }

    while ( head2 != NULL ) {
        int d2= head2 -> val; 

        int sum = d2 + carry  ;
        carry = sum / 10 ; 

        listnode* n = new listnode(sum%10); 
        n->next = head ;
        head = n ; 

        head2 = head2 -> next ;
    }

    if ( carry == 1 ){
       
        listnode* n = new listnode(1);
        n->next = head ;
        head = n ;

    }


    return head ;

}
int main () {

    listnode* head1 = NULL ;

    insertion(head1, 9 );
    insertion(head1, 9);
    insertion(head1, 9 );
    insertion(head1, 9 );
    insertion(head1, 9 );

    print( head1 ) ;
    cout << endl;

    listnode* head2 = NULL ;

    insertion(head2, 9);
    insertion(head2, 9);
    insertion(head2, 9);
    
    print ( head2 ) ; 
    
    cout << endl;
    listnode* head = sumoflinklist(head1,head2) ;

    print(head) ;

    return 0;
}
 