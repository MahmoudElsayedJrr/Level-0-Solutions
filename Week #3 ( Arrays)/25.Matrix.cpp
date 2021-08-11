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
 
 int n , sum = 0 , sum2 = 0;
 int arr[n][n];

 for(int i = 0 ; i < n ; i++){
     for(int j = 0 ; j < n ; j++){
         cin >> arr[i][j];

         if (i == j) 
          sum += arr[i][j];

         if (i == n - j - 1)
          sum2 += arr[i][j]; 

     }
 }

  cout << abs(sum - sum2) ;

  return 0 ;
}