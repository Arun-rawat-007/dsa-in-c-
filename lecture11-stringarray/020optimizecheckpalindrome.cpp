#include<iostream>
#include<string>
// hard question 
// time compexity = O(n^2) quadratic 
//space complexity = O(1) constant
using namespace std ;

int  countpalindromesubstring( string s ){
    int n = s.size();
    int cnt = 0 ; // to track the no of count of palindormin in given substring 

    // 1) count the no of odd palindromioc substring in give string 
        for ( int i = 0 ; i < n ; i ++ ){

            int j = 0 ;
            while ( i-j>=0 and i+j<n and s[i-j] == s[i+j ] ){
               cnt++;
               j++; 
            }            

        }
    //2) count the no of even palindromic substring in given string 
        for ( double i = 0.5 ; i < n ; i++ ){
            double j = 0.5 ;
            while ( i - j >=0 and i + j < n and s[static_cast<int>(i-j)] == s[static_cast<int>(i+j)] ){
                cnt++;
                j++;
            }
        }
    return cnt ;
}

int main ( ) {

    string s = "abaaba";

    cout << countpalindromesubstring(s) << endl;


    return 0 ; 
}