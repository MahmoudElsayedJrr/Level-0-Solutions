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

 void repeat(int a , char c){
 
    for( int i = 0 ; i < a ; i++){
      cout << c <<" ";
    }
       cout << "\n";
 }

int main(){
     FASTIO() ; 
   
   int tc ;  cin >> tc ;
   while(tc--){
       int a ; char c;
       cin >> a >> c ;
       repeat(a , c);
   }

    
  return 0 ;
}
 