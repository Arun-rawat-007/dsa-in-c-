#include<iostream>
using namespace std ;

class listnode {

    public :

    int val ; 
    listnode* next ;

    listnode ( int val ) {

        this -> val = val ;
        this -> next = NULL ;

    }

};

void insertion ( listnode*& head , int val  ){

    listnode* n = new listnode(val) ;
    n->next = head ;
    head = n ; 

}
void print ( listnode* head ){

    while ( head != NULL ) {
        cout << head -> val << " " ;
        head = head -> next ; 
    }
}

listnode* mergesort( listnode* head1 , listnode2* head2 ){
    // base case 


    // recursive case 

    listnode* head ;

    if ( head1-> val < head2 -> val ){
        
        head = head1 ;
        listnode* headfrommyfamily = mergesort(head1 -> next , head2 );
        head -> next = headfrommyfamily;


    }else {
        
        head = head2 ;
        listnode* headfrommyfriend = mergesort(head1, head2 -> next );
        head -> next = headfrommyfriend ;
    
    }

    return head ;

}

int main () {

    listnode* head1 = NULL ; 

    insertion(head1,50);
    insertion(head1,30);
    insertion(head1,10);

    print(head1) ;




















    
    cout << endl;

    listnode* head2 = NULL ;

    insertion(head2,60);
    insertion(head2,40);
    insertion(head2,20);

    print(head2);
    listnode* head = mergesort(head1,head2);

    return 0 ; 
}