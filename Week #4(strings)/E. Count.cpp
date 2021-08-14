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
  
 string s ;  cin >> s ;
 ll sum = 0 ;
 for(int i = 0 ; i < s.size() ; i++){
     sum += s[i] + '0' ;
 }
 cout << sum ;

  return 0 ;
}
