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
     bool flag = false ;
     string s ; cin >> s ;
     for(int i = 0 ; i < s.size() ; i++){
         if ((s[i] == '1' && s[i+1] == '0' && s[i+2] == '1') || (s[i] == '0' &&s[i+1] == '1' &&s[i+2] == '0'))
             flag = true ;
     }
     if (flag == true) 
        cout << "Good\n";
     else
        cout << "Bad\n";
 }

  return 0 ;
}
