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

bool Wonderful (long long x ){
      long long n = 0 , z = x ;
      bool flag = true ;
 
      while(x){
            x/=2;
            n++;
      }
 
      long long arr[n], arr2[n];
     for(int i = 0 , j = n-1 ; i < n ; i++ , j--){
            arr[i] = z % 2 ;
            arr2[j] = z % 2 ;
            z /= 2 ;
        }
 
        for(int i = 0 ; i < n ; i++){
            if(arr[i] != arr2[i]){
                   flag = false;
                  break ;
            }
 
        }
            return flag ;
 
}



int main(){
     FASTIO() ;

     ll x ;  cin >> x;
    if (x % 2 == 0 )
         cout << "NO";
    else{
        
     if ( Wonderful(x) )
         cout << "YES";
     else
         cout << "NO";
  }


  return 0 ;
}
 