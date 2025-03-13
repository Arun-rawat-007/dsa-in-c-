#include<iostream>
#include<iomanip>

using namespace std ;

int f( int x ){

    return -x * x + 100 * x ;

}
double findpeakiterative( double s, double e ){
    while ( e-s > 1e-6 ) {

        double m1 = s + (e-s)/3;
        double m2 = e - (e-s)/3 ;

        if ( f(m1) > f(m2) ){
            
            e = m2 ;

        }else {
            s = m1 ;
        }
    }

    // e - s <= f(m2)
    return f((s+e)/2 ) ; // you can also return the e ..
}
int main () {
    
    cout << setprecision(20) << fixed ;
    cout << findpeakiterative(0,100) ;


    return 0;
}