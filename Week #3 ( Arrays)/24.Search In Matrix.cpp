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
 
 int a , b ;  cin >> a >> b ;
 bool flag = false ;
 ll arr[a * b];

 for(int i = 0 ; i < a * b ; i++)
    cin >> arr[i];

  int pos ;  cin >> pos ;

  for(int i = 0 ; i < a * b ; i++){
     if ( arr[i] == pos){
         flag = true;
        break ;
    }
     else
      flag = false ;
  }
  
     if (flag) cout <<"will not take number";
     else  cout << "will take number";


  return 0 ;
}