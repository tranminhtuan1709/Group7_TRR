#include <iostream>
using namespace std;


int ternatySearch(int arr[], int n, int key, int left, int right){
    int mid1 = left + (right - left)/3;
    int mid2 = right - (right - left)/3;
    while (right >= left){
        if (arr[mid1] == key){
            return mid1;
        }else if(arr[mid2] == key){
            return mid2;
        }else if(arr[mid1] > key){
            return ternatySearch(arr, n, key, left, mid1 - 1);
        }else if(arr[mid2] < key){
            return ternatySearch(arr, n, key, mid2 + 1, right);
        }else{
            return ternatySearch(arr, n, key, mid1 + 1, mid2 - 1);
        }
    }
    if (arr[left] == key){
        return left;
    }else{
        return - 1;
    }
}
int main()
{
    int n, key;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cin >> key;
    cout << ternatySearch(arr, n, key, 0, n-1);
}