#include<iostream>

using namespace std ;


int main(){

    int a , b , c ;
    cin >> a >> b >> c ;

    if (min({a , b , c}) == a)
        cout << "John";

    else if (min({a , b , c}) == b)
        cout << "Mike";

    else
        cout << "Roman";


    return 0 ;
}
