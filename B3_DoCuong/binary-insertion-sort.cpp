#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int left, int right, int key)
{
    int mid = (left + right) / 2;
    while (right >= left)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            return binarySearch(arr, n, left, mid - 1, key);
        }
        else
        {
            return binarySearch(arr, n, mid + 1, right, key);
        }
    }
    if (arr[left] == key)
        return left;
    return -1;
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