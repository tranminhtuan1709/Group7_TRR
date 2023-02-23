#include <iostream>

using namespace std;

int n, a[100005];

int BinarySearch(int left, int right, int key)
{
    if (right >= left)
    {
        int mid = (left + right) / 2;
        if (a[mid] == key) return mid + 1;
        else if (a[mid] > key) return BinarySearch(left, mid - 1, key);
        else return BinarySearch(mid + 1, right, key);
    }
    return left;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        int insertValue = a[i];
        int insertPos = BinarySearch(0, i - 1, insertValue);
        int j = i;
        while (j > insertPos)   
        {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = insertValue;
    }
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    return 0;
}