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
    int n; cin >> n;
    ll mx = INT_MIN, mn = INT_MAX, posmx = 0, posmn = 0;
    ll arr[n];
    for(int i = 0; i< n && cin >> arr[i]; i++){
        if(arr[i] > mx){
            mx = arr[i];
            posmx = i;
        }else if(arr[i] < mn){
            mn = arr[i];
            posmn = i;
        }
    }
    swap(arr[posmn], arr[posmx]);
    for(int i = 0; i< n; i++)
        cout << arr[i] << " ";
    return 0;
}
