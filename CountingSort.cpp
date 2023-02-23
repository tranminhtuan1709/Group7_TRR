#include <iostream>
#include <cstring>

using namespace std;

int n;
int a[100005];
int frequency[100005];
int res[100005];
int maxN = -1;
int minN = 1e9;

void CountingSort()
{
    for (int i = minN + 1; i <= maxN; i++) frequency[i] += frequency[i - 1];
    for (int i = 0; i < n; i++)
    {
        res[frequency[a[i]]] = a[i];
        frequency[a[i]]--;
    }
}

int main()
{
    cin >> n;
    memset(frequency, 0, sizeof(frequency));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        frequency[a[i]]++;
        maxN = max(maxN, a[i]);
        minN = min(minN, a[i]);
    }
    CountingSort();
    for (int i = 1; i <= n; i++) cout << res[i] << ' ';
    return 0;
}