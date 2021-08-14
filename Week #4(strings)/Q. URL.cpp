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

    string s,val="";
    cin>>s;
    
    int l=s.length();
    
    int un=s.find("username");
    int pwd=s.find("pwd");
    int prfl=s.find("profile");
    int rl=s.find("role");
    int key=s.find("key");
    
    cout << "username: "<< s.substr(un+9,(pwd-1)-(un+9)) <<endl;
    cout << "pwd: "<< s.substr(pwd+4,(prfl-1)-(pwd+4)) <<endl;
    cout << "profile: "<< s.substr(prfl+8,(rl-1)-(prfl+8)) <<endl;
    cout << "role: "<< s.substr(rl+5,(key-1)-(rl+5)) <<endl;
    cout << "key: "<< s.substr(key+4,(l-(key+4))) <<endl;

    // For learn substr() Funcation
    // CLICK ON  https://www.geeksforgeeks.org/substring-in-cpp/

  return 0 ;
}
