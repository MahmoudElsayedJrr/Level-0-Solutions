// Write by Mahmoud Aboelsoud

#include<iostream>
using namespace std ;


int main(){     
 
  long long n ,c;
  cin >> n >> c;
  long long arr[n] ;

  for(int i = 0 ; i < n ; i++)
      cin >> arr[i] ;

    int cnt = 1;
    for(int i = 1; i< n; i++){

        if(arr[i] - arr[i-1] <= c) 
           cnt++;
           
        else cnt = 1;
    }
    cout << cnt;

    return 0 ;
}
