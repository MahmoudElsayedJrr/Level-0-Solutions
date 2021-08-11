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
  
int n , sum = 0;
cin >> n ;
bool flag = true ;

ll arr[n] ;
for(int i = 0 ; i < n ; i++){
    cin >> arr[i];
    if (arr[i] % 2 != 0) sum++;
}

if(sum > 0){
    cout << 0 ;
    return 0 ;
}

else {
  while(flag == true){
     for(int i = 0 ; i < n ; i ++){
         arr[i] = arr[i] / 2 ;
         if (arr[i] % 2 != 0)  flag = false ;
     }
     sum++ ;
 }
    cout << sum ;

}



  return 0 ;
}