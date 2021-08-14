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

  string s ;   cin >> s ;
 ll e = 0 , g = 0 , y = 0 , p = 0 , t = 0 ;

 transform(s.begin() , s.end() , s.begin() , :: tolower) ; // make all charcters in string small letter
   for(int i = 0 ; i < s.size() ; i++){
     if (s[i] == 'e')   e++;
     else if (s[i] == 'g') g++;
     else  if (s[i] == 'y') y++;
     else  if (s[i] == 'p') p++;
     else if (s[i] == 't') t++;
   }
   
   cout << min({e , g , y , p , t});
 

  return 0 ;
}
