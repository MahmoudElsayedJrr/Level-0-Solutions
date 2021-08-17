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

int maxi(int arr[], int n){
    int maxn = INT_MIN;
    for (int  i = 0; i <n; i++){
        maxn = max(maxn, arr[i]);
    }
    return maxn;
}
 
int mini(int arr[], int n){
    int minn = INT_MAX;
    for (int  i = 0; i <n; i++){
        minn = min(minn, arr[i]);
    }
    return minn;
}
 
int prime(int arr[], int n){
    int pri = 0;
    for(int i = 0; i< n; i++){
        bool b = true;
        if (arr[i] == 2){
            pri++;
        }else if(arr[i]== 1){
            b = false;
        }else{
            for (int j = 2; j <= sqrt(arr[i]); j++){
                if (arr[i] % j == 0){
                    b = false;
                    break;
                }
            }
            if (b){
                pri++;
            }
        }
    }
    return pri;
}
 
int plain(int arr[], int n){
    int dorm = 0;
    for(int i = 0; i< n; i++){
        string s = to_string(arr[i]);
        bool plaindrom = true;
        int l = 0, r = s.size()-1;
        while(l <= r){
            if(s[l] != s[r]){
                plaindrom = false;
                break;
            }
            l++, r--;
        }
        if(plaindrom) dorm++;
    }
    return dorm;
}


int divis(int arr[], int n){
    int tie = 0, maxnum = 0, maxtie = 0;
    for(int i = 0; i< n; i++){
        for (int j = 1; j <= arr[i]; j++){
            if (arr[i] % j == 0){
                tie++;
            }
        }
        if (tie > maxtie){
            maxnum = arr[i];
            maxtie = tie;
        }else if (tie == maxtie){
            if (arr[i] > maxnum){
                maxnum = arr[i];
            }
        }
        tie = 0;
    }
    return maxnum;
}
int main()
{
    lil_codi_vert();
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i< n; i++){
        cin>> arr[i];
    }
    cout << "The maximum number : "<<maxi(arr, n)<< endl;
    cout << "The minimum number : "<< mini(arr, n)<< endl;
    cout << "The number of prime numbers : "<< prime(arr, n)<< endl;
    cout << "The number of palindrome numbers : "<< plain(arr, n)<<endl;
    cout << "The number that has the maximum number of divisors : "<<divis(arr, n);   
    return 0;
}