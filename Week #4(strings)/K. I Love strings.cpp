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
  while(tc -- ){
    string s ,  s2 ;  cin >> s >> s2 ;

    if (s.size() < s2.size() ) {
      for(int i = 0 ; i < s.size() ; i++)
        cout << s[i] << s2[i] ;

    for(int i = s.size() ; i < s2.size() ; i++)
         cout << s2[i] ;
    }

    else {

    for(int i = 0 ; i < s2.size() ; i++)
        cout <<s[i] << s2[i] ;
        for(int i = s2.size() ; i < s.size() ; i++)
            cout << s[i] ;
       }
          cout << "\n";
    
  }
 

  return 0 ;
}
