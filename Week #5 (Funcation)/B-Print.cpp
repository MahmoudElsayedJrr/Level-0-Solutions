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

 void Print(int a ){
     for(int i = 1 ; i < a  ; i++)
          cout << i << " " ;

     cout << a ;
      
 }

int main(){
     FASTIO() ;
   
  int n ;  cin >> n ;
  Print(n);
    
  return 0 ;
}
 