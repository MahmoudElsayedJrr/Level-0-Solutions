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

//  Another  Solution If u understand first solution
//------------------------------------------------------

int main()
{
    lil_codi_vert();
    int n;
    cin >> n;
    for(int i = 0; i< n ; i++){
        if(!(i%2)){
            cout << n - i << " ";
        }else{
            if(n%2 == 0)
                cout << i << " ";
            else
                cout << i+1 << " ";
        }
    }
    return 0;
}


