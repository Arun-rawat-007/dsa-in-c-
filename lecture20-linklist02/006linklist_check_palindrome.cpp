#include<iostream>
using namespace std ;


class listnode {


    public :

    int val ;
    listnode* next ;

    listnode( int val ){

        this -> val = val ;
        this -> next = NULL ; 
    }

};
void insertion( listnode*& head , int val ) {
    listnode* n = new listnode(val);
    n->next = head ;
    head = n ; 
}

void print(listnode* head ){
    while( head !=  NULL ) {
        cout << head -> val << " " ;
        head= head->next ;
    }
}

// step 1 calculate mide point 
// step 2 break the midpoint and create a new linklist from midpoint -> next = head2  also midpoint ->next = null 
// step 3 reverse the new linklist from head2 
// step 4 compare the value of head with head2 and move the pointer one step
listnode* finfmidpoint( listnode* head ){

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

listnode* reverse( listnode* head ){
    listnode* prev = NULL ;
    listnode* cur = head ;
    
    while ( cur != NULL ){
        
        listnode* temp = cur -> next ;
        cur -> next = prev ;
        prev = cur ;
        cur = temp;

    }

    return prev ;

}

bool ispalindrome( listnode* head ){
    
    listnode* midpoint = finfmidpoint(head);
    listnode* head2 = midpoint -> next ;
    midpoint ->next = NULL; 

    // reveres the head2 linklist 
    head2 = reverse(head2) ;

    while ( head2 != NULL ) {
        if ( head -> val != head2 -> val ) {
            return false ;
        }
        head = head -> next ;
        head2 = head2 -> next ;

    }

    return true; 
}
int main () {

    listnode* head = NULL ;

    insertion(head,10);
    insertion(head,20);
    insertion(head,30);
    insertion(head,20);
    insertion(head,10);
    
    print(head) ;
    cout << endl;
    ispalindrome(head) ? cout << "is palindrome" << endl : cout << "is not palindrome" << endl;

    return 0 ; 
}