#include <iostream>
using namespace std;
int ternarySearch(int l, int r, int key, int a[])
{
    if (r >= l)
    {

        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (a[mid1] == key)
        {
            return mid1;
        }
        if (a[mid2] == key)
        {
            return mid2;
        }
        if (key < a[mid1])
        {
            return ternarySearch(l, mid1 - 1, key, a);
        }
        else if (key > a[mid2])
        {
            return ternarySearch(mid2 + 1, r, key, a);
        }
        else
        {
            return ternarySearch(mid1 + 1, mid2 - 1, key, a);
        }
    }

    return -1;
}
int main()
{
    int l, r, t;
    int a[] = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 };
    int key = 55;
    t = ternarySearch(0, 9, key, a);
    cout << "Index of " << key
         << " is " << t << "\n";

    /*int key1 = 11;
    t = ternarySearch(l, r, key1, a);
    cout << "Index of " << key
         << " is " << t << "\n";*/
}

