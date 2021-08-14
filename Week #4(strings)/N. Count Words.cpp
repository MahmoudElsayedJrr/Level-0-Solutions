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

   string s ;
   ll sum = 0 ;
 
  getline(cin , s) ;
  s += ' ';
 
  for (int i = 1 ; i < s.size() ; i++) {
      if ( isalpha(s[i-1]) && (s[i] == ' ' ||s[i] == '!' ||s[i] == '.' ||s[i] == ',' ||s[i] == '?') )
            sum ++ ;
 }
 
  cout << sum ;

  return 0 ;
}
