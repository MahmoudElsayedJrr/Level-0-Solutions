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

  string s = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
  string s2 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
 
  ll n;  string ss;
  cin>> n >> ss ;

  if(n == 1){
    for(int i = 0 ; i < ss.size() ; i++)
       cout<< s[ s2.find (ss[i])];
         return 0;
  }

for(int i=0 ;i < ss.size();i++)
    cout<<s2[s.find(ss[i])];
 

  return 0 ;
}
