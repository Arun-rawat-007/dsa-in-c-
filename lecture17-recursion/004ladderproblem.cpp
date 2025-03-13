#include<iostream>
#include<vector>

using namespace std ;
vector<int> path ;
int f( int n, int k ,int i){
    //base case 
    if ( i == n ){
        for( int x  : path){
            cout << x << " ";

        }
        cout << endl;
        return 1 ;
    }

    // recursive case
    // find the no of ways to go from ith step to the nth step
    // decide the next step 
    // take a jump of size 1 
    // take a jump of size 3 
    // take a jump of size k 
    // take a jump of size j 1<=j<=k 
    int cnt = 0;
    for ( int j = 1; j<=k; j++ ){
        // can you take
        if( i+j <=n ){
            // let take a jump
            path.push_back(j);
            cnt += f(n,k,i+j);
            path.pop_back();
        }
    }

    return cnt ;
}
int main ( ){ 

    int n = 4 ;
    int k = 3 ; 
    cout << f(n,k,0) << endl;
    return 0; 
}