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

  string s="abcdefghijklmnopqrstuvwxyz";
  string s2="";
  int n , k; cin >> n >> k;
  for(int i = 0 ; i < n ; i++){
  	s2 += s[i%k];
  }
 cout << s2 << "\n";

  return 0 ;
}
