#include<iostream>

using namespace std ;


int main(){

    long long r , b , w ;
    cin >> r >> b >> w ;
    long long x = min({r , b , w});
    cout <<  x << "\n";
    cout << r - x << " " << b - x << " " << w - x ;


    return 0 ;
}
