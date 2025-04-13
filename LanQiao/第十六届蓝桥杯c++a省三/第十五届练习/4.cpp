#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int k, t, a[100005], b[100005];
long long s[100005], sq[100005];

bool check(int m)
{
    memcpy(b, a, sizeof(int) * (m + 1));
    sort(b + 1, b + 1 + m);
    for (int i = 1; i <= m; i++)
        s[i] = s[i - 1] + b[i], sq[i] = sq[i - 1] + (long long)b[i] * b[i];
    for (int i = k; i <= m; i++)
        if ((sq[i] - sq[i - k]) * 1.0 / k - ((s[i] - s[i - k]) * 1.0 / k) * ((s[i] - s[i - k]) * 1.0 / k) < t)
            return true;
    return false;
}

int get(int l, int r)
{
    int ans = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (check(m))
            ans = m, r = m - 1;
        else
            l = m + 1;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n >> k >> t;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << get(k, n) << '\n';

    return 0;
}