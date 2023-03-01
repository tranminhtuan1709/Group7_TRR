#include <iostream>

using namespace std;

int x, y, d;

int EulerTotien(int n)
{
    int res = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            res -= res / i;
            while (n % i == 0)
            {
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        res -= res / n;
    }
    return res;
}

void InverseModulo(int a, int m)
{
    if (m == 0)
    {
        x = 1;
        y = 0;
        d = a;
    }
    else
    {
        InverseModulo(m, a % m);
        int temp = x;
        x = y;
        y = temp - (a / m) * y;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, e;
    cin >> e >> n;
    int modul = EulerTotien(n);
    InverseModulo(e, modul);
    d != 1 ? cout << "No Solution!" : cout << (x %  + modul) % modul;
    return 0;
}