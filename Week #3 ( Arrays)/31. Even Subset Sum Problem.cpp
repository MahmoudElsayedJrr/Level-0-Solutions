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
 
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int flag = 0;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        if (n == 1 && arr[n-1] % 2 != 0)
        {
            cout << -1 << endl;
            flag = 2;
        }

        if (flag != 2)
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    flag = 1;
                    cout << 1 << endl;
                    cout << i + 1 << endl;
                    break;
                }
            }
        }

        if(flag == 0){
            cout << 2 << "\n";
            cout << 1 << " " << 2 <<"\n";
        }
    }
 
  
    return 0 ;
}