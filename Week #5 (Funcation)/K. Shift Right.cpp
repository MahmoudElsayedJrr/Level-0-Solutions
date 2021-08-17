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

void Shift_Right(int a[], int n, int k)
{
    k = k % n;
 
    for(int i = 0; i < n; i++)
    {
       if(i < k)
           cout << a[n + i - k] << " ";
       else
           cout << (a[i - k]) << " ";
 
    }
    cout << "\n";
}
int main(){
     FASTIO() ;

    int n , k ;
    cin >> n >> k ;
    int arr[n];
    for(int i = 0; i < n; i++)
         cin >> arr[i];
 
Shift_Right(arr, n, k);

  return 0 ;
}
 