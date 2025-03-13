#include<iostream>
using namespace std ;


int f( int x  ){
       return -x * x + 100 * x ;
}
double recursivecall( double s , double e ) {
    double m1 = s + (e-s)/3 ;
    double m2 = e - (e-s)/3 ;

    // base case 
    if ( e - s <= 1e-6 ){
        return f ( (s+e)/2 );
    }
    // recursive case 
    if ( f(m1) > f(m2 )) {
        return recursivecall(s,m2);
    }else{
        // f(m1) < f(m2) 
        return recursivecall(m1,e);
    }

}
int main () {

    cout << recursivecall(0,100) << endl;

    return 0 ; 
}