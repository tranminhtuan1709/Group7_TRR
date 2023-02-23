#include <iostream>
using namespace std;


void countingSort(int arr[], int n){
    int max = arr[0];
    for (int i = 0; i < n; ++i){
        if (max < arr[i]){
            max = arr[i];
        }
    }
    int countArr[max + 1];
    for (int i = 0; i < max + 1; ++i){
        countArr[i] = 0;
    }
    for (int i = 0; i < n; ++i){
        countArr[arr[i]]++;
    }
    int arr_index = 0;
    for (int i = 0; i < max + 1; ++i){
        while(countArr[i] > 0){
            arr[arr_index] = i;
            ++arr_index;
            --countArr[i];
        }
    }
    for (int i = 0; i < n; ++i){
        cout << arr[i] << " ";
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }
    countingSort(arr, n);
}