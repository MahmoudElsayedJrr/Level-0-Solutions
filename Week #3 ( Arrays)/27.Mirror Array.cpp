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
 
  int n , m ; cin >> n >> m ;
  int arr[n][m];

  for(int i = 0 ; i < n ; i++){
     for(int j = 0 ; j < n ; j++){
         cin >> arr[i][j];
     }
  }

  for(int i = 0 ; i < n ; i++){
      int start =  0 , end = m - 1 ;

      while(start < end){
          swap(arr[i][start] , arr[i][end]) ;
          start++;
          end-- ;
      }
  }

  for(int i = 0 ; i < n ; i++){
     for(int j = 0 ; j < n ; j++){
         cout << arr[i][j] << " ";
     }
  }

  return 0 ;
}