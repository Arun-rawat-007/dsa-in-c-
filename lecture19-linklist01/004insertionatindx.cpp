#include<iostream>
using namespace std ;
class ListNode {

    public :
    int val ;
    ListNode* next ;

    ListNode( int val ){

        this -> val = val ;
        this -> next = NULL ;

    }

};

void insertathead( ListNode*& head , int val ){

    ListNode* n = new ListNode(val);
    n->next = head; 
    head = n ;

}
void print ( ListNode* head ){
   while ( head != NULL ){

        cout << head->val << " ";
        head = head -> next ;

   } 
   cout << endl;
}
ListNode* getindx( ListNode* head , int j ){

    int k = 1 ;

    while ( head != NULL and  k <= j ){
        head = head -> next ;
        k++;
    }

    return head ;
}

// time : O(n) linnear compexity 

void insertatindex( ListNode*& head , int i , int val ){
    // corner csae 
    if ( i == 0 ){
        insertathead(head,val);
        return ;
    }
    ListNode* n = new ListNode(val); // const 
    ListNode* prev = getindx(head,i-1); // linnear 

    if ( prev == NULL ){
        return ;// i > length of linklist invalid index 
    }

    n->next = prev->next ; // const 
    prev->next = n ;    // const 
}
int main () {

    ListNode* head = NULL ;

    insertathead(head,50);
    insertathead(head,40);
    insertathead(head,30);
    insertathead(head,20);
    insertathead(head,10);

    print(head);

    insertatindex(head,0,25);
    insertatindex(head,4,65);

    print(head);
    return 0 ;
}