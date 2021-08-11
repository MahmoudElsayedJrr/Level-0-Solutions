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
    int a, b; 
    cin >> a >> b;
    string s;
    cin >> s;
    if(s[a] != '-' || s.size() != a+b+1)
        return cout << "No", 0;
    else{
        for(int i = 0; i< a+b+1; i++){
            if(i == a)
                continue;
            if(s[i] < '0' || s[i] > '9')
                return cout << "No", 0;
        }
    } 
    cout << "Yes"; 
    return 0;
}
