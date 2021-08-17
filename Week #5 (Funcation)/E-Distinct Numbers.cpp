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

int count_Distinct (int arr[], int size ){
    int cnt = 0 ;
    sort(arr , arr + size) ;
     for(int i = 0 ; i < size ; i++){
         if (arr[i] != arr[i+1]) 
             cnt++ ; 
     }
     return cnt ;
}

int main(){
     FASTIO() ;

   int n ;  cin >> n ;
   int arr[n];
   for(int i = 0 ; i < n ; i++)
   cin >> arr[i];

   cout << count_Distinct(arr , n) ;

  return 0 ;
}
 