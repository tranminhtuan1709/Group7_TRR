#include <iostream>

using namespace std;

int key;
int n;
int a[100005];

int TernarySearch(int left, int right)
{
    if (left <= right)
    {
        int step = (right - left + 1) / 3;
        int u = left + step;
        int v = right - step;
        if (key == a[u]) return u;
        else if (key == a[v]) return v;
        else if (key < a[u]) return TernarySearch(left, u - 1);
        else if (key > a[v]) return TernarySearch(v + 1, right);
        else return TernarySearch(u + 1, v + 1);
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> key;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (TernarySearch(0, n - 1) == -1) cout << "Khong tim thay key trong day!";
    else cout << TernarySearch(0, n - 1) + 1;
    return 0;
}