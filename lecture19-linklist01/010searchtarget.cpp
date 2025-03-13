#include<iostream>
using namespace std ;
class ListNode {

    public :
    int val;
    ListNode* next ;

    ListNode(int val ){
        
        this -> val = val ;
        this -> next = NULL ;

    }


};
void insert( ListNode*& head , int val ){

    ListNode* n = new ListNode(val);
    n->next = head ;
    head = n ;

}
void print ( ListNode* head ){

    while ( head != NULL ){

        cout << head -> val << " ";
        head = head -> next ;
    }
    cout << endl;
}
bool f( ListNode* head , int target ){

    while ( head != NULL ){
        if ( head -> val == target ){
            return true ;
        }
        head = head -> next ;
    }

    return false; 

}
int main () {
    

    ListNode* head = NULL;
    
    insert(head,50);
    insert(head,40);
    insert(head,30);
    insert(head,20);
    insert(head,10);

    print(head);
    int target = 30 ;
    f(head,target) ? cout << "target found" << endl : cout << "target is not found" << endl;


    return 0 ;
}