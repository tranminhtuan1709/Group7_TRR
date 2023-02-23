#include <bits/stdc++.h>
using namespace std;


void counting_sort(int a[], int n)
{

    int output[n];
    int MAX = a[0];
    int MIN = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] > MAX)
            MAX = a[i];
        else if(a[i] < MIN)
            MIN = a[i];
    }

    int k = MAX - MIN + 1; //kich co input

    int count_arr[k];
    for(int i = 0; i < k; i++){
        count_arr[i] = 0;
    }

    for(int i = 0; i < n; i++)
        count_arr[a[i] - MIN]++; //dem so lan xuat hien cua cac gia tri trong day
    for(int i = 1; i < k; i++)
        count_arr[i] += count_arr[i - 1];  //tim upperbound (vi tri gia tri stop xuat hien) cua cac gia tri trong mang sap xep tang dan 



    for(int i = 0; i < n; i++)
    {
        output[count_arr[a[i] - MIN] - 1] = a[i];
        count_arr[a[i] - MIN]--;
    }


    for(int i = 0; i < n; i++)
        a[i] = output[i];

}



int main()
{
    cout<<"Nhap so phan tu: "<<endl;
    int n;
    cin>>n;
    int a[n];
    cout<<"Nhap day so: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<"Array: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout<<endl;

    counting_sort(a, n);
    cout << "Sorted Array : ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}
