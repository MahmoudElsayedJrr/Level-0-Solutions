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
  
  int n , sum = 0 ;  cin >> n ;
  ll arr[n] ;
  
  for(int i = 0 ; i < n ; i++)
  cin >> arr[i];

  sort(arr , arr+n) ;

  for(int i = 0 ; i < n ; i++){
      if (arr[i] == arr[i+1]) sum++;
      else  break ;
  }

  if (sum % 2 == 1) cout << "Lucky";
  else cout << "Unlucky";


  return 0 ;
}