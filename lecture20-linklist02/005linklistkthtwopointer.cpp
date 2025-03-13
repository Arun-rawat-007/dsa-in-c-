#include<iostream>
using namespace std ;
class listnode {

    public :
    int val ;
    listnode* next ;

    listnode ( int  val ){
        this ->val = val ;
        this -> next = NULL ;
    }
};
void insertion ( listnode*& head , int val ){

    listnode* n = new listnode(val) ;
    n->next = head;
    head = n ; 

}

void print ( listnode* head ){
    while ( head != NULL ){
        cout << head ->val << " ";
        head = head -> next ;
    }
}

listnode* kthmove( listnode* head , int k  ) {

    listnode* fast = head->next ;
    
    // first we move fast kth step after that we will move this normal step 
    
    int i = 1 ;
    while ( i <= k ){
        fast = fast -> next ;
        i++;
    }
    listnode* slow = head; 
    while ( fast != NULL ){
        slow = slow -> next;
        fast = fast -> next ;
    }
    
    return slow ;
}
int main () {

    listnode* head = NULL ;

    insertion(head,70);
    insertion(head,60);
    insertion(head,50);
    insertion(head,40);
    insertion(head,30);
    insertion(head,20);
    insertion(head,10);

    print(head); 
    cout << endl;
    int k = 2 ; 
    listnode* hff  = kthmove(head, k);
    cout << hff->val << endl;

    return 0 ; 
}