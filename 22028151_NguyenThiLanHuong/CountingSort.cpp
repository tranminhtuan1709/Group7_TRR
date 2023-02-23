#include<bits/stdc++.h>
using namespace std ;


int main(){
    int n ;
    cin >> n ;
    int cnt[1000]={0};
    int a[n], b[n];
    for(int i = 0; i <n; i++){
        cin >> a[i];
    }
     for(int i = 0; i <n; i++){
        cnt[a[i]]++;
    }
    for(int i = 1; i < 1000; i++){
        cnt[i] += cnt[i-1];
    }
    for(int i = 0; i < n; i++){
        b[cnt[a[i]]-1] = a[i];
        cnt[a[i]]-- ;
    }
    for(int i = 0; i < n; i++){
        cout << b[i]<<" " ;
    }

}
