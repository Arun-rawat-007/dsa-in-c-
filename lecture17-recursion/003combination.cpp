#include<iostream>
#include<vector>

using namespace std ;
void genratecombination( int t , vector<int> c , vector<int>& comb , int i ){
    // base case
    if ( t == 0 ){
        for ( int x : comb ){
            cout << x << " " ;
        }
        cout << endl;
        return ;
    }

    // recursive case 

    for ( int j = i ; j< c.size(); j++ ){
        if( c[j] <=t ) {
            comb.push_back(c[j]);
            genratecombination(t-c[j],c,comb,j);
            comb.pop_back();
        }
    }

}
int main () {

    vector<int> c = {2,3,5,7};
    int t = 7 ;

    vector<int> comb ;
    genratecombination(t,c,comb,0);

    return 0 ; 
}