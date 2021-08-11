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
 
   int n ; cin >> n ;
   long long arr[n];
 
   for(int i = 0 ; i < n ; i++)
     cin >> arr[i];
 
   for(int i = 0 ; i < n / 2 ; i++){
      if (arr[i] != arr[n-i-1]){
         cout << "NO\n";
         return 0 ;
      }                   
   }  
   cout << "YES\n";
    
    return 0 ;
}