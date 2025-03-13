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

void insertion( listnode*& head , int val ) {
    
    listnode* n = new listnode(val) ;
    n-> next = head ;
    head = n ;

}
void print( listnode* head ) {

    while ( head != NULL ) {
        
        cout << head -> val << " " ;
        head = head -> next ;

    }
}

listnode* removesduplicate(listnode* head  ) {

    // base case 

    if ( head == NULL || head -> next == NULL ) {

        return head ;
        
    }

    // recursive case 
    // linklist has atleast two nodes 

    if ( head -> val != head -> next -> val ) {
        // ask your frnd to delete all the duplicate nodes fromo the substitute 
        listnode* headfrommyfriend = removesduplicate(head->next) ;
        head -> next = headfrommyfriend;
        return head;

    }else {
        // head node is duplicate 
        while ( head -> next != NULL and head -> val == head -> next -> val ) {
            head= head->next ;
        }

        listnode* headfrommyfriend = removesduplicate(head -> next ) ;
        return headfrommyfriend ;

    }

}
  
int main () {

    listnode* head = NULL ;

    insertion(head ,50 );
    insertion(head ,40 );
    insertion(head ,30 );
    insertion(head ,30 );
    insertion(head ,20 );
    insertion(head ,20 );
    insertion(head ,10 );

    print(head ) ;
    cout << endl; 
    
    head = removesduplicate(head);
    
    print(head) ;
    return 0 ; 
}