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

int Equation (int base , int ex){
    int sum = 0 ;
    for(int i = 2 ; i <= ex ; i+=2){
        sum += pow(base , i); 
    }
    return sum ;
}

int main(){
     FASTIO() ; 
   
   int n , m ; cin >> n >> m;
   cout << Equation(n ,m) ;
  
    
  return 0 ;
}
 