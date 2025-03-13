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
    
    while ( head1 != NULL and head2 != NULL ) {
        int d1 = head1 -> val; 
        int d2 = head2 -> val ;

        int sum = d1 + d2 ;

        listnode* n = new listnode(sum); 
        n->next = head ;
        head = n ; 

        head1 = head1 -> next ;
        head2 = head2 -> next ; 

    }

    return head ;

}
int main () {

    listnode* head1 = NULL ;

    insertion(head1, 1 );
    insertion(head1, 2);
    insertion(head1, 3 );

    print( head1 ) ;
    cout << endl;

    listnode* head2 = NULL ;

    insertion(head2, 4);
    insertion(head2, 5);
    insertion(head2, 6);
    
    print ( head2 ) ; 
    
    cout << endl;
    listnode* head = sumoflinklist(head1,head2) ;

    print(head) ;

    return 0;
}
