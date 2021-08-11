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
  char arr[n+1][m+1];

  for(int i = 1 ; i <= n ; i++){
     for(int j = 1 ; j <= m ; j++){
         cin >> arr[i][j];
     }
  }

 int x , y ;  cin >> x >> y ;

 for(int i = x-1 ; i <= x+1 ; i++){
     for(int j = y - 1 ; j <= y +1 ; j++){
        if ( i == x && j == y) continue;
             if ( arr[i][j] == '.'){
                 cout << "no";
                 return 0 ;
            }
 
         }
    }
     cout << "yes";
 

  return 0 ;
}