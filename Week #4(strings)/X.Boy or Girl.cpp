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

  int n , sum = 0 ;
  string s ;  cin >> s ;
  sort (s.begin() , s.end()) ;
 
  for (int i = 0 ; i < s.length() ; i++){
        if (s[i] != s[i+1])
            sum ++;
    }
       if (sum % 2 == 0)
            cout << "CHAT WITH HER!";
        else
            cout << "IGNORE HIM!" ; 
 

  return 0 ;
}
