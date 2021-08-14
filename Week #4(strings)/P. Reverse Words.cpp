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
  bool flag= true ;
  while(cin >> s){
    if ( flag == false)
        cout << " ";

      flag = false ;
 
        reverse(s.begin() , s.end());
        cout << s ;
 
}
 

  return 0 ;
}
