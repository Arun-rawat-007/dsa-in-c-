#include<iostream>
using namespace std ;

class listnode {
    public :

    int val ;
    listnode* next ;

    listnode( int val ) {
        this -> val =val ;
        this -> next = NULL ;

    }
};


void insertion( listnode*& head, int val ){


    listnode* n = new listnode(val) ;
    n->next = head;
    head = n ;

}

void print( listnode* head){
    while ( head != NULL ){
        cout << head -> val << " ";
        head = head -> next ;
    }
}

listnode* f( listnode* head1, listnode* head2 ) {

    listnode* head3 = NULL ; // new linklist starting point 
    listnode* temp = head3 -> next;

    while ( head1 -> next != NULL and head2 -> next != NULL ){
        
        if ( head1 -> val < head2 -> val ) {
            
            head3-> next = head1 ;
            head1 = head1->next;
            head3 = head3->next ;

        }else {
            // h1 > h2 
            head2->next = head2 ;
            head2 = head2->next; 
            head3 = head3 -> next ;

        }

    }

    while ( head1->next != NULL ) {
        
        head3 -> next = head1 ;
        head1 = head1 ->next;
        head3 = head3 ->next ;

    }

    while ( head2->next != NULL ){

        head3 ->next = head2 ;
        head2 = head2 -> next ;
        head3 = head3 -> next ;

    }

    return temp; 
}
int main () {

    listnode* head1 = NULL ;

    insertion( head1 , 50 );
    insertion( head1, 30 );
    insertion( head1 , 10 );

    print(head1); 
    cout << endl;

    listnode* head2  = NULL ;

    insertion( head2 , 60) ;
    insertion( head2 , 40) ;
    insertion( head2 , 20) ;

    print(head2);
    cout << endl;

    //for  mergesort
    
    listnode* mergesort = f(head1,head2) ;
    print(mergesort);

    return 0 ;  
}