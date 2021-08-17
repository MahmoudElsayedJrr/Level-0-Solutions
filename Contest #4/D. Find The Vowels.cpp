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

char vow[5] = {'a', 'e', 'i', 'o', 'u'};
    string s;
    cin >> s;
    int cntvo = 0;
    for(int i = 0; i< s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u')
            cntvo++;
    }
    if(!cntvo) cout << -1;
    else{
        for(int i = 0; i < 5; i++){
            int cnt = 0;
            for(int j = 0; j < s.size(); j++){
                if(vow[i] == s[j])
                    cnt++;
            }
            cout << vow[i] << " : " << cnt << "\n"; 
        }
    }

    // Anthor Solution

string s ;  cin >> s ;
int a = 0 , e = 0 , i = 0 , o = 0 , u = 0 ;
for(int k = 0 ; k < s.size() ; k++){
  if (s[k] == 'a') a++;
  if (s[k] == 'e') e++;
  if (s[k] == 'i') i++;
  if (s[k] == 'o') o++;
  if (s[k] == 'u') u++;
}
 
if(a == 0 && e == 0 && i == 0 && o == 0  && u == 0) cout << "-1";
else{
   cout << "a : " << a << "\n"
        << "e : " << e << "\n"
        << "i : " << i << "\n"
        << "o : " << o << "\n"
        << "u : " << u << "\n" ;
  }
 
  return 0 ;
}
 