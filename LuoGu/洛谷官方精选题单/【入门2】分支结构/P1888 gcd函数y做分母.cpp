#include <bits/stdc++.h>
using namespace std;

int d[10];

int gcd(int x, int y)
{
    return y == 0 ? x : gcd(y, x % y);//y加上辗转相除法x % y
}

int main()
{
    int u, w, v;
    for (int i = 0; i < 3; i++)
    {
        cin >> d[i];
    }
    sort(d, d + 3);

    v = gcd(d[0], d[2]);

    u = d[0] / v;
    w = d[2] / v;
    //cout << u << ' ' << w << '\n';
    cout << d[0] / v << '/' << d[2] / v;
    return 0;
}
