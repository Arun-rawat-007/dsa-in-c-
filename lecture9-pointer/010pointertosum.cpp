#include<iostream>
using namespace std ;

int main (){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int) ;

    for (int i = 0 ; i<=n-1; i++ ){
        cout << &arr[i] << " " << ( arr + i ) << " " << arr[i] << " " << *(arr + i ) << endl;
    }

    return 0 ;      
}