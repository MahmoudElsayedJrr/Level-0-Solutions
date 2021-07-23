#include<iostream>
using namespace std ;


int main(){     

       long long n , b , d  , cnt = 0 , cnt2 = 0  ; 
        cin >> n >> b >> d;

   for(int i = 0; i < n ; i++){
       int x ; 
        cin >> x ;

       if ( x > b ) 
           continue ;
      
      if (cnt + x > d) {
         cnt2++ ; 
         cnt = 0 ;
      }
      else 
      cnt += x ;
   }
    cout << cnt2 ;

    return 0 ;
}