

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