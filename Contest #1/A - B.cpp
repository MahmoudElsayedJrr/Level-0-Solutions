#include<iostream>
using namespace std ;

int main(){

    long long n , m ;
    cin >> n >> m ;
    long long res = n - m ;
    if (res % 10 == 9 )
        cout << res - 1 ;
    else
        cout << res + 1


    return 0 ;
}