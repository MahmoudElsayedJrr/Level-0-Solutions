// Write by Mahmoud Elsayed

#include<iostream>
using namespace std ;


int main(){     
 
   long long m , b , z , sum = 0 , sum2 = 0 ; 
   cin >> m >> b >> z ;
   int arr[m] , arr2[b];

   for(int i = 0 ; i < m ; i++){
     cin >> arr[i] ;
     if (arr[i] != z) 
        sum += arr[i] ;
   }
 
   for(int i = 0 ; i < b ; i++){
     cin >> arr2[i] ;
     if (arr2[i] != z) 
          sum2 += arr2[i] ;
   }
 
   if ( sum > sum2) cout << "Midoriya";
   else if ( sum < sum2) cout << "Bakugou";
   else cout << "Stay Friends" ;

    return 0 ;
}
