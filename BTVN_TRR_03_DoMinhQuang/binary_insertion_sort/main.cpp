#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int x, l, r, m;
    for (int i = 1; i < n; i++)
    {
        x = a[i];
        l = 0;
        r = i - 1;
        while (l <= r)
        {
            m = (l + r)/2;
            if (x < a[m]) r = m - 1;
            else l = m + 1;
        }
        for (int j = i - 1; j >= l; j--)
        {
            a[j+1] = a[j];
        }
        a[l] = x;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
