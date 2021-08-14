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

   string s , s2 = "hello" ;
   cin >> s ;
   int j = 0  ;
 
    for (int i = 0 ; i < s.size() ; i++) {
        if (s2[j] == s[i])
             j++;
   }
 
    if ( j == s2.size())
         cout << "YES";
    else
         cout << "NO";

  return 0 ;
}
