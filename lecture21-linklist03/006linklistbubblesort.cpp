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

void insertion( listnode*& head , int val ) {

    listnode* n = new listnode(val) ;
    n-> next = head ;
    head = n ; 
}
void print ( listnode* head ) {
    while ( head != NULL ){
        cout << head -> val << " " ;
        head = head-> next ; 

    }
}
int completelengthitreative(listnode* head ){


    int count = 0 ;
     
    while ( head != NULL ){

        count++; 
        head = head -> next ;

    }

    return count ; 

}

listnode* bubblesort( listnode* head ) {
    int n = completelengthitreative(head );
    int i = 1 ;

    while ( i < n ) {
        int j = 0 ; 

        listnode* prev = NULL ;

        listnode* cur = head ;

        while ( j < n-i) {
            
            listnode* temp = cur -> next ;
            if ( cur -> val > temp -> val ){
                cur -> next = temp -> next ;
                temp -> next = cur ;
                if ( prev == NULL ) {
                    head = temp ;
                }else {
                    prev -> next = temp ;
                }
                prev = temp ;
            }else {

                prev = cur ;
                cur = cur -> next ;

            }
            j++ ;

        }
        i++;
    }
    return head ;

}
int main ( ) {


    listnode* head = NULL ;

    insertion(head,10);
    insertion(head,20);
    insertion(head,30);
    insertion(head,40);
    insertion(head,50);

    print(head) ;
    cout << endl;
    
    head = bubblesort(head ) ;

    print(head);
    return 0 ; 
}