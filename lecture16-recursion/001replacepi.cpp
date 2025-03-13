#include<iostream>
using namespace std ;

void f( char inp[] , int i ){

    // base case 
    if( inp[i] == '\0' ){
        return ;
    }

    // recursive case 

    // 1) what you want to do 
    if ( inp[i] == 'p' and inp[i+1] == 'i' ){
        // replace pi with 3.14
        // a) shift number 2 steps 
        int j = i+2;

        while( inp[j] !='\0' ){
            j++;
        }
        while( j >= i+2 ){
            inp[j+2] = inp[j];            
            j--;
        }

        // b) put the calue of 3.14
        inp[i] = '3';
        inp[i+1] = '.';
        inp[i+2] = '1';
        inp[i+3] = '4';

        // ask your frnd to replace all the element from i+4 to n-1 
        f( inp,i+4) ;

    }else {

        f(inp,i+1);

    }


}
int main () {

    char inp[20];
    cin >> inp;

    f(inp,0);

    cout << inp << endl;

    return 0; 
}