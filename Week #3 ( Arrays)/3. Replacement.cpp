#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define fixed(n) cout << fixed << setprecision(n);
#define mod 1000000007
#define cin(v) for (auto&i:v) cin >> i;
 
 
using namespace std;
 
 
void lil_codi_vert(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    #endif
}
 
 
int main()
{
    lil_codi_vert();
    ll n; cin >> n;
    ll arr[n];
    for(int i = 0; i< n && cin >> arr[i]; i++){
        if(arr[i] > 0)
            arr[i] = 1;
        else if(arr[i] < 0)
            arr[i] = 2; 
    }
    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
