#include <bits/stdc++.h>
using namespace std;
const int N = 20;
int a[N], d[N];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];

        d[i] = min(5, a[i] - 1);
    }
    if (d[1] >= 5)
        d[1] = 5;
    else
        d[1] += 2;
    for (int i = 1; i <= n; i++)
        cout << d[i] << ' ';
    return 0;
}