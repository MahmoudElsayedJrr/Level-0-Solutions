// Write by Mahmoud Aboelsoud

#include<iostream>
using namespace std ;


int main(){     
 
  int n , m ; 
   cin >> n >> m ;
   char v[n][m] ;
    for(int i = 0 ; i < n ; i++){
      for(int j = 0 ; j < m ; j++){
        char x ;  cin >> x ;
        if (x == '-') cout << "-";
        else {
           if ((i + j ) % 2 == 0)
               cout << "B";
           else
               cout << "W" ;    
        }
      }
      cout << "\n" ;
    }

    return 0 ;
}




