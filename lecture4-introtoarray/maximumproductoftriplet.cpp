#include<iostream>
#include<limits.h>

using namespace std;

int main () {
    int arr[] = {10,20,30,40,50} ;
    int n = sizeof(arr) /sizeof(int) ;
  
    int fl = INT_MIN;
    int sl = INT_MIN;
    int tl = INT_MIN;
    


    for( int i = 0 ; i <= n-1 ; i++ ){

    int absValue = (arr[i] < 0) ? -arr[i] : arr[i];

        if( absValue > fl ) {
            tl = sl ;
            sl = fl ;
            fl = absValue ;

        }else if( absValue > sl ){
            tl=sl;
            sl=absValue;
        }else if( absValue > tl ){
            tl=absValue ;
        }
    }

    // product of largest value 

    cout << fl*sl*tl << endl ;

    return 0 ; 
}