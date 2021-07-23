#include<iostream>
using namespace std ;


int main(){     

       long long n ,  k ,  sum = 0 ; cin >> n >> k;

          for( int i = 0 ; i < n ; i++){
          long long z ; cin >> z;
           sum = ((sum % k) + (z % k)) % k;
          }
          cout << ( sum % k == 0 ? "YES" : "NO");



    return 0 ;
}