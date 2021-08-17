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


void shift(int arr[], int n){
    int i, cntzero = 0;
    for(int i = 0; i< n; i++){
        if(arr[i] == 0)
            cntzero++;
        else cout << arr[i] << " ";
    }
    
    while(cntzero--)
        cout << 0 << " ";
}

int main()
{
    lil_codi_vert();
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
    shift(arr, n);
    return 0;
}