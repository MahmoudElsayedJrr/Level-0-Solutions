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

 string s , s2 = "" ;
 cin >> s ;
 int ans = 0 , r = 0 , l = 0;
 
 for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'R'){
      r++;
      s2 += 'R';
  }
    else if (s[i] = 'L'){
      l++;
     s2 += 'L';
  }
 
  if (r == l){
       ans++;
      s2 += "\n";
   }
}
  cout << ans << "\n" ;
  cout << s2 ;

  return 0 ;
}
