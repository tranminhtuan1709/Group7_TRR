#include <iostream>
using namespace std;

int gcd(int a, int m, int &x, int &y){
    if(m == 0){
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int tmp = gcd(m, a%m, x1, y1);
    x = y1;
    y = x1 - y1 * (a/m);
    return tmp;
}
int main(){
    cout<<"Chuong trinh tim nghich dao cua a theo modulo m"<<endl;
    int a, m;
    cout<<"Nhap hai so a va m: "<<endl;
    cin>>a>>m;
    int x,y;
    int ucln = gcd(a,m,x,y);
    if(ucln != 1){
        cout<<"Khong ton tai nghich dao cua a theo modulo m"<<endl;
    } else{
        if(x<0){
            x = ((x%m)+ m)%m;
        }
        cout<<"Nghich dao cua a theo modulo m la: "<<x;
    }
    return 0;
}
