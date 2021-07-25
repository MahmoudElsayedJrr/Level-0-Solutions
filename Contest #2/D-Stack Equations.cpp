
// write by Hoda Kamal


#include<iostream>
using namespace std ;


int main(){     

   char check = '.';
   int res ;
        while(true && check != '=')
        {
            char c ,cc; int n , m ;
            cin >> n >> c >> m >> cc;
            if(c == '+')n+=m ;
            if(c == '-')n-=m;
            if(c == '*')n*=m;
            if(check == '.')res = n;
            if(check == '+')res += n;
            if(check == '-')res -= n;
            if(check == '*')res *= n;
            check = cc;
        }
        cout << res;



    return 0 ;
}
