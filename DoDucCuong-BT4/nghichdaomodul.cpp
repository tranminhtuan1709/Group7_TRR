#include <iostream>
using namespace std;

int gcd, x, y;
void extEuclid(int a, int b){
    if (b == 0){
        x = 1;
        y = 0;
        gcd = a;
    }else{
        extEuclid(b, a % b);
        int temp = x;
        x = y;
        y = temp -(a/b)*y;
    }
}
void inverse(int a, int b){
    extEuclid(a,b);
    if (gcd != 1){
        cout << "Khong ton tai";
    }else{
        cout << (x%b + b)%b; //tim dong du > 0, < b cua x
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    inverse(a,b);
}