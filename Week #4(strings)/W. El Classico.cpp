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

   int n , r = 0 , b = 0;
   cin >> n ;
   string s ;
   cin >> s ;
   for(int i = 0 ; i < n ; i++){
       if (s[i] == 'B')  b++;
       else  r++;
   }
    if (r > b)
       cout << "Real Madrid";
    else if (b > r)
         cout << "Barcelona";
    else
         cout << "Tie";

  return 0 ;
}
