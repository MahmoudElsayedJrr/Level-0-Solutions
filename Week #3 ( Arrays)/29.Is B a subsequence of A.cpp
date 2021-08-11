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
  int arr[n], arr2[m];

for(int i = 0 ; i < n ; i++){
    cin >> arr[i];
}

for(int i = 0 ; i < m ; i++){
    cin >> arr2[i];
}

int k = 0 , cnt = 0 ;

// It's Called Two Pointer Technique

for(int i = 0 ; i < n ; i++){
    if (arr2[k] == arr[i]){
        cnt++;
        k++;
    }
}

if (cnt == m) cout <<"YES";
else cout << "NO";

  return 0 ;
}