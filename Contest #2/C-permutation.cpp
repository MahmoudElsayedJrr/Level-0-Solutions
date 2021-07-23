#include<iostream>
using namespace std ;


int main(){     

   int n ; cin >> n ;
   if (n % 2 == 0){
      int j = 1 ;
       while(n > 0){
          cout << n << " " << j << " ";
          n-=2 ; j +=2;
       }
   }

   if (n % 2 != 0){
      int j = 2 ; 
       while(n > 1){
          cout << n << " " << j << " ";
          n-=2 ; j +=2;
       }
        cout << 1 ;
   }


    return 0 ;
}