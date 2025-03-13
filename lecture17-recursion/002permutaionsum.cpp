#include<iostream>
#include<vector>

using namespace std;
vector<vector<int>> allperm; 
void genratepermutations( int t , vector<int> c , vector<int>& perm) {
    // base case 
    if ( t == 0 ){
        allperm.push_back(perm);
        return ;
    }

    // recursive case 
    for ( int j=0; j<c.size(); j++ ){

        if ( c[j] <= t ){

            perm.push_back(c[j]);
            genratepermutations(t-c[j],c,perm);
            perm.pop_back();

        }

    }

}
int main () {

    vector<int> c = {2,3,5,7};
    int t =  7 ;
    vector<int> perm;

    genratepermutations(t,c,perm);

    for( vector<int> p : allperm){
        for ( int x : p ){
            cout << x << " ";
        }
        cout << endl;
    }

    return 0 ;
}