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
 
 int tc;  cin >> tc ;
 while(tc--){

        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        int ans = abs(x1 - x2) + abs(y1 - y2);

        if (x1 == x2 && x1 == x3 && min(y1, y2) <= y3 && max(y1, y2) >= y3) {
            ans += 2;
        }

        if (y1 == y2 && y1 == y3 && min(x1, x2) <= x3 && max(x1, x2) >= x3) {
            ans += 2;
        }
        
        cout << ans << "\n";
 }


  return 0 ;
}