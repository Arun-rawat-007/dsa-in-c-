// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;
// time compexity = 7 

int genratepair( int arr[], int n ){
    int count = 0 ;
    for(int i = 0 ; i<=n-2; i++ ){
        for ( int j = i+1; j<=n-1; j++ ){
            // cout << "(" << arr[i] << "," << arr[j] << ")" << endl ;
            if( arr[i] > arr[j] and i < j ){
                count++;
            }
        }
    }
    
    
    return count;
}
int main() {
    int arr[] = {2,7,5,8,3,4};
    int n = sizeof(arr)/sizeof(int);
    
    cout << "inverson is = " << genratepair(arr,n) << endl;
    
    return 0; 
}