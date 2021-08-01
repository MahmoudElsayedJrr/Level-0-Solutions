// Write by Ahmed Hossam 

#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std ;


bool Poweroftwo(long long  n)      /*If u understand That  : this is funcation written to check The Number power of 2 or not */        
{ 
   if(n==0)
   return false;
   else
   return (ceil(log2(n)) == floor(log2(n)));  
}


int main(){     
 
    int n;
    cin >> n;
    long long arr[n];

    for(int i = 0 ; i < n ; i++)
    cin >> arr[i] ;

    sort(arr , arr + n);

    int Max = INT_MIN , z = 0 ;
    bool flag = false ;

    for(int i = 0 ; i < n ; i++){
        if (Poweroftwo(arr[i])){       // if arr[i] power of 2 

            flag = true ;

            if ( arr[i] > Max){
                Max = arr[i] ;
                z = log2(arr[i]) ;
            }
        }
    }

    if (flag == true)
        cout << Max << " " << z ;
    else 
       cout << "Hatem Will Stay" ;   

    return 0 ;
}
