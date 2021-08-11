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
  
 int tt; cin >> tt ;
    while(tt--){
      int n , cnto = 0 , cnte = 0; cin >> n ;
      int arr[2*n];  

      for(int i = 0 ; i < 2*n ; i++)
         cin >> arr[i];

        for(int i = 0 ; i < 2*n ; i++){
            if (arr[i]% 2 == 1) cnto++;
            else cnte++;
        }
         if (cnto == cnte) cout << "Yes\n";
         else cout << "No\n";
    }
 


  return 0 ;
}