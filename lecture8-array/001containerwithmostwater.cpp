#include<iostream>
#include<algorithm>

using namespace std ;

int mostwater(int h[] , int n ) {
    
    int maxsofar = 0 ;

    for(int i = 0 ; i<=n-2; i++ ){

        for (int j = i+1 ; j<= n-1; j++ ){
            
            int width_ij = j-1;
            int height_ij = min(h[i],h[j]);
            int area = width_ij*height_ij;

            maxsofar = max(maxsofar,area) ;

        }
    }
    
    return maxsofar ;

}

int main ( ) {

    int h[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(h)/sizeof(int) ;

    cout << mostwater(h,n) << endl;


    return 0 ; 
}