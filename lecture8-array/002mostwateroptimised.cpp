#include<iostream>
#include<algorithm>

using namespace std ;

int mostwateroptimised( int h[], int n ) {

    int maxsofar = 0 ;
    int i = 0 ; 
    int j = n-1;

    while( i < j ){

        int width_ij = j - i ;
        int height_ij = min(h[i],h[j]);
        int area = width_ij*height_ij;

        maxsofar = max(maxsofar,area) ;

        if(h[i] < h[j] ){
            i++;
        }else {
            j--;
        }

    }

    return maxsofar ;
}

int main () {

    int h[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(h)/sizeof(int) ;

    cout << mostwateroptimised(h,n) << endl ;

    return 0 ;
}