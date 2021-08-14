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
while(tc--){
  string s ; cin >> s ;
  char Max = s[0] ;
  for(int i = 0 ; i < s.size() ; i++){
    Max = max(Max , s[i]);
  }
   cout << Max << "\n";
}
 

  return 0 ;
}
