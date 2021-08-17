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

void get_max_and_min(int arr[] , int size){
    int Min = INT_MAX , Max = 0 ;

    for(int i = 0 ; i < size ; i++){
        Max = max(Max , arr[i]);
        Min = min(Min , arr[i]);
    }

    cout << Min << " " << Max ;
}

int main(){
     FASTIO() ; 
   
   int n ;  cin >> n ;
   int arr[n];
   for(int i = 0 ; i < n ; i++)
   cin >> arr[i];

   get_max_and_min(arr , n) ;

    
  return 0 ;
}
 