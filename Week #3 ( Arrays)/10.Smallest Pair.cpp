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
 FASTIO ();
 
  int tt ; cin >> tt ;
  while(tt--){
   int n ; cin >> n ;
   ll arr[n];
  int sum = 0 , z ;
   for(int i = 0 ; i < n ; i++)
     cin >> arr[i];

    z = arr[0] + arr[1] + 2 - 1  ;

     for(int i = 0 ; i < n ; i++){
        for(int j = 0  ; j <  n ; j++){
           if ( i == j )
              continue ;
           else{
            sum =  arr[i] + arr[j] + abs( i - j) ;
                if (sum < z)
                     z = sum ;
           }
       }
 
    }
   
   cout << z << "\n";
   sum = 0 ;

  }
  
 
return 0;
}
 