#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxx_a = a[0];

    for (int i = 1; i < n; i++)
    {
        if (maxx_a < a[i]) maxx_a = a[i];
    }
    int b[maxx_a + 1];

    for (int i = 0; i < maxx_a + 1; i++)
    {
        b[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        b[a[i]]++;
    }

    int p = 0;
    for (int i = 0; i < maxx_a + 1; i++)
    {
        while (b[i] > 0)
        {
            a[p] = i;
            p++;
            b[i]--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
