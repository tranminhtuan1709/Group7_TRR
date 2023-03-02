#include<bits/stdc++.h>
using namespace std ;
int x, y, g ;
void extended(int a, int b){
    if(b==0){
        x = 1 ;
        y = 0 ;
        g = a ;
    }
    else{
        extended(b, a%b);
        int temp ;
        temp = x ;
        x = y ;
        y = temp - (a/b)*y;
    }
}
void inverse(int a, int m){
    extended(a,m);
    if(g!= 1){
        cout <<"Khong ton tai nghich dao";
    }
    else{
        cout<<(x % m +m)%m <<endl ;
    }
}
int main(){
    int a, b;
    cin >> a>> b ;
    inverse()

}
