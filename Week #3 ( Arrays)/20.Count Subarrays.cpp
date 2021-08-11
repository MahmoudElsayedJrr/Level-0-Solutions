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

 int tt ; cin >> tt ;
 while(tt--){

   int n ;  cin >> n ;
   int arr[n];
   for(int i = 0 ; i < n ; i++)
    cin >> arr[i];

 int count = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
        if (arr[j] > arr[j-1])
          count++;
        else
          break;
      }
    }
    cout << count + n << "\n";
 }

  return 0 ;
}