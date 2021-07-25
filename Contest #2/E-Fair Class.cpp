#include<iostream>
using namespace std ;


int main(){     

 int b , g ; cin >> b >> g ;
   if ( b > g){
      while(g--){
         cout << "BG";
         b--;
      }
   }
   else {
      while(b--){
         cout << "GB";
         g--;
      }
   }
 
      for(int i = 0 ; i < b ; i++) cout << "B";
      for(int i = 0 ; i < g ; i++) cout << "G";
 
 //  why Two Looops ?
 //  because there are at least 1 loop g = 0 or b = 0 --> it's not print 


    return 0 ;
}
