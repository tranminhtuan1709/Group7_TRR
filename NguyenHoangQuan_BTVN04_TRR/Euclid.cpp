#include <iostream>
#include <vector>
using namespace std;

void Eculid(int a, int b)
{
    vector<int> E;
    int m = a;
    int n = b;
    int xm = 1;
    int ym = 0;
    int xn = 0;
    int yn = 1;
    while (n != 0)
    {
        int q = m/n;
        int r = m % n;
        int xr = xm - q*xn;
        int yr = ym - q*yn;
        m = n;
        xm = xn;
        ym = yn;
        n = r;
        xn = xr;
        yn = yr;
        cout<<xr<<" "<<yr<<endl
            <<xm<<" "<<ym<<endl
            <<xn<<" "<<yn<<endl;
    }
        E.push_back(xm);
        E.push_back(ym);
        //E.push_back(m);
        int s = E.size();
        /*for(int i = 0;i < s; i ++)
        {
            cout<<E[i]<<"\t";
        }*/
}
int main()
{
    int a,b;
    cin>>a>>b;
    Eculid(a,b);
    return 0;
}
