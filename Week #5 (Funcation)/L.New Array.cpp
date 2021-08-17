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


void conn(int a[], int b[], int n){
    int c[(n*2)];
    for(int i= 0, j = n; i < n; i++, j++){
        c[i] = b[i];
        c[j] = a[i];
    }
    for (int i = 0; i< 2*n; i++){
        cout << c[i]<< " ";
    }
}

int main()
{
    lil_codi_vert();
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i< n; i++){
        cin>>a[i];
    }
    for (int i = 0; i< n; i++){
        cin>>b[i];
    }
    conn(a,b,n);
    return 0;
}