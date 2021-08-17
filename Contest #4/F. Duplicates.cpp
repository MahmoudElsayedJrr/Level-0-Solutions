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

ll n ;  cin >> n ;
ll arr[n] ;
for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
sort(arr , arr+n) ;
bool flag = false ;
for(int i = 0 ; i < n ; i++){
  if (arr[i] == arr[i+1]){
    cout << arr[i] << " ";
     i++ ;
     flag = true ;

    while(arr[i] == arr[i+1]) {
      i++ ;
    }
 
  }
}
if (flag == false) cout << "-1" ;

  return 0 ;
}
 