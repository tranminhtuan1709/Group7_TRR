#include <bits/stdc++.h>

using namespace std;

int main()
{
    int socantim; cin >> socantim;
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l = 0, r = n - 1;
    int mid1, mid2;

    while (r >= l)
    {
        mid1 = l + (r - l)/3;
        mid2 = r - (r - l)/3;
        if (socantim == a[mid1])
        {
            cout << mid1 + 1;
            break;
        }
        if (socantim == a[mid2])
        {
            cout << mid2 + 1;
            break;
        }
        if (socantim < a[mid1]) r = mid1 - 1;
        else if (socantim > a[mid2]) l = mid2 + 1;
            else {
                l = mid1 + 1;
                r = mid2 - 1;
            }
    }
    return 0;
}
