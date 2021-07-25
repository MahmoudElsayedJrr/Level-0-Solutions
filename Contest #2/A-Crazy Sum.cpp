#include<iostream>
using namespace std ;


int main(){     

       long long n ,  k ,  sum = 0 ;
        cin >> n >> k;

          for( int i = 0 ; i < n ; i++){
          long long z ; 
           cin >> z;
           sum = ((sum % k) + (z % k)) % k;
          }
          if (sum % k == 0) cout << "YES";
          else cout << "NO";



    return 0 ;
}
