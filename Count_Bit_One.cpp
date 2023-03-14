#include <iostream>

using namespace std;

int ones(string s)
{
    if (s.size() == 0)
    {
        return 0;
    }
    char c = s[0];
    s.erase(0, 1);
    return c == '1' ? ones(s) + 1 : ones(s);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    cout << ones(s);
    return 0;
}