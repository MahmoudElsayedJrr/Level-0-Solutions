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
 
int tc ;  cin >> tc ;
int Min = INT_MAX ;
while(tc--){
  int a , b ;  
  cin >> a>> b ;
  Min = min(Min , b / a) ;
}
cout << Min ;
 
 
  return 0 ;
}
 