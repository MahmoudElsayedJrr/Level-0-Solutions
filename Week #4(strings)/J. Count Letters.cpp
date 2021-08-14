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
  string str;  cin >> str ;
  sort(str.begin() , str.end());
   int freq[26] = { 0 };

  for (int i = 0; i < str.size(); i++) {
    freq[str[i] - 'a']++;
  }
  for (int i = 0; i < str.size(); i++) {
     if (freq[str[i] - 'a'] != 0) {
       cout << str[i] << " : " << freq[str[i] - 'a'] << "\n";
       freq[str[i] - 'a'] = 0;
     }
   }

   // If understand Frequency array 
   //CLICK ON  https://www.geeksforgeeks.org/counting-frequencies-of-array-elements/
 

  return 0 ;
}
