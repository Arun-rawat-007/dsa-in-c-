#include<iostream>
#include<vector>

using namespace std ;
void genratepermutations(int t ,const vector<int> c , vector<int>& perm ){
    // base case 
    if ( t == 0 ){
        for ( int i = 0; i<perm.size(); i++ ){
            cout << perm[i] << " ";
        }
        cout << endl;
        return ; 
    }

    // recursive case 
    // genrate permutaions of c that sums up to t or choose candiataise that sum up to equal to 
    // decide the next candidate 
    for ( int j =0 ; j<c.size(); j++ ){
        if ( c[j] <= t ){
            perm.push_back(c[j]);
            genratepermutations(t-c[j],c,perm);
            perm.pop_back();//backtracking
        }

    }
}
int main ( ){

    vector<int> c = {2,3,5,7};
    int t = 7 ;

    vector<int> perm ;

    genratepermutations(t,c,perm);

    return 0 ; 
}