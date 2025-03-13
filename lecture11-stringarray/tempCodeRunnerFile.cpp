void largesrgoodstring( string str , int n ){

    for ( int i = 0 ; i<n; i++ ){
        for ( int j = i; j<= n-1; j++ ){
            for ( int k = i ; k<=j; k++ ){
                cout << str[k] ;
            }
            cout << endl;
        }
        cout << endl;
    }
}