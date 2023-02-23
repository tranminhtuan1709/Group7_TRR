#include<bits/stdc++.h>
using namespace std;
#define ll long long

int ternarysearch(int a[], int n, int x);
void solve(){
   int n;
   cin>>n;
   int a[n];
   for(int i = 0; i < n; i++){
      cin>>a[i];
   }
   sort(a, a + n);
   int x; cin>>x;
   cout<<ternarysearch(a, n , x) + 1 <<endl;
}

int main(){

   int test; 
   cin>>test;
   
   while(test--){
      solve();
   }
   
   return 0;
}
int ternarysearch(int a[], int n, int x){
   
   int l = 0;
   int r = n-1;
   while(r > l){
      int mid1 = l + (r - l)/3;
      int mid2 = r - (r - l)/3;
      if(x == a[mid1]) return mid1;
      if(x == a[mid2]) return mid2;
      
      if(x < a[mid1]){
         r = mid1 - 1;
      }
      else if(x > a[mid2]){
         l = mid2 + 1;
      }
      else{
         l = mid1 + 1;
         r = mid2 - 1;
      }
   }
   return -1;
}
