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
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll sum = 0,x;
        for(int i = 0; i< n && cin >> x; i++){
            sum += x;
        }
        if(sum < n)
            cout << 1 << "\n";
        else cout << abs(n- sum) << "\n";
    }
    return 0;
}
