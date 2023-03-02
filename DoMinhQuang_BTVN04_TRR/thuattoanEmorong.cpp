#include <bits/stdc++.h>

using namespace std;

void ext_gcd(int a, int b)
{
    int xa = 1, ya = 0;
    int xb = 0, yb = 1;
    while (b != 0)
    {
    	int q = a/b;
        int r = a % b;
        a = b; b = r;
        int xr = xa - q*xb, yr = ya - q*yb;
        
        xa = xb;
		ya = yb;
        
        xb = xr;
		yb = yr;
	}
    cout << xa << " " << ya;
}

    
int main ()
{
	int a, b; cin >> a >> b;
	ext_gcd(a, b);
	return 0;
}
