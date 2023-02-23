#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key) {
	while (left <= right) {
        int mid = left + (right-left)/2;
        if (key < arr[mid]) {
            right = mid - 1;
        } 
        else {
            left = mid + 1;
        }
    }
    return left;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int val, pos, j;
    for (int i = 0; i < n; i++)
    {
        val = arr[i];
        pos = binarySearch(arr, n, 0, i - 1, val);
        j = i;
        while (j > pos)
        {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = val;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
