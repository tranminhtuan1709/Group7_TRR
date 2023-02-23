#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n, key;
    int location = 0;
    cin >> key ;
    cin >> n ;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int i = 0, j = n-1;
    while(i < j){
        int l = i + (j-i)/3 ;
        int u = j - (j-i)/3 ;
        if( key > a[u]) i = u+1 ;
        else if( key > a[l]){
            i = l+1;
            j = u ;
        }
        else j = l ;

    }
    if(key == a[i]) location = i ;
    else if(key == a[j]) location = j;
    else location = 0 ;
    cout << location;
    return location;


}
