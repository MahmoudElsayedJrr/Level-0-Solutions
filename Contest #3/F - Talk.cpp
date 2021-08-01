// Write by Mahmoud Elsayed

#include<iostream>
using namespace std ;


int main(){     
 
  long long  p, n, Min = INT_MAX;
  cin >> p >> n;
  for(int i = 0; i < n; i++){
      int m ; 
      cin>> m;
      if(Min > abs( p - m))
        Min = abs( p - m );
  }
  cout << Min;

    return 0 ;
}
