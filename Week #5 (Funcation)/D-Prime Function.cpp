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

bool is_prime( int n ){
   bool isPrime = true;
    if (n == 0 || n == 1) {
        isPrime = false;
    }

    else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    return isPrime ;
}

int main(){
     FASTIO() ;

 int tc ;  cin >> tc ;
 while(tc--){
     int n ;  cin >> n ;
     if (is_prime(n)) cout << "YES\n";
     else cout << "NO\n";
 }


  return 0 ;
}
 