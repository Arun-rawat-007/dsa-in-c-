#include<iostream>
using namespace std ;

class listnode {


    public :

    int val ;
    listnode* next ;

    listnode( int val ) {
        this ->  val = val ;
        this -> next = NULL ;
    }
};

void insertion ( listnode*& head , int val ){

    listnode* n = new listnode(val) ;
    n-> next = head ;
    head = n ; 

}

void print( listnode* head ){

    while ( head != NULL ){
        cout << head -> val << " ";
        head = head -> next ;
    }
}
listnode* f ( listnode* head ){

    if ( head == NULL ) {
        return NULL ;
    }
    listnode* fast = head -> next ;
    listnode* slow = head ;

    while ( fast != NULL and fast->next != NULL ) {
        fast = fast->next->next ;
        slow = slow->next ;
    }

    return slow ;
}

int main () {

    listnode* head = NULL ;

    insertion(head,50);
    insertion(head,40);
    insertion(head,30);
    insertion(head,20);
    insertion(head,10);

    print(head) ;
    cout << endl;
    listnode* midpoint = f(head);
    
    midpoint != NULL ? cout << midpoint-> val << endl : cout << " linklist ie empty " << endl;

    return 0 ; 
}