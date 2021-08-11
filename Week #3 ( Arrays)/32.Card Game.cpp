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

  int t, n, a, f, k1, k2;
	cin >> t;
	while(t--) {
		cin >> n >> k1 >> k2;
		for(int i = 1;i <= k1;i++) {
			cin >> a;
			if(a == n)
				f = 1;
		}
		for(int i = 1;i <= k2;i++) {
			cin >> a;
			if(a == n)
				f = -1;
		}
		if(f==1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
  


  return 0 ;
}    