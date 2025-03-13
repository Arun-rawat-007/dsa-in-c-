#include<iostream>
#include<vector>

using namespace std ;

int findpeakmountain( vector<int>& arr) {
    
    int n = arr.size();
    
    int s = 0 ;
    int e = n-1; 

    while ( s < e) {
        int m1 = s + (e-s) / 3 ;
        int m2 = e - (e-s) / 3 ;

        if ( arr[m1] > arr[m2] ){
            e = m2 -1 ;
        }else {
            // arr[m1] < arr[m2] 
            s = m1 + 1 ;
        }
    }

    return arr[s] ; // arr[e]
} 
int main () {

    vector<int> arr = {0,1,3,10,3,1,0};
    cout << findpeakmountain(arr) << endl;

    return 0 ;
}