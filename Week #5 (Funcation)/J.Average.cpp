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

double avr(double arr[], int n){
    double sum = 0.0;
    for (int i =0; i< n; i++){
        sum = sum + arr[i];
    }
    return sum/n; 
}
 
int main()
{
    lil_codi_vert();
    cout << fixed<< setprecision(6);
    int n;
    cin >> n;
    double arr[n];
    for (int i = 0; i< n; i++){
        cin >> arr[i];
    }
    cout << avr(arr, n);
    return 0;
}




 