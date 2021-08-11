#include<bits/stdc++.h>

typedef long long ll ;
typedef unsigned long long ull ;
using namespace std ;

void FASTIO (){
   std::ios_base::sync_with_stdio(0);
   cin.tie(NULL); cout.tie(NULL);
   #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
   #endif
}


int main(){
  FASTIO() ;
  int n , sum = 0 , sum2 = 0 , product_1 = 0 , product_2 = 0 ;
  cin >> n ;
  int arr[n] , arr2[n];

  for(int i = 0 ; i < n ; i++){
    cin >> arr[i];
    sum += arr[i];
    product_1 *= arr[i] ;
}

for(int i = 0 ; i < n ; i++){
    cin >> arr2[i];
    sum2 += arr2[i];
    product_2 *= arr2[i] ;
}

if (sum == sum2 && product_1 == product_2)
cout << "yes";
else cout << "no";

  return 0 ;
}