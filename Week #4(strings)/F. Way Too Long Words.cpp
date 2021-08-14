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
      string s ;  cin >> s ;
      if (s.size() <= 10) 
          cout << s << "\n";
      else
          cout << s[0] << s.size() - 2 << s[s.size()-1] << "\n";
  }
  
  return 0 ;
}
