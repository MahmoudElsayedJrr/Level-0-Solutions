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
    int n , x , y;
    cin >> n>> x >> y;
    long arr[n][n];
    for (int i = 0; i< n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        swap(arr[x-1][i], arr[y-1][i]);
    }
    for (int i = 0; i < n; i++){
        swap(arr[i][x-1], arr[i][y-1]);
    }
    for (int i = 0; i< n; i++){
        for (int j = 0; j < n; j++){
            cout<< arr[i][j]<< " ";
        }
        cout << endl;
    }
    return 0;
}




 