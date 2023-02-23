using namespace std;
#define ll long long

int ternarySearch(int a[], int n, int x); //tra ve vi tri dau tien cua gia tri can tim trong day
void solve(){
   cout<<"Nhap so phan tu: "<<endl;
   int n;
   cin>>n;
   int a[n];
   cout<<"Nhap cac phan tu: "<<endl;
   for(int i = 0; i < n; i++){
      cin>>a[i];
   }
   sort(a, a + n);
   cout<<"Nhap gia tri can tim: "<<endl;
   int x; cin>>x;
   cout<<"Vi tri dau tien cua gia tri can tim trong day la: "<<ternarySearch(a, n , x) + 1 <<endl;
}

int main(){
   
   solve();
   return 0;
}


int ternarySearch(int a[],int n, int x) {
    int left = 0;
    int right = n-1 ;
    int result = -1; 

    while (left <= right) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        if (a[mid1] == x) {
            result = mid1; 
            right = mid1 - 1; //tim tiep ben trai
        }

        else if (a[mid2] == x) {
            result = mid2; 
            right = mid2 - 1; //tim tiep ben trai
        }
        else{
        
            if (x < a[mid1]) {
                right = mid1 - 1;
            } else if (x > a[mid2]) {
                left = mid2 + 1;
            } else {
                left = mid1 + 1;
                right = mid2 - 1;
            }
        }    
    }
    return result;
} 