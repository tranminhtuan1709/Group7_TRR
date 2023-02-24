#include <iostream>
#include <cstring>
#include<vector>

using namespace std;

int n;
int f[100005];
int res[100005];
int MAX_N = -1;
int MIN_N = 1e9;

void CountingSort()
{
    for (int i = MIN_N + 1; i <= MAX_N; i++) f[i] += f[i - 1];
    
    for (int i = 0; i < n; i++)
    {
        res[f[a[i]]] = a[i];
        f[a[i]]--;
    }
}

int main()
{
    cin >> n;
    memset(f, 0, sizeof(f));
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        f[a[i]]++;
        
        MAX_N = max(MAX_N, a[i]);
        
        MIN_N = min(MIN_N, a[i]);
    }
    CountingSort();
    for (int i = 1; i <= n; i++) cout << res[i] << ' ';
    return 0;
}
